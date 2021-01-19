#ifndef LAYERPANELWIDGET_H
#define LAYERPANELWIDGET_H

#include <QWidget>
#include <QLabel>
#include "../toolbar/LayerTypeToolBar.h"
#include "../toolbar/LayerOpacityToolBar.h"
#include "../toolbar/LayerLockToolBar.h"
#include "../../../model/UiModel.h"
#include "../list/LayerLogListWidget.h"

#define LAYERTOOLBAR_SIZE_1 5
#define LAYERTOOLBAR_SIZE_2 6
#define LAYERTOOLBAR_SIZE_3 5
#define LAYERLOGITEMDATA_SIZE 5
class LayerPanelWidget : public QLabel
{
    Q_OBJECT
private:
    const QString qss = "QLabel{background-color:#464646;border: 0px}";
    LayerLogListItemData layerLogListItemData[LAYERLOGITEMDATA_SIZE] = {
        {"layer1",":/rc/images/toolbar/layerpanel/pic.png","layer1"},
        {"layer2",":/rc/images/toolbar/layerpanel/pic.png","layer2"},
        {"layer3",":/rc/images/toolbar/layerpanel/pic.png","layer3"},
        {"layer4",":/rc/images/toolbar/layerpanel/pic.png","layer4"},
        {"layer5",":/rc/images/toolbar/layerpanel/pic.png","layer5"}
    };
   
    LayerTypeToolBar * layerTypeToolbar = nullptr;
    LayerOpacityToolBar * layerOpacityToolbar = nullptr;
    LayerLockToolBar * layerLockToolbar = nullptr;
    LayerLogListWidget * layerLogListWidget = nullptr;

public:
    explicit LayerPanelWidget(QWidget *parent = nullptr);
    void setup();
signals:

};

#endif // LAYERPANELWIDGET_H
