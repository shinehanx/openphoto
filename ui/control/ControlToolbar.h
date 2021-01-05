#ifndef CONTROLTOOLBAR_H
#define CONTROLTOOLBAR_H

#include <QToolBar>
#include <QLabel>
#include <QVector>
#include <QAction>
#include <QToolButton>

//工具栏的按钮数量（包含分割栏，不包含头部）
#define DRAW_TOOLBUTTON_NUMS 11

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
    const QString qssHeader = "background-color:#383838;border-top: 1px solid #434343;border-right: 2px solid #434343;border-bottom: 2px solid 434343;";
    //头部
    QLabel * header = nullptr;

    //工具栏图标
    QString toolbarIcons[DRAW_TOOLBUTTON_NUMS] {
        ":/rc/images/toolbar/move.png",
        ":/rc/images/ctrlbar/EllipseSel.png",
        ":/rc/images/ctrlbar/lariat.png",
        ":/rc/images/ctrlbar/painting-board.png",
        ":/rc/images/ctrlbar/psi-crop-2.png",
        ":/rc/images/ctrlbar/pipette.png",
        "-",
        ":/rc/images/ctrlbar/grid.png",
        ":/rc/images/ctrlbar/brush.png",
        ":/rc/images/ctrlbar/stamp.png",
        ":/rc/images/ctrlbar/rubber.png"
    };

    //工具栏命名
    QString toolbarNames[DRAW_TOOLBUTTON_NUMS] {
        "Move",
        "Select",
        "Lariat",
        "Painting-board",
        "Crop",
        "Pipette",
        "-",
        "Grid",
        "Brush",
        "Stamp",
        "Rubber"
    };

    //工具栏提示
    QString toolbarTips[DRAW_TOOLBUTTON_NUMS] {
        "移动",
        "选择工具",
        "套索工具",
        "画板工具",
        "裁剪工具",
        "吸管工具",
        "-",
        "网格工具",
        "画笔工具",
        "印章工具",
        "橡皮擦工具"
    };


    QVector<QAction *> toolButtons ;

    //初始化UI
    void initUi();

public:
    explicit ControlToolbar(QWidget *parent = nullptr);

signals:
    //点击工具栏按钮：信号
    void triggerDrawToolButton(QString);

public slots:
    //点击工具栏按钮：槽
    void onTrigger(bool);
};

#endif // CONTROLTOOLBAR_H
