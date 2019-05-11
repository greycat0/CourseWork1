#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{


    ui->setupUi(this);
    ui->verticalLayout_2->setAlignment(ui->add_button, Qt::AlignCenter);
    ui->verticalLayout->setAlignment(ui->edit_button, Qt::AlignCenter);
    ui->centralWidget->layout()->setAlignment(ui->save_button, Qt::AlignRight);


    QFile xmlFile("templates.xml");
    xmlFile.open(QIODevice::ReadOnly);

    QDomDocument document;
    document.setContent(&xmlFile);

    QDomNodeList symbolList = document.elementsByTagName("symbol");

    for (int i = 0; i < symbolList.count(); i++)
    {
        ui->listWidget->addItem( symbolList.at(i).toElement().attribute("symbol"));
        QListWidgetItem *lastItem = ui->listWidget->item( ui->listWidget->count() - 1);

        QString templateData = symbolList.at(i).childNodes().at(0).toElement().text();
        QString perfectData = symbolList.at(i).childNodes().at(1).toElement().text();

        int row = -1;
        int column = -1;
        for (QChar o : perfectData)
        {
            if (o == '\n')
            {
                row++;
            }
            if (row == 0)
            {
                column++;
            }
        }

        QImage background(column, row, QImage::Format_Mono);
        perfectData.remove('\n');
        for (int x = 0; x < column; x++)
        {
            for (int y = 0; y < row; y++)
            {
                if (perfectData[y*column + x] == "1")
                {
                    background.setPixel(x, y, 0);
                }
                else
                {
                    background.setPixel(x, y, 1);
                }
            }
        }

        templateData.remove('\n');
        char **map_template = new char* [row];
        for ( int i = 0; i < row; i++)
        {
            map_template[i] = new char[column];
            for (int j = 0; j < column; j++)
            {
                if (templateData[i*column + j] == "1")
                {
                    map_template[i][j] = 1;
                }
                else
                {
                    map_template[i][j] = 0;
                }
            }
        }

        MapWidget *map = new MapWidget(ui->scrollArea->widget(), 30);
        ui->scrollArea->widget()->layout()->addWidget(map);
        map->set_background(&background);
        map->setMap(map_template);
        map->hide();

        maps.insert(lastItem, map);
        ui->listWidget->setItemSelected(lastItem , true);
    }

    xmlFile.close();

}



MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_add_button_clicked()
{
    QString symbol_text = QInputDialog::getText(this, "Добавить новый символ", "Введите символ");
    if (symbol_text != "")
    {
        ui->listWidget->addItem(symbol_text);
        QListWidgetItem *lastItem = ui->listWidget->item( ui->listWidget->count() - 1);

        MapWidget *map = new MapWidget(ui->scrollArea->widget(), 30);
        ui->scrollArea->widget()->layout()->addWidget(map);
        maps.insert(lastItem, map);
        map->hide();
        ui->listWidget->setItemSelected(lastItem , true);
    }
}

void MainWindow::on_edit_button_clicked()
{
    if (currentMap != nullptr)
    {
        QString name = QFileDialog::getOpenFileName(this, "Выбрать эталон");
        currentMap->set_background(name);
    }
}

void MainWindow::on_listWidget_itemSelectionChanged()
{

    currentMap = maps.value( *ui->listWidget->selectedItems().begin() );
    if (currentMap != nullptr)
    {
        foreach (auto i, maps)
        {
            i->hide();
        }
        currentMap->show();
        ui->scrollArea->widget()->layout()->addWidget(currentMap);
    }
}


void MainWindow::on_save_button_clicked()
{
    QFile xmlFile("templates.xml");
    xmlFile.open(QIODevice::WriteOnly);

    QDomDocument document("templates");
    QDomElement root = document.createElement("templates");
    document.appendChild(root);

    QList <QListWidgetItem*> keys = maps.keys();

    qSort( keys.begin(), keys.end(), [](const QListWidgetItem* first, const QListWidgetItem* second){
        return first->text() < second->text();
    });

    foreach ( auto *i, keys)
    {

        if (maps.value(i)->rawMap() != nullptr)
        {
            QDomElement symbol =  document.createElement("symbol");
            QDomElement perfect =  document.createElement("perfect");
            QDomElement _template =  document.createElement("template");

            symbol.setAttribute("symbol", i->text());

            QString map = "";
            for (int n = 0; n < maps.value(i)->rowCount(); n++)
            {
                map += "\n";
                for (int m = 0; m < maps.value(i)->columnCount(); m++)
                {
                    map += QString::number( maps.value(i)->rawMap()[n][m]);
                }
            }
            map += "\n";

            _template.appendChild( document.createTextNode( map));
            map.clear();

            for (int x = 0; x < maps.value(i)->rowCount(); x++)
            {
                map += "\n";
                for (int y = 0; y < maps.value(i)->columnCount(); y++)
                {
                    if (maps.value(i)->getBackground()->pixel(y, x) == black)
                    {
                        map += "1";
                    }
                    else
                    {
                        map += "0";
                    }
                }
            }
            map += "\n";

            perfect.appendChild( document.createTextNode( map));

            symbol.appendChild(_template);
            symbol.appendChild(perfect);
            root.appendChild(symbol);
        }
    }

    QTextStream output(&xmlFile);
    document.save(output, 10);
    xmlFile.close();
}
