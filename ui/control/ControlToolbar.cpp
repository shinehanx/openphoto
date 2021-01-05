#include "ControlToolbar.h"

#include <QDebug>

ControlToolbar::ControlToolbar(QWidget *parent) : QToolBar(tr("控制栏"),parent)
{
    initUi();


}

void ControlToolbar::initUi()
{
    setOrientation(Qt::Vertical); //垂直摆放
    setStyleSheet(qssToolBar);
    setFixedWidth(48);
    setFixedHeight(((QWidget*)parent())->geometry().height());

    header = new QLabel(this);
    header->setFixedSize(48,12);
    header->setStyleSheet(qssHeader);

    qDebug() << "controlToolbar.height:" << size().height();
    addWidget(header);
    //分隔栏
    addSeparator();

    for (int i=0; i < DRAW_TOOLBUTTON_NUMS; i++) {
        if (toolbarNames[i] != "-") {
            //按钮
            QAction * act = new QAction(this);

            act->setIcon(QIcon(toolbarIcons[i]));
            act->setToolTip(toolbarTips[i]);
            act->setData(toolbarNames[i]);
            addAction(act);
            connect(act, SIGNAL(triggered(bool)), this, SLOT(onTrigger(bool)));
            toolButtons.append(act);
        }else {
            //分隔栏
            addSeparator();
        }
    }
}

void ControlToolbar::onTrigger(bool checked)
{
    Q_UNUSED(checked);
    QAction * act = (QAction *)sender();
    qDebug()<< "onTrigger, sender:" <<  act->data().toString();

    emit triggerDrawToolButton(act->data().toString());
}
