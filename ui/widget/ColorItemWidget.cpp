#include "ColorItemWidget.h"

#define COLORITEMWIDGET_MARGIN 5
#define COLORITEMWIDGET_LABEL_W 10
#define COLORITEMWIDGET_LABEL_H 10
#define COLORITEMWIDGET_COLOR_H 5

#define COLORITEMWIDGET_EDIT_W 30
#define COLORITEMWIDGET_EDIT_H 16

ColorItemWidget::ColorItemWidget(QWidget *parent) : QWidget(parent)
{
    setAutoFillBackground(true);
}

void ColorItemWidget::setup(const QString & label)
{
    QRect rect = geometry();
    int x = COLORITEMWIDGET_MARGIN,
        y = COLORITEMWIDGET_MARGIN,
        w = COLORITEMWIDGET_LABEL_W,
        h = COLORITEMWIDGET_LABEL_H;

    //标签
    colorItemLabel = new QLabel(this);
    y += 3;
    colorItemLabel->setGeometry(x, y, w, h);
    colorItemLabel->setText(label);

    colorItemView = new QLabel(this);
    x = COLORITEMWIDGET_MARGIN * 2 + COLORITEMWIDGET_LABEL_W;
    y = COLORITEMWIDGET_MARGIN * 2;
    w = rect.width() - x - COLORITEMWIDGET_EDIT_W - COLORITEMWIDGET_MARGIN * 5;
    h = COLORITEMWIDGET_COLOR_H;
    colorItemView->setGeometry(x, y, w, h);
    colorItemView->setStyleSheet(qssColorItemView);

    colorItemSlider = new ColorItemSlider(this);
    y = y  + COLORITEMWIDGET_COLOR_H;
    h = COLORITEMWIDGET_LABEL_H;
    colorItemSlider->setGeometry(x, y, w, h);
    colorItemSlider->setup();

    colorItemEdit = new QLineEdit(this);
    x = x + w + COLORITEMWIDGET_MARGIN * 2;
    y = COLORITEMWIDGET_MARGIN;
    w = COLORITEMWIDGET_EDIT_W;
    h = COLORITEMWIDGET_EDIT_H;
    colorItemEdit->setStyleSheet(qssColorItemEdit);
    colorItemEdit->setGeometry(x, y, w, h);

}
