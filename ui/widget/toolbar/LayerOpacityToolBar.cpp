#include "LayerOpacityToolBar.h"
#include <QIcon>
#include <QComboBox>
#include <QLabel>

LayerOpacityToolBar::LayerOpacityToolBar(QWidget *parent) : QToolBar(parent)
{

}



void LayerOpacityToolBar::setup()
{
    this->setStyleSheet(qssToolBar);
    this->setOrientation(Qt::Horizontal);
    this->setMovable(false);
    if (toolButtonDatas == nullptr) {
        return ;
    }

    int i = 0;
    for(ToolButtonData * data=toolButtonDatas; i<LAYEROPCITY_TOOLBUTTONDATAS_SIZE; data++){
        if (data->type == "ComboBox") {
            QComboBox * comboBox = new QComboBox(this);
            comboBox->setStyleSheet(qssComboBox);
            this->addWidget(comboBox);
        }else if (data->type == "Label") {
            QLabel * label = new QLabel(this);
            label->setFixedSize(60, 20);
            label->setStyleSheet(qssLabel);
            label->setAlignment(Qt::AlignRight);
            label->setText(data->name);
            this->addWidget(label);
        } 
        i++;
    }
}
