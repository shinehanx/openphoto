#include "LevelChanelPathTab.h"

LevelChanelPathTab::LevelChanelPathTab(QWidget *parent) : QTabWidget(parent)
{

}

void LevelChanelPathTab::setup()
{
    setStyleSheet(qssTab);
    levelWidget = new QLabel(this);
    levelWidget->setFixedSize(250, 300);
    levelWidget->setText("levelWidget");

    chanelWidget = new QLabel(this);
    chanelWidget->setFixedSize(250, 300);
    chanelWidget->setText("plansWidget");

    pathWidget = new QLabel(this);
    pathWidget->setFixedSize(250, 300);
    pathWidget->setText("pathWidget");

    addTab(levelWidget, "图层");
    addTab(chanelWidget, "通道");
    addTab(pathWidget, "路径");
}
