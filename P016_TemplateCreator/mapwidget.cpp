#include "mapwidget.h"

MapWidget::MapWidget()
{

}


void MapWidget::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event)

    QPainter painter(this);

    if (map != nullptr)
    {
        painter.drawImage(0, 0, background);

        painter.drawRect(0, 0, column_count * cell_size, row_count * cell_size);

        for (int i = 1; i < row_count; i++)
        {
            painter.drawLine(0, i * cell_size, column_count * cell_size, i * cell_size);
        }

        for (int i = 0; i < column_count; i++)
        {
            painter.drawLine(i * cell_size, 0, i * cell_size, row_count * cell_size);
        }

        for (int i = 0; i < row_count; i++)
        {
            for (int j = 0; j < column_count; j++)
            {
                int x = j * cell_size;
                int y = i * cell_size;
                if (map[i][j] == 1)
                {
                    painter.fillRect(x + 1, y + 1, cell_size - 1, cell_size - 1, Qt::blue);
                }
                else
                {
                    painter.fillRect(x + 1, y + 1, cell_size - 1, cell_size - 1, Qt::transparent);
                }
            }
        }

        painter.end();
    }
}


void MapWidget::mousePressEvent(QMouseEvent *event)
{
    if (event->type() == QEvent::MouseButtonPress)
    {
        if(map != nullptr
                && event->x() < this->minimumWidth()
                && event->y() < this->minimumHeight())
        {
            int row = event->y() / cell_size;
            int column = event->x() / cell_size;
            if ( map[row][column] == 0)
            {
                map[row][column] = 1;
            }
            else
            {
                map[row][column] = 0;
            }
            repaint();
        }
    }
}



void MapWidget::set_background(QString img_name)
{
    background = QImage(img_name);
    background = background.convertToFormat(QImage::Format_Mono);
    Background = QImage(background);
    if ( background.isNull() == false)
    {
        row_count = background.height();
        column_count = background.width();
        this->setMinimumHeight( row_count * cell_size);
        this->setMinimumWidth( column_count * cell_size);

        background = background.scaled(this->minimumWidth(), this->minimumHeight());

        reinitializeMap(row_count, column_count);
        repaint();
    }
}


void MapWidget::set_background(QImage *img)
{
    background = QImage(*img);
    background = background.convertToFormat(QImage::Format_Mono);
    Background = QImage(background);
    if ( background.isNull() == false)
    {
        row_count = background.height();
        column_count = background.width();
        this->setMinimumHeight( row_count * cell_size);
        this->setMinimumWidth( column_count * cell_size);

        background = background.scaled(this->minimumWidth(), this->minimumHeight());

        reinitializeMap(row_count, column_count);
        repaint();
    }
}


void MapWidget::reinitializeMap(int row_count, int column_count)
{
    static int prev_row_count;

    if (this->map != nullptr)
    {
        for (int i = 0; i < prev_row_count; i++)
        {
            delete[] map[i];
        }
        delete [] map;
    }


    this->map = new char* [row_count];
    for ( int i = 0; i < row_count; i++)
    {
        this->map[i] = new char[column_count];
        for (int j = 0; j < column_count; j++)
        {
            this->map[i][j] = 0;
        }
    }

    prev_row_count = row_count;
}


MapWidget::MapWidget(QWidget *parent, int cell_size) :
    QWidget(parent)
{
    this->cell_size = cell_size;
}

char **MapWidget::rawMap()
{
    return map;
}
int MapWidget::rowCount()
{
    return row_count;
}
int MapWidget::columnCount()
{
    return column_count;
}
int MapWidget::cellSize()
{
    return cell_size;
}

QImage *MapWidget::getBackground()
{
    return &Background;
}


void MapWidget::setMap(char **map)
{
    if (map != nullptr)
    {
        for ( int i = 0; i < row_count; i++)
        {
            for (int j = 0; j < column_count; j++)
            {
                this->map[i][j] = map[i][j];
            }
        }
    }
    repaint();
}
