#include "LayerTypeToolBar.h"
#include <QIcon>
#include <QComboBox>

LayerTypeToolBar::LayerTypeToolBar(QWidget *parent) : QToolBar(parent)
{

}



void LayerTypeToolBar::setup()
{
    this->setStyleSheet(qssToolBar);
    this->setOrientation(Qt::Horizontal);
    this->setMovable(false);
    if (toolButtonDatas == nullptr) {
        return ;
    }

    int i = 0;
    for(ToolButtonData * data=toolButtonDatas; i<LAYERTYPE_TOOLBUTTONDATAS_SIZE; data++){
        if (data->type == "ComboBox") {
            QComboBox * comboBox = new QComboBox(this);
            comboBox->setStyleSheet(qssComboBox);
            this->addWidget(comboBox);
        }else {
            QAction * action = new QAction(this);
            action->setIcon(QIcon(data->icon));
            action->setToolTip(data->tip);
            action->setData(QVariant(data->name));
            this->addAction(action);
        }
        i++;
    }
}
