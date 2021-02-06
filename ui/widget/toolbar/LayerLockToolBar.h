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
        {"ToolButton","lockTransparentPix", ":/rc/images/toolbar/layerpanel/lock-transparent-pix.png", tr("锁定透明像素")},
        {"ToolButton","lockImgPix", ":/rc/images/toolbar/layerpanel/lock-img-pix.png", tr("锁定图像像素")},
        {"ToolButton","lockPosition", ":/rc/images/toolbar/layerpanel/lock-position.png", tr("锁定位置")},
        {"ToolButton","lockAll", ":/rc/images/toolbar/layerpanel/lock-all.png", tr("锁定所有")},
        {"Label","锁定:", "", tr("填充")},
		{"ComboBox","percent", "", tr("不透明度百分比")}
    };
public:
    explicit LayerLockToolBar(QWidget *parent = nullptr);
    void setup();

signals:

};

#endif // LAYERLOCKTOOLBAR_H
