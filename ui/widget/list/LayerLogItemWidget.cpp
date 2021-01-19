#include "LayerLogItemWidget.h"
#define LAYERLOGITEMWIDGET_EYE_W 30
#define LAYERLOGITEMWIDGET_EYE_H 25
LayerLogItemWidget::LayerLogItemWidget(QWidget *parent) : QWidget(parent)
{
    setAutoFillBackground(true);
}

LayerLogItemWidget::LayerLogItemWidget(QString _imgPath, QString _itemText, QWidget *parent) : QWidget(parent)
{
    imgPath = _imgPath;
    itemText = _itemText;
}

void LayerLogItemWidget::setup()
{
    QRect rect = geometry();
    int x = 0, y = 0, w = LAYERLOGITEMWIDGET_EYE_W, h = LAYERLOGITEMWIDGET_EYE_H;
    eye = new GridItemWidget(":/rc/images/toolbar/layerpanel/eye.png", QSize(14, 14),this);
    eye->setGeometry(x, y, w, h);
    eye->setup();

    x += LAYERLOGITEMWIDGET_EYE_W + 1;
    w = rect.width() - x;
    imgItem = new LogItemWidget(imgPath, itemText, this);
    imgItem->setGeometry(x, y, w, h);
    imgItem->setup();

}
