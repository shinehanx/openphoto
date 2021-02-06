#include "ChanelPanelWidget.h"

#define CHANELPANELWIDGET_HPANELWIDGET_MARGIN 1
#define CHANELPANELWIDGET_HPANELWIDGET_W 50
#define CHANELPANELWIDGET_HPANELWIDGET_ITEM_MARGIN 8
#define CHANELPANELWIDGET_HPANELWIDGET_ITEM_HT 28
#define CHANELPANELWIDGET_HPANELWIDGET_ITEM_WT 30

#define CHANELWIDGET_HT 90
#define CHROMATOGRAMWIDGET_HT 16

#define CHANELPANELWIDGET_TOOLBAR_H 16
#define CHANELPANELWIDGET_MARGIN 2

ChanelPanelWidget::ChanelPanelWidget(QWidget *parent) : QLabel(parent)
{
    //setAutoFillBackground(true);
}

void ChanelPanelWidget::setup()
{
    setStyleSheet(qss);
    QRect rect = geometry();
    int x = -1;
    int y = CHANELPANELWIDGET_HPANELWIDGET_MARGIN;
    int w = rect.width() + 2;
    int h = rect.height() - CHANELPANELWIDGET_TOOLBAR_H  - CHANELPANELWIDGET_MARGIN -1;

    chanelListWidget = new ChanelListWidget(chanelListItemData, CHANELITEMDATA_SIZE, this);
    chanelListWidget->setGeometry(x, y, w, h);
    chanelListWidget->setup();

    toolbar = new QToolBar(this);
    x = -1, y = rect.height() - CHANELPANELWIDGET_TOOLBAR_H - CHANELPANELWIDGET_MARGIN;
    w = rect.width() + 2, h = CHANELPANELWIDGET_TOOLBAR_H;
    toolbar->setGeometry(x, y, w, h);
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


