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

/**
 * @brief DrawToolPanel::init
 * 初始化
 */
void DrawToolPanel::init()
{
    QSize parentSize = ((QWidget*)parent())->size();
    setGeometry(0, 75, parentSize.width(), parentSize.height());

    ctrlBarHeader = new QLabel(this);
    ctrlBarHeader->setFixedSize(48,12);
    ctrlBarHeader->setStyleSheet("background-color:#383838;border-top: 1px solid #434343;border-right: 2px solid #434343;border-bottom: 2px solid 434343;");
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
        if (toolbarNames[i] != "-") {
            QAction * act = new QAction(this);

            act->setIcon(QIcon(toolbarIcons[i]));
            act->setToolTip(toolbarTips[i]);
            act->setData(toolbarNames[i]);
            controlToolbar->addAction(act);
            connect(act, SIGNAL(triggered(bool)), this, SLOT(onTrigger(bool)));
            toolButtons.append(act);
        }else {
            QLabel * split = new QLabel(this);
            split->setFixedSize(46,3);
            split->setStyleSheet(qssBtnSplit);
            controlToolbar->addWidget(split);
        }
    }

    setStyleSheet(qssSplit);

    //放置到第0位置，即是左边的工具栏
    insertWidget(0, controlToolbar);
}


void DrawToolPanel::onTrigger(bool checked)
{
    Q_UNUSED(checked);
    QAction * act = (QAction *)sender();
    qDebug()<< "onTrigger, sender:" <<  act->data().toString();

    emit triggerDrawToolButton(act->data().toString());
}
