#include "ColorPanelWidget.h"

#define FILLSTROKECOLORWIDGET_MARGIN 5
#define FILLSTROKECOLORWIDGET_W 50
#define FILLSTROKECOLORWIDGET_HT 50

#define CHANELWIDGET_HT 90
#define CHROMATOGRAMWIDGET_HT 16

ColorPanelWidget::ColorPanelWidget(QWidget *parent) : QLabel(parent)
{
    //setAutoFillBackground(true);
}

void ColorPanelWidget::setup()
{
    setStyleSheet(qss);
    QRect rect = geometry();
    int x = FILLSTROKECOLORWIDGET_MARGIN,
        y = FILLSTROKECOLORWIDGET_MARGIN,
        w = FILLSTROKECOLORWIDGET_W,
        h = FILLSTROKECOLORWIDGET_HT;
    fillStrokeColorWidget = new FillStrokeColorWidget(this);
    fillStrokeColorWidget->setGeometry(x, y, w, h);
    fillStrokeColorWidget->setup();

    x = FILLSTROKECOLORWIDGET_MARGIN * 2 + FILLSTROKECOLORWIDGET_W;
    w = rect.width() - x - FILLSTROKECOLORWIDGET_MARGIN;
    h = CHANELWIDGET_HT;
    rgbChanelWidget = new RgbChanelWidget(this);
    rgbChanelWidget->setGeometry(x, y, w, h);
    rgbChanelWidget->setup();

    x = FILLSTROKECOLORWIDGET_MARGIN ;
    y = rect.height() - CHROMATOGRAMWIDGET_HT - 2 * FILLSTROKECOLORWIDGET_MARGIN;
    w = rect.width() - 2 * FILLSTROKECOLORWIDGET_MARGIN;
    h = CHROMATOGRAMWIDGET_HT;
    chromatogramWidget = new ChromatogramWidget(this);
    chromatogramWidget->setGeometry(x, y, w, h);
    chromatogramWidget->setup();
}
