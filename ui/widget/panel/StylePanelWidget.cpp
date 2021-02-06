#include "StylePanelWidget.h"

#define STYLEPANELWIDGET_MARGIN 2
#define STYLEPANELWIDGET_TOOLBAR_H 16

StylePanelWidget::StylePanelWidget(QWidget *parent) : QLabel(parent)
{
    //setAutoFillBackground(true);
}

void StylePanelWidget::setup()
{
    setStyleSheet(qss);
    QRect rect = geometry();

    int x = STYLEPANELWIDGET_MARGIN, y = STYLEPANELWIDGET_MARGIN, w = rect.width(), h = rect.height() - STYLEPANELWIDGET_TOOLBAR_H;
    
    gridListWidget = new GridListWidget(styleItemData, STYLEPANEL_ITEM_SIZE, this);
    gridListWidget->setGeometry(x, y, w, h);
    gridListWidget->setup();

    toolbar = new QToolBar(this);
    x = -1, y = rect.height() - STYLEPANELWIDGET_TOOLBAR_H;
    w = rect.width() + 2, h = STYLEPANELWIDGET_TOOLBAR_H;
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


