#include "LayerPanelWidget.h"

#define LAYERPANELWIDGET_MARGIN 2
#define LAYERPANELWIDGET_W 50
#define LAYERPANELWIDGET_ITEM_MARGIN 8
#define LAYERPANELWIDGET_ITEM_HT 28
#define LAYERPANELWIDGET_ITEM_WT 30

#define CHANELWIDGET_HT 90
#define CHROMATOGRAMWIDGET_HT 16

LayerPanelWidget::LayerPanelWidget(QWidget *parent) : QLabel(parent)
{
    //setAutoFillBackground(true);
}

void LayerPanelWidget::setup()
{
    setStyleSheet(qss);
    QRect rect = geometry();
    int x = -1;
    int y = LAYERPANELWIDGET_MARGIN;
    int w = rect.width() + 2;
    int h = LAYERPANELWIDGET_ITEM_HT;

    layerTypeToolbar = new LayerTypeToolBar(this);
    layerTypeToolbar->setGeometry(x, y, w, h);
    layerTypeToolbar->setup();

    layerOpacityToolbar = new LayerOpacityToolBar(this);
    y += LAYERPANELWIDGET_ITEM_HT;
    layerOpacityToolbar->setGeometry(x, y, w, h);
    layerOpacityToolbar->setup();

    layerLockToolbar = new LayerLockToolBar(this);
    y += LAYERPANELWIDGET_ITEM_HT;
    layerLockToolbar->setGeometry(x, y, w, h);
    layerLockToolbar->setup();

    layerLogListWidget = new LayerLogListWidget(layerLogListItemData, LAYERLOGITEMDATA_SIZE, this);
    y += LAYERPANELWIDGET_ITEM_HT;
    h = rect.height() - y;
    layerLogListWidget->setGeometry(x, y, w, h);
    layerLogListWidget->setup();
}


