#ifndef RIGHTFRAMESPLITTER_H
#define RIGHTFRAMESPLITTER_H

#include <QWidget>
#include <QSplitter>
#include <QLabel>
#include "ui/panel/RightPanel.h"

class RightFrameSplitter : public QSplitter
{
    Q_OBJECT
private:
    const QString qssSplit = "QSplitter::handle:horizontal {\
            margin-left:1px solid #262827;\
            margin-right:1px solid #262827;\
            background-color:#3f3f3f;\
            background-repeat:no-repeat;\
            width: 2px;}";
public:
    explicit RightFrameSplitter(QWidget *parent = nullptr);
    void setup();

    QLabel * centerPanel = nullptr;
    RightPanel * rightPanel = nullptr;
signals:

};

#endif // RIGHTFRAMESPLITTER_H
