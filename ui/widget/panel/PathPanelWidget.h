#ifndef PATHPANELWIDGET_H
#define PATHPANELWIDGET_H

#include <QWidget>
#include <QLabel>
#include <QToolBar>
#include <QAction>
#include "../../../model/UiModel.h"
#include "../list/ChanelListWidget.h"

#define PATHITEMDATA_SIZE 4
class PathPanelWidget : public QLabel
{
    Q_OBJECT
private:
    const QString qss = "QLabel{background-color:#464646;border: 0px}";
    const QString qssToolBar = "QToolBar { background-color:#535353;\
              spacing: 3px;\
              padding:0px 32px 0px 0px;\
              border-top:1px solid #707070;} \
            QToolButton {margin-top:1px;margin-right:10px; width:16px;\
              height:14px; \
              background-color:#535353;\
              border: 0px solid #333333; }\
            QToolButton:hover{\
              border-left: 1px solid #333333;\
              border-right: 1px solid #333333;\
              background-color:#6f6f6f;\
            }";

    ChanelListItemData pathListItemData[PATHITEMDATA_SIZE] = {
        {"log1",":/rc/images/toolbar/layerpanel/pic.png","log1", "Ctrl+2"},
        {"log2",":/rc/images/toolbar/layerpanel/pic.png","log2", "Ctrl+3"},
        {"log3",":/rc/images/toolbar/layerpanel/pic.png","log3", "Ctrl+4"},
        {"log4",":/rc/images/toolbar/layerpanel/pic.png","log4", "Ctrl+5"}
    };
   
    
    ChanelListWidget * pathListWidget = nullptr;

    QToolBar * toolbar = nullptr;
    QAction * delAction = nullptr;
    QAction * newAction = nullptr;
    QAction * forbidAction = nullptr;

public:
    explicit PathPanelWidget(QWidget *parent = nullptr);
    void setup();
signals:

};

#endif // PATHPANELWIDGET_H
