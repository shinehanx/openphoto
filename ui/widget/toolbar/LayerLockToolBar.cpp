#include "LayerLockToolBar.h"
#include <QIcon>
#include <QComboBox>
#include <QLabel>

LayerLockToolBar::LayerLockToolBar(QWidget *parent) : QToolBar(parent)
{

}



void LayerLockToolBar::setup()
{
    this->setStyleSheet(qssToolBar);
    this->setOrientation(Qt::Horizontal);
    this->setMovable(false);
    if (toolButtonDatas == nullptr) {
        return ;
    }

    int i = 0;
    for(ToolButtonData * data=toolButtonDatas; i<LAYERLOCK_TOOLBUTTONDATAS_SIZE; data++){
        if (data->type == "ComboBox") {
            QComboBox * comboBox = new QComboBox(this);
            comboBox->setFixedSize(30, 20);
            comboBox->setStyleSheet(qssComboBox);
            this->addWidget(comboBox);
        }else if (data->type == "Label") {
            QLabel * label = new QLabel(this);
            label->setFixedSize(40, 20);
            label->setStyleSheet(qssLabel);
            label->setAlignment(Qt::AlignRight);
            label->setText(data->name);
            this->addWidget(label);
        } else {
            QAction * action = new QAction(this);
            action->setIcon(QIcon(data->icon));
            action->setToolTip(data->tip);
            action->setData(QVariant(data->name));
            this->addAction(action);
        }
        i++;
    }
}
