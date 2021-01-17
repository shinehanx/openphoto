#include "RightFrameSplitter.h"

RightFrameSplitter::RightFrameSplitter(QWidget *parent) : QSplitter(Qt::Horizontal, parent)
{

}

void RightFrameSplitter::setup()
{

    setOpaqueResize(false);
    setHandleWidth(4); //分离条目的宽度,注意qssSplit定义的宽度会影响显示效果
    //setStretchFactor(0,1);//拉伸策略

    QSize parentSize = ((QWidget *)parent())->geometry().size();
    setStyleSheet(qssSplit);

    centerPanel = new QLabel(this);
    centerPanel->setFixedWidth(parentSize.width() - 200 - 100);
    centerPanel->setText("centerPanel");
    insertWidget(1, centerPanel);

    rightPanel = new RightPanel(this);
    rightPanel->setFixedWidth(240);
    rightPanel->setFixedHeight(parentSize.height());
    rightPanel->setup();
    insertWidget(1, rightPanel);
}