#include "FillStrokeColorWidget.h"
#include <QDebug>

#define FILLSTROKECOLORWIDGET_MARGIN 0
#define FILLSTROKECOLORWIDGET_RATE 0.7 //宽高比例

FillStrokeColorWidget::FillStrokeColorWidget(QWidget *parent) : QWidget(parent)
{
    //QWidget表示可更改背景
    setAutoFillBackground(true);
}

void FillStrokeColorWidget::setup()
{
    QRect rect = geometry();
    int x = FILLSTROKECOLORWIDGET_MARGIN,
        y = FILLSTROKECOLORWIDGET_MARGIN,
        w = rect.width() * FILLSTROKECOLORWIDGET_RATE,
        h = rect.height() * FILLSTROKECOLORWIDGET_RATE;


    fillColorView = new QLabel(this);
    fillColorView->setStyleSheet(qssFillColorView.arg(fillColor));
    fillColorView->setGeometry(x, y, w, h);
    qDebug() << "FillStrokeColorWidget front:" << QRect(x,y,w,h);

    strokeColorView = new QLabel(this);
    strokeColorView->setStyleSheet(qssStrokeColorView.arg(strokeColor).arg(fillColor));
    x = rect.width() - w;
    y = rect.height() - h;
    strokeColorView->setGeometry(x, y, w, h);
    qDebug() << "FillStrokeColorWidget back:" << QRect(x,y,w,h);

    fillColorView->raise();
}
