#include "ColorChanelWidget.h"

#define COLORCHANELWIDGET_MARGIN 5
#define COLORCHANELWIDGET_LABEL_W 10
#define COLORCHANELWIDGET_LABEL_H 10
#define COLORCHANELWIDGET_COLOR_H 5

#define COLORCHANELWIDGET_EDIT_W 30
#define COLORCHANELWIDGET_EDIT_H 16

ColorChanelWidget::ColorChanelWidget(QWidget *parent) : QWidget(parent)
{
    setAutoFillBackground(true);
}

void ColorChanelWidget::setup(const QString & label)
{
    QRect rect = geometry();
    int x = COLORCHANELWIDGET_MARGIN,
        y = COLORCHANELWIDGET_MARGIN,
        w = COLORCHANELWIDGET_LABEL_W,
        h = COLORCHANELWIDGET_LABEL_H;

    //标签
    colorChanelLabel = new QLabel(this);
    y += 3;
    colorChanelLabel->setGeometry(x, y, w, h);
    colorChanelLabel->setText(label);

    colorChanelView = new QLabel(this);
    x = COLORCHANELWIDGET_MARGIN * 2 + COLORCHANELWIDGET_LABEL_W;
    y = COLORCHANELWIDGET_MARGIN * 2;
    w = rect.width() - x - COLORCHANELWIDGET_EDIT_W - COLORCHANELWIDGET_MARGIN * 5;
    h = COLORCHANELWIDGET_COLOR_H;
    colorChanelView->setGeometry(x, y, w, h);
    colorChanelView->setStyleSheet(qssColorChanelView);

    colorChanelSlider = new ColorChanelSlider(this);
    y = y  + COLORCHANELWIDGET_COLOR_H;
    h = COLORCHANELWIDGET_LABEL_H;
    colorChanelSlider->setGeometry(x, y, w, h);
    colorChanelSlider->setup();

    colorChanelEdit = new QLineEdit(this);
    x = x + w + COLORCHANELWIDGET_MARGIN * 2;
    y = COLORCHANELWIDGET_MARGIN;
    w = COLORCHANELWIDGET_EDIT_W;
    h = COLORCHANELWIDGET_EDIT_H;
    colorChanelEdit->setStyleSheet(qssColorChanelEdit);
    colorChanelEdit->setGeometry(x, y, w, h);

}
