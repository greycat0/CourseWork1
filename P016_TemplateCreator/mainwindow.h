#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <QInputDialog>
#include "mapwidget.h"
#include <QListWidgetItem>
#include <QFileDialog>
#include <QXmlStreamWriter>
#include <QXmlStreamReader>
#include <QStringList>
#include <QDomDocument>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:


    void on_add_button_clicked();

    void on_listWidget_itemSelectionChanged();

    void on_edit_button_clicked();

    void on_save_button_clicked();

private:


    QMap <QListWidgetItem*, MapWidget*> maps;
    MapWidget *currentMap;
    QRgb black = QColor(Qt::black).rgb();
    Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H
