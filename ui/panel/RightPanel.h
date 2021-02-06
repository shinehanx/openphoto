#ifndef RIGHTPANEL_H
#define RIGHTPANEL_H

#include <QWidget>
#include <ui/tab/ColorPlansTab.h>
#include <ui/tab/AdjustStyleTab.h>
#include <ui/tab/LayerChanelPathTab.h>
#include <QVBoxLayout>
/**
 * @brief The RightPanel class
 * 右边的面板，包含色板，样式，图层
 */
class RightPanel : public QWidget
{
    Q_OBJECT
private:
    //头部qss
    const QString qssHeader = "QLabel {background-color:#393939; \
                border-top: 1px solid #4a4a4a;\
            }";
    //头部
    QLabel * header = nullptr;
public:
    explicit RightPanel(QWidget *parent = nullptr);
    void setup();

    QVBoxLayout * vBoxLayout = nullptr;
    ColorPlansTab * colorPlansTab = nullptr;
    AdjustStyleTab * adjustStyleTab = nullptr;
    LayerChanelPathTab * layerChanelPathTab = nullptr;
signals:

};

#endif // RIGHTPANEL_H
