#include "ControlBar.h"

#include <QDebug>

ControlBar::ControlBar(QWidget *parent) : QWidget(parent)
{
    setAutoFillBackground(true);
}

/**
 * @brief ControlBar::initUi
 * 初始化UI
 */
void ControlBar::setup()
{
    setFixedWidth(40);
    setFixedHeight(((QWidget*)parent())->geometry().height());

    //header
    header = new QLabel(this);
    header->setGeometry(0,1, 40,12);
    header->setStyleSheet(qssHeader);
    qDebug() << "controlToolbar.height:" << size().height();

    controlToolbar = new ControlToolbar(this);
    controlToolbar->setGeometry(0, 14, 40, geometry().height() - 12);
    controlToolbar->setup();
}


