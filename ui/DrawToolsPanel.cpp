#include "DrawToolsPanel.h"
#include <QDebug>
DrawToolsPanel::DrawToolsPanel(QWidget * parent) : QSplitter(parent)
{
    init();
}


DrawToolsPanel::DrawToolsPanel(Qt::Orientation orientation, QWidget * parent) : QSplitter(orientation,parent)
{
    init();
}

void DrawToolsPanel::init()
{
    QSize parentSize = ((QWidget*)parent())->size();
    setGeometry(0, 75, parentSize.width(), parentSize.height());

    ctrlBarHeader = new QLabel(this);
    ctrlBarHeader->setFixedSize(72,24);
    ctrlBarHeader->setStyleSheet("background-color:#383838;border-top: 2px solid #434343;border-right: 2px solid #434343;border-bottom: 2px solid 434343;");
    ctrlBarHeaderSplit = new QLabel(this);
    ctrlBarHeaderSplit->setFixedSize(72,2);
    ctrlBarHeaderSplit->setStyleSheet("background-color:#262827;border:0px;margin-top:0px");

    moveAct = new QAction(tr("移动"),this);
    moveAct->setIcon(QIcon(":/rc/images/toolbar/move.png"));
    moveAct->setToolTip(tr("移动图像"));

    selectBtn = new QToolButton(this);
    selectBtn->setIconSize(QSize(48,48));
    selectBtn->setIcon(QIcon(":/rc/images/ctrlbar/EllipseSel.png"));

    setOpaqueResize(true);
    setHandleWidth(5);
    setStretchFactor(0,1);

    controlToolbar = new QToolBar(tr("控制栏"), this);
    controlToolbar->setOrientation(Qt::Vertical); //垂直摆放
    controlToolbar->setStyleSheet(qssCtrlBar);
    controlToolbar->setFixedWidth(72);
    qDebug() << "controlToolbar.height:" << size().height();
    controlToolbar->setFixedHeight(size().height());
    controlToolbar->addWidget(ctrlBarHeader);
    controlToolbar->addSeparator();
    controlToolbar->addAction(moveAct);
    controlToolbar->addWidget(selectBtn);

    setStyleSheet(qssSplit);
    insertWidget(0,controlToolbar);
}
