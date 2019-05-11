#ifndef MAPWIDGET_H
#define MAPWIDGET_H

#include <QWidget>
#include <QFrame>
#include <QLabel>
#include <QHBoxLayout>
#include <QPainter>
#include <QtEvents>
#include <QDebug>

class MapWidget: public QWidget
{
public:
    MapWidget();
    explicit MapWidget(QWidget *parent, int cell_size);
    void set_background(QString img_name);
    void set_background(QImage *img);
    void setMap(char **map);
    char **rawMap();
    int rowCount();
    int columnCount();
    int cellSize();
    QImage *getBackground();
protected:
    void reinitializeMap(int row_count, int column_count);
    void mousePressEvent(QMouseEvent *event) Q_DECL_OVERRIDE;
    void paintEvent(QPaintEvent *event) Q_DECL_OVERRIDE;

private:
    QImage background;
    QImage Background;
    int row_count = 0;
    int column_count = 0;
    int cell_size = 0;
    char **map = nullptr;
};

#endif // MAPWIDGET_H
