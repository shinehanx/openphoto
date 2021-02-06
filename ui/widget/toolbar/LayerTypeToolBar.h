#ifndef LAYERTYPETOOLBAR_H
#define LAYERTYPETOOLBAR_H

#include <QToolBar>
#include "../../../model/UiModel.h"

#define LAYERTYPE_TOOLBUTTONDATAS_SIZE 6
class LayerTypeToolBar : public QToolBar
{
    Q_OBJECT
private:
    //toolbar qss
    const QString qssToolBar = "QToolBar { background-color:#535353;\
            spacing: 5px;\
            padding:0px 2px 0px 0px;\
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
    ToolButtonData toolButtonDatas[LAYERTYPE_TOOLBUTTONDATAS_SIZE] = {
        {"ComboBox","layType", "", tr("选择类型")},
        {"ToolButton","pixLayerFilter", ":/rc/images/toolbar/layerpanel/pix-layer-filter.png", tr("像素图层滤镜")},
        {"ToolButton","adjustLayerFilter", ":/rc/images/toolbar/layerpanel/adjust-layer-filter.png", tr("调整图层滤镜")},
        {"ToolButton","textLayerFilter", ":/rc/images/toolbar/layerpanel/text-layer-filter.png", tr("文字图层滤镜")},
        {"ToolButton","shapeLayerFilter", ":/rc/images/toolbar/layerpanel/shape-layer-filter.png", tr("形状图层滤镜")},
        {"ToolButton","intelliLayerFilter", ":/rc/images/toolbar/layerpanel/intelli-layer-filter.png", tr("智能图层滤镜")}
    };
public:
    explicit LayerTypeToolBar(QWidget *parent = nullptr);
    void setup();

signals:

};

#endif // LAYERTYPETOOLBAR_H
