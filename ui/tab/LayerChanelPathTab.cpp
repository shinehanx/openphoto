#include "LayerChanelPathTab.h"
#include <QDebug>
LayerChanelPathTab::LayerChanelPathTab(QWidget *parent) : QTabWidget(parent)
{

}

void LayerChanelPathTab::setup()
{
    QRect rect = geometry();
    qDebug() << "LayerChanelPathTab::size():" << size() << ",parent.size():" << ((QWidget *)parent())->size();
    setStyleSheet(qssTab);
    layerPanelWidget = new LayerPanelWidget(this);
    layerPanelWidget->setGeometry(0,0, rect.width(), rect.height() - 20);
    layerPanelWidget->setup();

    chanelPanelWidget = new ChanelPanelWidget(this);
    chanelPanelWidget->setGeometry(0,0, rect.width(), rect.height() - 20);
    chanelPanelWidget->setup();

    pathPanelWidget = new PathPanelWidget(this);
    pathPanelWidget->setGeometry(0,0, rect.width(), rect.height() - 20);
    pathPanelWidget->setup();

    addTab(layerPanelWidget, "图层");
    addTab(chanelPanelWidget, "通道");
    addTab(pathPanelWidget, "路径");
}
