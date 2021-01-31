#include "MainMenuToolbar.h"
#include <QPushButton>
#include <QToolButton>
#include <QLabel>
MainMenuToolbar::MainMenuToolbar(QWidget *parent) : QToolBar(tr("菜单栏"),parent)
{

}

void MainMenuToolbar::setup()
{
    setOrientation(Qt::Horizontal); //垂直摆放
    setStyleSheet(qssToolBar);
    setFixedHeight(22);
    setMovable(false);
    setFixedHeight(((QWidget*)parent())->geometry().width());

    for (int i=0; i < MAINMENU_TOOLBUTTON_NUMS; i++) {
        if (toolButtonDatas[i].name == "changeFrontBackWidget") {

        } else if (toolButtonDatas[i].name != "-") {
            //按钮
            QAction * act = new QAction(this);
            QToolButton * btn = new QToolButton(this);
            act->setText(tr("编辑(E)"));
            //act->setData(toolButtonDatas[i].name);
            addAction(act);
            btn->setIcon(QIcon(toolButtonDatas[i].icon));
            addWidget(btn);
            //connect(act, SIGNAL(triggered(bool)), this, SLOT(onTrigger(bool)));
            //toolButtons.append(act);
        }else {
            //分隔栏
            addSeparator();
        }
    }
}
