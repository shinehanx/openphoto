#ifndef DRAWTOOLPANEL_H
#define DRAWTOOLPANEL_H

#include <QWidget>
#include <QSplitter>
#include <QToolBar>
#include <QLabel>
#include <QToolButton>
#include <QSet>

#define DRAW_TOOLBUTTON_NUMS 7
class DrawToolPanel : public QSplitter
{
    Q_OBJECT
private:
    const QString qssCtrlBar = "QToolBar { background-color:#525252;\
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

    const QString qssSplit = "QSplitter::handle:horizontal {\
            margin-left:1px solid #262827;\
            margin-right:1px solid #262827;\
            background-color:#3f3f3f;\
            background-repeat:no-repeat;\
            width: 1px;}";

    //工具栏的分离线
    const QString qssBtnSplit = "border-bottom: 1px solid #434343;background-color:#434343;border:0px;margin-top:2px";

    //控制工具栏
    QToolBar *controlToolbar = nullptr;
    QLabel * ctrlBarHeader = nullptr;
    QLabel * ctrlBarHeaderSplit = nullptr;

    //工具栏图标
    QString toolbarIcons[DRAW_TOOLBUTTON_NUMS] {
        ":/rc/images/toolbar/move.png",
        ":/rc/images/ctrlbar/EllipseSel.png",
        ":/rc/images/ctrlbar/lariat.png",
        ":/rc/images/ctrlbar/pen.png",
        ":/rc/images/ctrlbar/psi-crop-2.png",
        ":/rc/images/ctrlbar/pipette.png",
        "-"
    };

    //工具栏命名
    QString toolbarNames[DRAW_TOOLBUTTON_NUMS] {
        "Move",
        "Select",
        "Lariat",
        "Pen",
        "Crop",
        "Pipette",
        "-"
    };

    //工具栏提示
    QString toolbarTips[DRAW_TOOLBUTTON_NUMS] {
        "移动",
        "选择工具",
        "套索工具",
        "画笔工具",
        "裁剪工具",
        "吸管工具",
        "-"
    };


    QVector<QAction *> toolButtons ;
private:
    //初始化UI
    void init();

protected:

public:
    explicit DrawToolPanel(QWidget * parent=nullptr);
    explicit DrawToolPanel(Qt::Orientation, QWidget * parent=nullptr);
signals:
    //点击工具栏按钮：信号
    void triggerDrawToolButton(QString);
public slots:
    //点击工具栏按钮：槽
    void onTrigger(bool);
};

#endif // DRAWTOOLPANEL_H
