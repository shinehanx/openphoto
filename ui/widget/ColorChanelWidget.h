#ifndef COLORCHANELWIDGE_H
#define COLORCHANELWIDGE_H

#include <QWidget>
#include <QLineEdit>
#include <QLabel>
#include "slider/ColorChanelSlider.h"
class ColorChanelWidget : public QWidget
{
    Q_OBJECT
private:
    const QString qssColorChanelView = "QLabel {background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0,stop:0 red,stop:0.2 blue,stop:0.5 red, stop:1 green)}";
    const QString qssColorChanelEdit = "QLineEdit {border:0px; color:#ffffff;}";
    //颜色
    QLabel * colorChanelLabel = nullptr;
    //颜色
    QLabel * colorChanelView = nullptr;
    //颜色底部滑块
    ColorChanelSlider * colorChanelSlider = nullptr;
    //右边的编辑框
    QLineEdit * colorChanelEdit = nullptr;
public:
    explicit ColorChanelWidget(QWidget *parent = nullptr);
    void setup(const QString & label);
signals:

};

#endif // COLORCHANELWIDGE_H
