#ifndef CONTROLBAR_H
#define CONTROLBAR_H

#include <QWidget>
#include <QLabel>
#include <QVector>
#include <QAction>
#include <QToolButton>
#include "ControlToolbar.h"

class ControlBar : public QWidget
{
    Q_OBJECT
private:
    //头部qss
    const QString qssHeader = "QLabel {background-color:#383838; \
                border-top: 1px solid #434343;\
            }";
    //头部
    QLabel * header = nullptr;
    
	ControlToolbar * controlToolbar = nullptr;
public:
    explicit ControlBar(QWidget *parent = nullptr);
    //初始化UI
    void setup();
signals:
    //点击工具栏按钮：信号
    void triggerDrawToolButton(QString);


};

#endif // CONTROLBAR_H
