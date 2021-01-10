#ifndef CONTROLTOOLBAR_H
#define CONTROLTOOLBAR_H

#include <QToolBar>
#include <QLabel>
#include <QVector>
#include <QAction>
#include <QToolButton>
#include "model/UiModel.h"
#include "ui/widget/ChangeFrontBackColorWidget.h"

//工具栏的按钮数量（包含分割栏，不包含头部）
#define DRAW_TOOLBUTTON_NUMS 13

class ControlToolbar : public QToolBar
{
    Q_OBJECT
private:
    //toolbar qss
    const QString qssToolBar = "QToolBar { background-color:#525252;\
              spacing: 0px;\
              margin-top:2px;\
              border: 2px solid #525252;\
              padding: 2px solid #585858;} \
            QToolButton { width:48px;\
              height:40px;\
              background-color: transparent; \
              border: 0px; }\
            QToolButton:hover{\
              border:2px solid #262827;\
              border-radius: 4px;\
              background-color:#3e3e3e;\
            }";

    //头部qss
    const QString qssHeader = "QLabel {background-color:#383838; \
                border-top: 1px solid #434343;\
                border-right: 2px solid #434343;\
                border-bottom: 2px solid 434343;\
            }";
    //头部
    QLabel * header = nullptr;
    ChangeFrontBackColorWidget * changeFrontBackWidget = nullptr;

    //工具栏的按钮和元素
    ToolButtonData toolButtonDatas[DRAW_TOOLBUTTON_NUMS] {
        {"Move",":/rc/images/toolbar/move.png",tr("移动")},
        {"Select",":/rc/images/ctrlbar/EllipseSel.png",tr("选择工具")},
        {"Lariat",":/rc/images/ctrlbar/lariat.png",tr("套索工具")},
        {"Painting-board",":/rc/images/ctrlbar//painting-board.png",tr("画板工具")},
        {"Crop",":/rc/images/ctrlbar/psi-crop-2.png",tr("裁剪工具")},
        {"Pipette",":/rc/images/ctrlbar/pipette.png",tr("吸管工具")},
        {"-","-",tr("-")},
        {"Grid",":/rc/images/ctrlbar/grid.png",tr("网格工具")},
        {"Brush",":/rc/images/ctrlbar/brush.png",tr("画笔工具")},
        {"Stamp",":/rc/images/ctrlbar/stamp.png",tr("印章工具")},
        {"Rubber",":/rc/images/ctrlbar/rubber.png",tr("橡皮擦工具")},
        {"-","-",tr("-")},
        {"changeFrontBackWidget","-",tr("填充和描边")}
    };



    QVector<QAction *> toolButtons ;



public:
    explicit ControlToolbar(QWidget *parent = nullptr);
    //初始化UI
    void setup();
signals:
    //点击工具栏按钮：信号
    void triggerDrawToolButton(QString);

public slots:
    //点击工具栏按钮：槽
    void onTrigger(bool);
};

#endif // CONTROLTOOLBAR_H
