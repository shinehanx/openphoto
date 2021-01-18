#ifndef LAYERLOCKTOOLBAR_H
#define LAYERLOCKTOOLBAR_H

#include <QToolBar>
#include "../../../model/UiModel.h"

#define LAYERLOCK_TOOLBUTTONDATAS_SIZE 7
class LayerLockToolBar : public QToolBar
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
    const QString qssLabel = "QLabel {background-color:transparent; color:#ffffff;margin-top:3px; margin-left:7px;}";

    ToolButtonData toolButtonDatas[LAYERLOCK_TOOLBUTTONDATAS_SIZE] = {
        {"Label","锁定:", "", tr("锁定")},
        {"ToolButton","adjustLayerFilter", ":/rc/images/toolbar/layerpanel/adjust-layer-filter.png", tr("调整图层滤镜")},
        {"ToolButton","textLayerFilter", ":/rc/images/toolbar/layerpanel/text-layer-filter.png", tr("文字图层滤镜")},
        {"ToolButton","shapeLayerFilter", ":/rc/images/toolbar/layerpanel/shape-layer-filter.png", tr("形状图层滤镜")},
        {"ToolButton","intelliLayerFilter", ":/rc/images/toolbar/layerpanel/intelli-layer-filter.png", tr("智能图层滤镜")},
        {"Label","锁定:", "", tr("填充")},
		{"ComboBox","percent", "", tr("不透明度百分比")}
    };
public:
    explicit LayerLockToolBar(QWidget *parent = nullptr);
    void setup();

signals:

};

#endif // LAYERLOCKTOOLBAR_H
