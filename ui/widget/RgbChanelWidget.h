#ifndef RGBCHANELWIDGET_H
#define RGBCHANELWIDGET_H

#include <QWidget>
#include "ColorChanelWidget.h"

class RgbChanelWidget : public QWidget
{
    Q_OBJECT
private:
    ColorChanelWidget * rColorChanelWidget;
    ColorChanelWidget * gColorChanelWidget;
    ColorChanelWidget * bColorChanelWidget;
public:
    explicit RgbChanelWidget(QWidget *parent = nullptr);
    void setup();
signals:

};

#endif // RGBCHANELWIDGET_H
