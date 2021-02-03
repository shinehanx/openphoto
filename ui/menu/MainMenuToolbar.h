#ifndef MAINMENUTOOLBAR_H
#define MAINMENUTOOLBAR_H

#include <QToolBar>
#include "model/UiModel.h"
#define MAINMENU_TOOLBUTTON_NUMS 11
class MainMenuToolbar : public QToolBar
{
    Q_OBJECT
private:
    //toolbar qss
    const QString qssToolBar = "QToolBar {background-color:#535353;\
              spacing: 5px;\
              border-bottom:1px solid #383838;\
              padding: 0px solid #585858;} \
            QToolButton { width:50px;\
              margin-left:5px;\
              color:white;\
              height:18px;\
              background-color: transparent; \
              border: 0px; }\
            QToolButton:hover{\
              margin-left:5px;\
              color:white;\
              border:1px solid #262827;\
              border-radius: 2px;\
              background-color:#666666;\
            }";

    //工具栏的按钮和元素
    ToolButtonData toolButtonDatas[MAINMENU_TOOLBUTTON_NUMS] {
        {"ToolButton", "File",":/rc/images/ctrlbar/EllipseSel.png",tr("文件")},
        {"ToolButton","Edit",":/rc/images/ctrlbar/EllipseSel.png",tr("编辑(E)")},
        {"ToolButton","Image",":/rc/images/ctrlbar/EllipseSel.png",tr("图像(I)")},
        {"ToolButton","Level",":/rc/images/ctrlbar/EllipseSel.png",tr("图层(L)")},
        {"ToolButton","Y",":/rc/images/ctrlbar/EllipseSel.png",tr("文字(Y)")},
        {"ToolButton","Select",":/rc/images/ctrlbar/EllipseSel.png",tr("选择(S)")},
        {"ToolButton","Filters",":/rc/images/ctrlbar/EllipseSel.png",tr("滤镜(T)")},
        {"ToolButton","3D",":/rc/images/ctrlbar/EllipseSel.png",tr("3D(D)")},
        {"ToolButton","View",":/rc/images/ctrlbar/EllipseSel.png",tr("视图(V)")},
        {"ToolButton","Window",":/rc/images/ctrlbar/EllipseSel.png",tr("窗口(W)")},
        {"ToolButton","Help",":/rc/images/ctrlbar/EllipseSel.png",tr("帮助(H)")}
    };

     QVector<QAction *> toolButtons ;
public:
    explicit MainMenuToolbar(QWidget *parent = nullptr);
    void setup();
signals:
    //点击工具栏按钮：信号
    void triggerDrawToolButton(QString);

public slots:
    //点击工具栏按钮：槽
    void onTrigger(bool);

};

#endif // MAINMENUTOOLBAR_H
