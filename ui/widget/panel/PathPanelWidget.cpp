#include "PathPanelWidget.h"

#define PATHPANELWIDGET_HPANELWIDGET_MARGIN 1
#define PATHPANELWIDGET_HPANELWIDGET_W 50
#define PATHPANELWIDGET_HPANELWIDGET_ITEM_MARGIN 8
#define PATHPANELWIDGET_HPANELWIDGET_ITEM_HT 28
#define PATHPANELWIDGET_HPANELWIDGET_ITEM_WT 30

#define PATHWIDGET_HT 90
#define CHROMATOGRAMWIDGET_HT 16

#define PATHPANELWIDGET_TOOLBAR_H 16
#define PATHPANELWIDGET_MARGIN 2

PathPanelWidget::PathPanelWidget(QWidget *parent) : QLabel(parent)
{
    //setAutoFillBackground(true);
}

void PathPanelWidget::setup()
{
    setStyleSheet(qss);
    QRect rect = geometry();
    int x = -1;
    int y = PATHPANELWIDGET_HPANELWIDGET_MARGIN;
    int w = rect.width() + 2;
    int h = rect.height() - PATHPANELWIDGET_TOOLBAR_H - PATHPANELWIDGET_MARGIN - PATHPANELWIDGET_HPANELWIDGET_MARGIN;

    pathListWidget = new ChanelListWidget(pathListItemData, PATHITEMDATA_SIZE, this);
    pathListWidget->setGeometry(x, y, w, h);
    pathListWidget->setup();


    toolbar = new QToolBar(this);
    x = -1, y = rect.height() - PATHPANELWIDGET_TOOLBAR_H - PATHPANELWIDGET_MARGIN;
    w = rect.width() + 2, h = PATHPANELWIDGET_TOOLBAR_H;
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


