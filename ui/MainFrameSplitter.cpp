#include "MainFrameSplitter.h"
#include <QDebug>
MainFrameSplitter::MainFrameSplitter(QWidget * parent) : QSplitter(Qt::Horizontal, parent)
{
    init();
}


MainFrameSplitter::MainFrameSplitter(Qt::Orientation orientation, QWidget * parent) : QSplitter(orientation,parent)
{
    init();
}

/**
 * @brief DrawToolPanel::init
 * 初始化
 */
void MainFrameSplitter::init()
{
    QSize parentSize = ((QWidget*)parent())->size();
    setGeometry(0, 75, parentSize.width(), parentSize.height());

    setOpaqueResize(true);
    setHandleWidth(5);
    setStretchFactor(0,1);

    ctrlBarHeaderSplit = new QLabel(this);
    ctrlBarHeaderSplit->setFixedSize(72,2);
    ctrlBarHeaderSplit->setStyleSheet("background-color:#262827;border:0px;margin-top:0px");

    controlToolbar = new ControlToolbar(this);
    setStyleSheet(qssSplit);

    //放置到第0位置，即是左边的工具栏
    insertWidget(0, controlToolbar);
}



