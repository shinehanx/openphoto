#ifndef ADJUSTPANELWIDGET_H
#define ADJUSTPANELWIDGET_H

#include <QWidget>
#include <QLabel>
#include "../toolbar/AdjustPanelToolBar.h"
#include "../../../model/UiModel.h"

class AdjustPanelWidget : public QLabel
{
    Q_OBJECT
private:
    const QString qss = "QLabel{background-color:#535353;border: 0px}";
    const QString qssTopLabel = "QLabel{background-color:#535353;color:#ffffff;border: 0px;padding:0,0,0,16px;}";

    ToolButtonData adjustToolbarData1[3] = {
        {"brightness",":/rc/images/toolbar/adjustpanel/brightness.png",tr("亮度/对比度")}
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
