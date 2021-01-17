#ifndef ADJUSTPANELTOOLBAR_H
#define ADJUSTPANELTOOLBAR_H

#include <QToolBar>
#include "../../../model/UiModel.h"

class AdjustPanelToolBar : public QToolBar
{
    Q_OBJECT
private:
    //toolbar qss
    const QString qssToolBar = "QToolBar { background-color:#535353;\
            spacing: 3px;\
            padding:0px 32px 0px 0px;\
            border:0px solid #707070;} \
          QToolButton {margin-right:10px; width:20px;\
            height:20px; \
            background-color:#535353;\
            border: 0px solid #333333; }\
          QToolButton:hover{\
            border-radius: 3px;\
            background-color:#6f6f6f;\
          }";
    ToolButtonData * toolButtonDatas = nullptr;
    int toolButtonSize = 0;
public:
    explicit AdjustPanelToolBar(QWidget *parent = nullptr);
    /**
     * @brief AdjustPanelToolBar 构造函数
     * @param data 按钮列表
     * @param size 按钮列表
     * @param parent 父按钮
     */
    explicit AdjustPanelToolBar(ToolButtonData * datas, int size, QWidget *parent = nullptr);
    void setup();

signals:

};

#endif // ADJUSTPANELTOOLBAR_H
