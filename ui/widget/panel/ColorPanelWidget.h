#ifndef COLORPANELWIDGET_H
#define COLORPANELWIDGET_H

#include <QWidget>
#include <QLabel>
#include "../FillStrokeColorWidget.h"
#include "../RgbChanelWidget.h"
#include "../ChromatogramWidget.h"

class ColorPanelWidget : public QLabel
{
    Q_OBJECT
private:
    const QString qss = "QLabel{background-color:#535353;border: 0px}";
    FillStrokeColorWidget * fillStrokeColorWidget = nullptr;
    RgbChanelWidget * rgbChanelWidget = nullptr;
    ChromatogramWidget * chromatogramWidget = nullptr;
public:
    explicit ColorPanelWidget(QWidget *parent = nullptr);
    void setup();
signals:

};

#endif // COLORPANELWIDGET_H
