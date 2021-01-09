#include "RightPanel.h"
#include <QDebug>
RightPanel::RightPanel(QWidget *parent) : QWidget(parent)
{

}

void RightPanel::setup()
{
    vBoxLayout = new QVBoxLayout();
    vBoxLayout->setAlignment(Qt::AlignTop);
    //this->setFixedSize(((QWidget *)parent())->size());
    qDebug() << "RightPanel::size():" << size() << ",parent.size():" << ((QWidget *)parent())->size();
    colorPlansTab = new ColorPlansTab(this);
    colorPlansTab->setFixedWidth(this->size().width());
    colorPlansTab->setFixedHeight(300);
    colorPlansTab->setup();
    vBoxLayout->addWidget(colorPlansTab);

    adjustStyleTab = new AdjustStyleTab(this);
    adjustStyleTab->setFixedWidth(this->size().width());
    adjustStyleTab->setFixedHeight(300);
    adjustStyleTab->setup();
    vBoxLayout->addWidget(adjustStyleTab);

    levelChanelPathTab = new LevelChanelPathTab(this);
    levelChanelPathTab->setFixedWidth(this->size().width());
    levelChanelPathTab->setFixedHeight(300);
    levelChanelPathTab->setup();
    vBoxLayout->addWidget(levelChanelPathTab);

    setLayout(vBoxLayout);
}
