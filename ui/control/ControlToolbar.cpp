#include "ControlToolbar.h"

#include <QDebug>

ControlToolbar::ControlToolbar(QWidget *parent) : QToolBar(tr("控制栏"),parent)
{

}

/**
 * @brief ControlToolbar::initUi
 * 初始化UI
 */
void ControlToolbar::setup()
{
    setOrientation(Qt::Vertical); //垂直摆放
    setStyleSheet(qssToolBar);
    setFixedWidth(48);
    setFixedHeight(((QWidget*)parent())->geometry().height());

    //header
    header = new QLabel(this);
    header->setFixedSize(48,12);
    header->setStyleSheet(qssHeader);
    qDebug() << "controlToolbar.height:" << size().height();
    addWidget(header);
    //分隔栏
    addSeparator();

    for (int i=0; i < DRAW_TOOLBUTTON_NUMS; i++) {
        if (toolButtonDatas[i].name == "changeFrontBackWidget") {
            //填充和描边工具
            changeFrontBackWidget = new ChangeFrontBackColorWidget(this);
            changeFrontBackWidget->setFixedSize(44,60);
            changeFrontBackWidget->setup();
            addWidget(changeFrontBackWidget);
        } else if (toolButtonDatas[i].name != "-") {
            //按钮
            QAction * act = new QAction(this);

            act->setIcon(QIcon(toolButtonDatas[i].icon));
            act->setToolTip(toolButtonDatas[i].tip);
            act->setData(toolButtonDatas[i].name);
            addAction(act);
            connect(act, SIGNAL(triggered(bool)), this, SLOT(onTrigger(bool)));
            toolButtons.append(act);
        }else {
            //分隔栏
            addSeparator();
        }
    }
}

/**
 * @brief ControlToolbar::onTrigger
 * 点击按钮
 * @param checked 是否选中
 */
void ControlToolbar::onTrigger(bool checked)
{
    Q_UNUSED(checked);
    QAction * act = (QAction *)sender();
    qDebug()<< "onTrigger, sender:" <<  act->data().toString();

    emit triggerDrawToolButton(act->data().toString());
}
