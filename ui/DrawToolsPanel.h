#ifndef DRAWTOOLSPANEL_H
#define DRAWTOOLSPANEL_H

#include <QWidget>
#include <QSplitter>
#include <QToolBar>
#include <QLabel>
#include <QToolButton>

class DrawToolsPanel : public QSplitter
{
private:
    const QString qssCtrlBar = "QToolBar { background-color:#525252;\
              spacing: 0px;\
              margin-top:2px;\
              border: 2px solid #525252;\
              padding: 2px solid #585858;} \
            QToolButton { width:64px;\
              height:48px;\
              background-color: transparent; \
              border: 0px; }\
            QToolButton:hover{\
              border:2px solid #262827;\
              border-radius: 6px;\
              background-color:#3e3e3e;\
            }";

    const QString qssSplit = "QSplitter::handle:horizontal {\
            margin-left:1px solid #262827;\
            margin-right:1px solid #262827;\
            background-color:#3f3f3f;\
            background-repeat:no-repeat;\
            background-size:100% 100%;\
            width: 1px;}";

    //控制工具栏
    QToolBar *controlToolbar = nullptr;
    QLabel * ctrlBarHeader = nullptr;
    QLabel * ctrlBarHeaderSplit = nullptr;
    QToolButton *selectBtn = nullptr;
    QAction * moveAct = nullptr;
private:
    void init(); //初始化UI
public:
    DrawToolsPanel(QWidget * parent=nullptr);
    DrawToolsPanel(Qt::Orientation, QWidget * parent=nullptr);
};

#endif // DRAWTOOLSPANEL_H
