#ifndef LAYEROPACITYTOOLBAR_H
#define LAYEROPACITYTOOLBAR_H

#include <QToolBar>
#include "../../../model/UiModel.h"

#define LAYEROPCITY_TOOLBUTTONDATAS_SIZE 6
class LayerOpacityToolBar : public QToolBar
{
    Q_OBJECT
private:
    //toolbar qss
    const QString qssToolBar = "QToolBar { background-color:#535353;\
            spacing: 5px;\
            padding:0px 2px 0px 0px;\
            border-top:1px solid #6a6a6a;\
            border-bottom:1px solid #383838;} \
          QToolButton {width:20px;\
            height:20px; \
            background-color:#535353;\
            border: 0px solid #333333; }\
          QToolButton:hover{\
            border-radius: 3px;\
            background-color:#6f6f6f;\
          }";
    const QString qssComboBox = "QComboBox {\
                font-size: 14px;\
                color: #000000;\
                font-style: normal;\
                font-weight: bold;\
                margin-left: 7px;\
            }\
            /*QComboBox::drop-down {\
                width:28px;\
                height:22px;\
                border: 1px solid red;\
                subcontrol-position: center top;\
                subcontrol-origin: padding;\
            }\
            QComboBox::down-arrow {\
                border: 1px solid green;\
            }*/";
    const QString qssLabel = "QLabel {background-color:transparent; color:#ffffff;margin-top:3px;}";

    ToolButtonData toolButtonDatas[LAYEROPCITY_TOOLBUTTONDATAS_SIZE] = {
        {"ComboBox","layOpocity", "", tr("选择类型")},
        {"Label","不透明度:", "", tr("不透明度")},
        {"ComboBox","percent", "", tr("不透明度百分比")}
    };
public:
    explicit LayerOpacityToolBar(QWidget *parent = nullptr);
    void setup();

signals:

};

#endif // LAYEROPACITYTOOLBAR_H
