#include "RgbChanelWidget.h"
#define RGBCHANELWIDGET_CHANEL_MARGIN 5
#define RGBCHANELWIDGET_CHANEL_H 24
RgbChanelWidget::RgbChanelWidget(QWidget *parent) : QWidget(parent)
{
    setAutoFillBackground(true);
}


void RgbChanelWidget::setup()
{
    QRect rect = geometry();
    int x = RGBCHANELWIDGET_CHANEL_MARGIN,
        y = RGBCHANELWIDGET_CHANEL_MARGIN,
        w = rect.width(),
        h = RGBCHANELWIDGET_CHANEL_H;

    rColorChanelWidget = new ColorChanelWidget(this);
    rColorChanelWidget->setGeometry(x, y, w, h);
    rColorChanelWidget->setup("R");

    gColorChanelWidget = new ColorChanelWidget(this);
    y += RGBCHANELWIDGET_CHANEL_H +  RGBCHANELWIDGET_CHANEL_MARGIN;
    gColorChanelWidget->setGeometry(x, y, w, h);
    gColorChanelWidget->setup("G");

    bColorChanelWidget = new ColorChanelWidget(this);
    y += RGBCHANELWIDGET_CHANEL_H +  RGBCHANELWIDGET_CHANEL_MARGIN;
    bColorChanelWidget->setGeometry(x, y, w, h);
    bColorChanelWidget->setup("B");
}
