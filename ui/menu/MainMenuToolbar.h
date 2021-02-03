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
    const QString qssToolBar = "QToolBar {background-color:#525252;\
              spacing: 0px;\
              border: 0px solid #525252;\
              padding: 0px solid #585858;} \
            QToolButton { width:50px;\
              height:18px;\
              background-color: transparent; \
              border: 0px; }\
            QToolButton:hover{\
              border:2px solid #262827;\
              border-radius: 3px;\
              background-color:#3e3e3e;\
            }";

    //工具栏的按钮和元素
    ToolButtonData toolButtonDatas[MAINMENU_TOOLBUTTON_NUMS] {
        {"ToolButton", "File","",tr("文件(F)")},
        {"ToolButton","Edit","",tr("编辑(E)")},
        {"ToolButton","Image","",tr("图像(I)")},
        {"ToolButton","Level","",tr("图层(L)")},
        {"ToolButton","Y","",tr("文字(Y)")},
        {"ToolButton","Select","",tr("选择(S)")},
        {"ToolButton","Filters","",tr("滤镜(T)")},
        {"ToolButton","3D","",tr("3D(D)")},
        {"ToolButton","View","",tr("视图(V)")},
        {"ToolButton","Window","",tr("窗口(W)")},
        {"ToolButton","Help","",tr("帮助(H)")}
    };
public:
    explicit MainMenuToolbar(QWidget *parent = nullptr);
    void setup();

signals:
    void triggerDrawToolButton(QString name);
public slots:
    void onTrigger(bool checked);
};

#endif // MAINMENUTOOLBAR_H

