#ifndef DRAWTOOLPANEL_H
#define DRAWTOOLPANEL_H

#include <QWidget>
#include <QSplitter>
#include <QLabel>
#include "ui/control/ControlBar.h"
#include "ui/RightFrameSplitter.h"

class MainFrameSplitter : public QSplitter
{
    Q_OBJECT
private:

    const QString qssSplit = "QSplitter::handle:horizontal {\
            margin-left:1px solid #262827;\
            margin-right:1px solid #262827;\
            background-color:#3f3f3f;\
            background-repeat:no-repeat;\
            width: 2px;}";

    //左边：控制工具栏
    ControlBar * controlBar = nullptr;
    //右边：分离框架
    RightFrameSplitter * rightFrame = nullptr;

    QLabel * centerPanel = nullptr;
    QLabel * rightPanel = nullptr;

public:
    explicit MainFrameSplitter(QWidget * parent=nullptr);
    explicit MainFrameSplitter(Qt::Orientation, QWidget * parent=nullptr);
    //初始化UI
    void setup();
};

#endif // DRAWTOOLPANEL_H
