#include "ColorWidget.h"

#define FILLSTROKECOLORWIDGET_MARGIN 5
#define FILLSTROKECOLORWIDGET_W 50
#define FILLSTROKECOLORWIDGET_H 50

ColorWidget::ColorWidget(QWidget *parent) : QLabel(parent)
{
    //setAutoFillBackground(true);
}

void ColorWidget::setup()
{
    setStyleSheet(qss);
    QRect rect = geometry();
    int x = FILLSTROKECOLORWIDGET_MARGIN,
        y = FILLSTROKECOLORWIDGET_MARGIN,
        w = FILLSTROKECOLORWIDGET_W,
        h = FILLSTROKECOLORWIDGET_H;
    fillStrokeColorWidget = new FillStrokeColorWidget(this);
    fillStrokeColorWidget->setGeometry(x, y, w, h);
    fillStrokeColorWidget->setup();

    x = FILLSTROKECOLORWIDGET_MARGIN * 2 + FILLSTROKECOLORWIDGET_W;
    w = rect.width() - x - FILLSTROKECOLORWIDGET_MARGIN;
    h = 40;
    colorItemWidget = new ColorItemWidget(this);
    colorItemWidget->setGeometry(x, y, w, h);
    colorItemWidget->setup("R");
}
