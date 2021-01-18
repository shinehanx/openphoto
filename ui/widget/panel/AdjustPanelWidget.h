#ifndef ADJUSTPANELWIDGET_H
#define ADJUSTPANELWIDGET_H

#include <QWidget>
#include <QLabel>
#include "../toolbar/AdjustPanelToolBar.h"
#include "../../../model/UiModel.h"
#define ADJUSTTOOLBAR_SIZE_1 5
#define ADJUSTTOOLBAR_SIZE_2 6
#define ADJUSTTOOLBAR_SIZE_3 5
class AdjustPanelWidget : public QLabel
{
    Q_OBJECT
private:
    const QString qss = "QLabel{background-color:#535353;border: 0px}";
    const QString qssTopLabel = "QLabel{background-color:#535353;color:#ffffff;border: 0px;padding:0,0,0,16px;}";

    ToolButtonData adjustToolbarData1[ADJUSTTOOLBAR_SIZE_1] = {
        {"ToolButton","brightness",":/rc/images/toolbar/adjustpanel/brightness.png",tr("亮度/对比度")},
        {"ToolButton","levelset",":/rc/images/toolbar/adjustpanel/levelset.png",tr("色阶")},
        {"ToolButton","curve",":/rc/images/toolbar/adjustpanel/curve.png",tr("曲线")},
        {"ToolButton","exposure",":/rc/images/toolbar/adjustpanel/exposure.png",tr("曝光度")},
        {"ToolButton","saturation",":/rc/images/toolbar/adjustpanel/saturation.png",tr("自然饱和度")}
    };

    ToolButtonData adjustToolbarData2[ADJUSTTOOLBAR_SIZE_2] = {
        {"ToolButton","hue",":/rc/images/toolbar/adjustpanel/hue.png",tr("色相/饱和度")},
        {"ToolButton","levelset",":/rc/images/toolbar/adjustpanel/levelset.png",tr("色阶")},
        {"ToolButton","curve",":/rc/images/toolbar/adjustpanel/curve.png",tr("曲线")},
        {"ToolButton","exposure",":/rc/images/toolbar/adjustpanel/exposure.png",tr("曝光度")},
        {"ToolButton","ss",":/rc/images/toolbar/adjustpanel/saturation.png",tr("色相/饱和度")},
        {"ToolButton","ss",":/rc/images/toolbar/adjustpanel/saturation.png",tr("色相/饱和度")}
    };

    ToolButtonData adjustToolbarData3[ADJUSTTOOLBAR_SIZE_3] = {
        {"ToolButton","hue",":/rc/images/toolbar/adjustpanel/hue.png",tr("色相/饱和度")},
        {"ToolButton","levelset",":/rc/images/toolbar/adjustpanel/levelset.png",tr("色阶")},
        {"ToolButton","curve",":/rc/images/toolbar/adjustpanel/curve.png",tr("曲线")},
        {"ToolButton","exposure",":/rc/images/toolbar/adjustpanel/exposure.png",tr("曝光度")},
        {"ToolButton","ss",":/rc/images/toolbar/adjustpanel/saturation.png",tr("色相/饱和度")}
    };


    QLabel * topLabel = nullptr;
    AdjustPanelToolBar * adjustToolbar1 = nullptr;
    AdjustPanelToolBar * adjustToolbar2 = nullptr;
    AdjustPanelToolBar * adjustToolbar3 = nullptr;

public:
    explicit AdjustPanelWidget(QWidget *parent = nullptr);
    void setup();
signals:

};

#endif // ADJUSTPANELWIDGET_H
