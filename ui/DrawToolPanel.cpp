#include "DrawToolPanel.h"
#include <QDebug>
DrawToolPanel::DrawToolPanel(QWidget * parent) : QSplitter(Qt::Horizontal, parent)
{
    init();
}


DrawToolPanel::DrawToolPanel(Qt::Orientation orientation, QWidget * parent) : QSplitter(orientation,parent)
{
    init();
}

void DrawToolPanel::init()
{
    QSize parentSize = ((QWidget*)parent())->size();
    setGeometry(0, 75, parentSize.width(), parentSize.height());

    ctrlBarHeader = new QLabel(this);
    ctrlBarHeader->setFixedSize(48,12);
    ctrlBarHeader->setStyleSheet("background-color:#383838;border-top: 2px solid #434343;border-right: 2px solid #434343;border-bottom: 2px solid 434343;");
    ctrlBarHeaderSplit = new QLabel(this);
    ctrlBarHeaderSplit->setFixedSize(48,2);
    ctrlBarHeaderSplit->setStyleSheet("background-color:#262827;border:0px;margin-top:0px");


    setOpaqueResize(true);
    setHandleWidth(5);
    setStretchFactor(0,1);

    controlToolbar = new QToolBar(tr("控制栏"), this);
    controlToolbar->setOrientation(Qt::Vertical); //垂直摆放
    controlToolbar->setStyleSheet(qssCtrlBar);
    controlToolbar->setFixedWidth(48);
    qDebug() << "controlToolbar.height:" << size().height();
    controlToolbar->setFixedHeight(size().height());
    controlToolbar->addWidget(ctrlBarHeader);
    controlToolbar->addSeparator();
    //controlToolbar->addAction(moveAct);
    //controlToolbar->addWidget(selectBtn);

    for (int i=0; i < DRAW_TOOLBUTTON_NUMS; i++) {
        QToolButton * btn = new QToolButton(this);
        btn->setIcon(QIcon(toolbarIcons[i]));
        btn->setToolTip(toolbarTips[i]);
        btn->setProperty("name", toolbarNames[i]);
        controlToolbar->addWidget(btn);
        connect(btn, SIGNAL(triggered(QAction *)), this, SLOT(onTrigger(QAction * act)));
        toolButtons.append(btn);
    }

    setStyleSheet(qssSplit);
    insertWidget(0,controlToolbar);
}


void DrawToolPanel::onTrigger(QAction * act)
{
    QToolButton * btn = (QToolButton *)sender();
    qDebug()<< "onTrigger, sender:" <<  btn->property("name").toString();

    //emit triggerDrawToolButton(act->data().toString());
}
