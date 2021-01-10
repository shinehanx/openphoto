#ifndef COLORWIDGET_H
#define COLORWIDGET_H

#include <QWidget>
#include <QLabel>
#include "FillStrokeColorWidget.h"
#include "ColorItemWidget.h"

class ColorWidget : public QLabel
{
    Q_OBJECT
private:
    const QString qss = "QLabel{background-color:#535353;border: 0px}";
    FillStrokeColorWidget * fillStrokeColorWidget = nullptr;
    ColorItemWidget * colorItemWidget = nullptr;
public:
    explicit ColorWidget(QWidget *parent = nullptr);
    void setup();
signals:

};

#endif // COLORWIDGET_H
