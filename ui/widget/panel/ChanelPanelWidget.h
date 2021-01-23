#ifndef CHANELPANELWIDGET_H
#define CHANELPANELWIDGET_H

#include <QWidget>
#include <QLabel>
#include <QToolBar>
#include <QAction>
#include "../../../model/UiModel.h"
#include "../list/ChanelListWidget.h"

#define CHANELITEMDATA_SIZE 4
class ChanelPanelWidget : public QLabel
{
    Q_OBJECT
private:
    const QString qss = "QLabel{background-color:#464646;}";
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

    ChanelListItemData chanelListItemData[CHANELITEMDATA_SIZE] = {
        {"RGB",":/rc/images/toolbar/layerpanel/pic.png","RGB", "Ctrl+2"},
        {"RED",":/rc/images/toolbar/layerpanel/pic.png","红", "Ctrl+3"},
        {"GREEN",":/rc/images/toolbar/layerpanel/pic.png","绿", "Ctrl+4"},
        {"BLUE",":/rc/images/toolbar/layerpanel/pic.png","蓝", "Ctrl+5"}
    };
   
    
    ChanelListWidget * chanelListWidget = nullptr;

    QToolBar * toolbar;
    QAction * delAction;
    QAction * newAction;
    QAction * forbidAction;

public:
    explicit ChanelPanelWidget(QWidget *parent = nullptr);
    void setup();
signals:

};

#endif // CHANELPANELWIDGET_H
