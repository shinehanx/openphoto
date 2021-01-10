#ifndef COLORITEMWIDGET_H
#define COLORITEMWIDGET_H

#include <QWidget>
#include <QLineEdit>
#include <QLabel>
#include "slider/ColorItemSlider.h"
class ColorItemWidget : public QWidget
{
    Q_OBJECT
private:
    const QString qssColorItemView = "QLabel {background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0,stop:0 red,stop:0.2 blue,stop:0.5 red, stop:1 green)}";
    const QString qssColorItemEdit = "QLineEdit {border:0px; color:#ffffff;}";
    //颜色
    QLabel * colorItemLabel = nullptr;
    //颜色
    QLabel * colorItemView = nullptr;
    //颜色底部滑块
    ColorItemSlider * colorItemSlider = nullptr;
    //右边的编辑框
    QLineEdit * colorItemEdit = nullptr;
public:
    explicit ColorItemWidget(QWidget *parent = nullptr);
    void setup(const QString & label);
signals:

};

#endif // COLORITEMWIDGET_H
