#include "AdjustPanelToolBar.h"
#include <QIcon>
AdjustPanelToolBar::AdjustPanelToolBar(QWidget *parent) : QToolBar(parent)
{

}

AdjustPanelToolBar::AdjustPanelToolBar(ToolButtonData *datas, int size, QWidget *parent) : QToolBar(parent)
{
    toolButtonDatas = datas;
    toolButtonSize = size;
}

void AdjustPanelToolBar::setup()
{
    this->setStyleSheet(qssToolBar);
    this->setOrientation(Qt::Horizontal);
    this->setMovable(false);
    if (toolButtonDatas == nullptr) {
        return ;
    }

    int i = 0;
    for(ToolButtonData * data=toolButtonDatas; i<toolButtonSize; data++){
        QAction * action = new QAction(this);
        action->setIcon(QIcon(data->icon));
        action->setToolTip(data->tip);
        action->setData(QVariant(data->name));
        this->addAction(action);
        i++;
    }
}
