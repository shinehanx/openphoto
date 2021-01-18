#ifndef LAYERPANELWIDGET_H
#define LAYERPANELWIDGET_H

#include <QWidget>
#include <QLabel>
#include "../toolbar/LayerTypeToolBar.h"
#include "../toolbar/LayerOpacityToolBar.h"
#include "../toolbar/LayerLockToolBar.h"
#include "../../../model/UiModel.h"
#define LAYERTOOLBAR_SIZE_1 5
#define LAYERTOOLBAR_SIZE_2 6
#define LAYERTOOLBAR_SIZE_3 5
class LayerPanelWidget : public QLabel
{
    Q_OBJECT
private:
    const QString qss = "QLabel{background-color:#535353;border: 0px}";
   
    LayerTypeToolBar * layerTypeToolbar = nullptr;
    LayerOpacityToolBar * layerOpacityToolbar = nullptr;
    LayerLockToolBar * layerLockToolbar = nullptr;

public:
    explicit LayerPanelWidget(QWidget *parent = nullptr);
    void setup();
signals:

};

#endif // LAYERPANELWIDGET_H
