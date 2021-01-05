#ifndef DRAWTOOLPANEL_H
#define DRAWTOOLPANEL_H

#include <QWidget>
#include <QSplitter>
#include <QLabel>
#include "ui/control/ControlToolbar.h"

class MainFrameSplitter : public QSplitter
{
    Q_OBJECT
private:

    const QString qssSplit = "QSplitter::handle:horizontal {\
            margin-left:1px solid #262827;\
            margin-right:1px solid #262827;\
            background-color:#3f3f3f;\
            background-repeat:no-repeat;\
            width: 1px;}";

    //控制工具栏
    ControlToolbar *controlToolbar = nullptr;

    QLabel * ctrlBarHeaderSplit = nullptr;


private:
    //初始化UI
    void init();

protected:

public:
    explicit MainFrameSplitter(QWidget * parent=nullptr);
    explicit MainFrameSplitter(Qt::Orientation, QWidget * parent=nullptr);
};

#endif // DRAWTOOLPANEL_H
