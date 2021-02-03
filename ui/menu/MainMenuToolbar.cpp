#include "MainMenuToolbar.h"

MainMenuToolbar::MainMenuToolbar(QWidget *parent) : QToolBar(parent)
{

}

void MainMenuToolbar::setup()
{
    setOrientation(Qt::Horizontal); //垂直摆放
    setStyleSheet(qssToolBar);
    setFixedHeight(22);
    setFixedHeight(((QWidget*)parent())->geometry().width());

    for (int i=0; i < MAINMENU_TOOLBUTTON_NUMS; i++) {
        if (toolButtonDatas[i].name == "changeFrontBackWidget") {

        } else if (toolButtonDatas[i].name != "-") {
            //按钮
            QAction * act = new QAction(this);

            act->setText(toolButtonDatas[i].tip);
            act->setData(toolButtonDatas[i].name);
            addAction(act);
            //connect(act, SIGNAL(triggered(bool)), this, SLOT(onTrigger(bool)));
            //toolButtons.append(act);
        }else {
            //分隔栏
            addSeparator();
        }
    }
}
