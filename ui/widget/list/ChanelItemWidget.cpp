#include "ChanelItemWidget.h"
#define LAYERLOGITEMWIDGET_EYE_W 30
#define LAYERLOGITEMWIDGET_EYE_H 25
ChanelItemWidget::ChanelItemWidget(QWidget *parent) : QWidget(parent)
{
    setAutoFillBackground(true);
    setStyleSheet(qss);
}

ChanelItemWidget::ChanelItemWidget(QString _imgPath, QString _itemText, QString _shotcutText, QWidget *parent) : QWidget(parent)
{
    imgPath = _imgPath;
    itemText = _itemText;
    shotcutText = _shotcutText;

    setAutoFillBackground(true);
    setStyleSheet(qss);
}

void ChanelItemWidget::setup()
{
    QRect rect = geometry();
    int x = 0, y = 0, w = LAYERLOGITEMWIDGET_EYE_W, h = LAYERLOGITEMWIDGET_EYE_H;
    eye = new GridItemWidget(":/rc/images/toolbar/layerpanel/eye.png", QSize(14, 14),this);
    eye->setGeometry(x, y, w, h);
    eye->setup();

    x += LAYERLOGITEMWIDGET_EYE_W + 1;
    w = rect.width() - x;
    imgItem = new LogItemWidget(imgPath, itemText, shotcutText, this);
    imgItem->setGeometry(x, y, w, h);
    imgItem->setup();

}
