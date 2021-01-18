#include "LayerChanelPathTab.h"

LayerChanelPathTab::LayerChanelPathTab(QWidget *parent) : QTabWidget(parent)
{

}

void LayerChanelPathTab::setup()
{
    setStyleSheet(qssTab);
    layerPanelWidget = new LayerPanelWidget(this);
    layerPanelWidget->setFixedSize(250, 300);
    layerPanelWidget->setup();

    chanelWidget = new QLabel(this);
    chanelWidget->setFixedSize(250, 300);
    chanelWidget->setText("plansWidget");

    pathWidget = new QLabel(this);
    pathWidget->setFixedSize(250, 300);
    pathWidget->setText("pathWidget");

    addTab(layerPanelWidget, "图层");
    addTab(chanelWidget, "通道");
    addTab(pathWidget, "路径");
}
