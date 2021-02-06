#include "MainMenuToolbar.h"
#include <QPushButton>
#include <QToolButton>
#include <QLabel>
#include <QDebug>
#include "ui/widget/ImageView.h"
MainMenuToolbar::MainMenuToolbar(QWidget *parent) : QToolBar(tr("菜单栏"),parent)
{

}

void MainMenuToolbar::setup()
{
    this->setStyleSheet(qssToolBar);
    this->setOrientation(Qt::Horizontal);
    this->setMovable(false);
    if (toolButtonDatas == nullptr) {
        return ;
    }
    setFixedHeight(28);
    setFixedWidth(((QWidget*)parent())->geometry().width());

    ImageView * horizontalSplit = new ImageView(this);
    horizontalSplit->show(QSize(20,20), ":/rc/images/toolbar/op.png");
    addWidget(horizontalSplit);

    for (int i=0; i < MAINMENU_TOOLBUTTON_NUMS; i++) {
        if (toolButtonDatas[i].name == "changeFrontBackWidget") {

        } else if (toolButtonDatas[i].name != "-") {
            //按钮
            QAction * act = new QAction(this);
            act->setText(toolButtonDatas[i].tip);
            act->setData(toolButtonDatas[i].name);
            addAction(act);
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
void MainMenuToolbar::onTrigger(bool checked)
{
    Q_UNUSED(checked);
    QAction * act = (QAction *)sender();
    qDebug()<< "onTrigger, sender:" <<  act->data().toString();

    emit triggerDrawToolButton(act->data().toString());
}

