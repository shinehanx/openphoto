#include "LayerPanelWidget.h"
#include <QDebug>
#define LAYERPANELWIDGET_MARGIN 2
#define LAYERPANELWIDGET_W 50
#define LAYERPANELWIDGET_ITEM_MARGIN 8
#define LAYERPANELWIDGET_ITEM_HT 28
#define LAYERPANELWIDGET_ITEM_WT 30

#define CHANELWIDGET_HT 90
#define CHROMATOGRAMWIDGET_HT 16
#define LAYERPANELWIDGET_TOOLBAR_H 16

LayerPanelWidget::LayerPanelWidget(QWidget *parent) : QLabel(parent)
{
    //setAutoFillBackground(true);
}

void LayerPanelWidget::setup()
{
    setStyleSheet(qss);
    QRect rect = geometry();
    qDebug() << "LayerPanelWidget::size():" << size() << ",parent.size():" << ((QWidget *)parent())->size();

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
    h = rect.height() - y - LAYERPANELWIDGET_TOOLBAR_H - LAYERPANELWIDGET_MARGIN;
    layerLogListWidget->setGeometry(x, y, w, h);
    qDebug() << "LayerPanelWidget::layerLogListWidget::rect():" << layerLogListWidget->geometry() << ",parent.size():" << ((QWidget *)parent())->size();
    layerLogListWidget->setup();

    toolbar = new QToolBar(this);
    x = -1, y = rect.height() - LAYERPANELWIDGET_TOOLBAR_H - LAYERPANELWIDGET_MARGIN;
    w = rect.width() + 2, h = LAYERPANELWIDGET_TOOLBAR_H;
    toolbar->setGeometry(x, y, w, h);
    qDebug() << "LayerPanelWidget::toolbar::rect():" << toolbar->geometry() << ",parent.size():" << ((QWidget *)parent())->size();
    toolbar->setOrientation(Qt::Horizontal);
    toolbar->setLayoutDirection(Qt::RightToLeft);
    toolbar->setToolButtonStyle(Qt::ToolButtonIconOnly);
    toolbar->setStyleSheet(qssToolBar);

    delAction = new QAction(this);
    delAction->setIcon(QIcon(":/rc/images/toolbar/panspanel/del-pans.png"));
    newAction = new QAction(this);
    newAction->setIcon(QIcon(":/rc/images/toolbar/panspanel/new-pans.png"));
    forbidAction = new QAction(this);
    forbidAction->setIcon(QIcon(":/rc/images/toolbar/panspanel/forbid.png"));
    toolbar->addAction(delAction);
    toolbar->addAction(newAction);
    toolbar->addAction(forbidAction);
}


