#ifndef LEVELCHANELPATHTAB_H
#define LEVELCHANELPATHTAB_H

#include <QTabWidget>
#include <QLabel>
#include "../widget/panel/LayerPanelWidget.h"
#include "../widget/panel/ChanelPanelWidget.h"
#include "../widget/panel/PathPanelWidget.h"
/**
 * @brief The LevelChanelPathTab class
 * 图层/通道/路径
 */
class LayerChanelPathTab : public QTabWidget
{
    Q_OBJECT
private:
    LayerPanelWidget * layerPanelWidget = nullptr;
    ChanelPanelWidget * chanelPanelWidget = nullptr;
    PathPanelWidget * pathPanelWidget = nullptr;

    const QString qssTab = "QTabWidget{ /* The tab widget frame */ \
                        background-color:#535353; \
                        position: absolute;\
                        border-top:1px solid #4a4a4a;} \
                    QTabBar::pane { \
                        border:1px solid #4a4a4a;} \
                    QTabBar::tab { \
                        border-top:1px solid #4a4a4a;\
                        width:50px; height:18px;\
                        background-color: #393A3A; \
                        color:#6D7377; } \
                    QTabBar::tab:selected {\
                       border-top:1px solid #6a6a6a;\
                       width:50px; height:18px;\
                       background-color: #535353; \
                       color:#ffffff;}";

public:
    explicit LayerChanelPathTab(QWidget *parent = nullptr);
    void setup();
signals:

};

#endif // LEVELCHANELPATHTAB_H
