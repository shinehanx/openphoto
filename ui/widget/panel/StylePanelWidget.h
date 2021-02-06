#ifndef STYLEPANELWIDGET_H
#define STYLEPANELWIDGET_H

#include <QWidget>
#include <QLabel>
#include <QToolBar>
#include <QAction>
#include "../../../model/UiModel.h"
#include "../grid/GridListWidget.h"
#define STYLEPANEL_ITEM_SIZE 10

class StylePanelWidget : public QLabel
{
    Q_OBJECT
private:
    const QString qss = "QLabel{background-color:#535353;border: 0px}";
    const QString qssToolBar = "QToolBar { background-color:#535353;\
              spacing: 3px;\
              padding:0px 32px 0px 0px;\
              border:0px solid #707070;} \
            QToolButton {margin-right:10px; width:14px;\
              height:14px; \
              background-color:#535353;\
              border: 0px solid #333333; }\
            QToolButton:hover{\
              border-left: 1px solid #333333;\
              border-right: 1px solid #333333;\
              background-color:#6f6f6f;\
            }";

  
    GridListWidget * gridListWidget = nullptr;
    QToolBar * toolbar;
    QAction * delAction;
    QAction * newAction;
    QAction * forbidAction;

    GridListItemData styleItemData[STYLEPANEL_ITEM_SIZE] = {
        {"clear",":/rc/images/toolbar/stylepanel/clear.png",tr("恢复默认")},
        {"target",":/rc/images/toolbar/stylepanel/target.png",tr("目标")},
        {"light",":/rc/images/toolbar/stylepanel/light.png",tr("发光")},
        {"share",":/rc/images/toolbar/stylepanel/share.png",tr("分享")},
        {"lab",":/rc/images/toolbar/stylepanel/lab.png",tr("实验室")},
        {"clear",":/rc/images/toolbar/stylepanel/clear.png",tr("恢复默认")},
        {"target",":/rc/images/toolbar/stylepanel/target.png",tr("目标")},
        {"light",":/rc/images/toolbar/stylepanel/light.png",tr("发光")},
        {"share",":/rc/images/toolbar/stylepanel/share.png",tr("分享")},
        {"lab",":/rc/images/toolbar/stylepanel/lab.png",tr("实验室")}
    };
public:
    explicit StylePanelWidget(QWidget *parent = nullptr);
    void setup();
signals:

};

#endif // STYLEPANELWIDGET_H
