#ifndef ADJUSTSTYLETAB_H
#define ADJUSTSTYLETAB_H

#include <QTabWidget>
#include <QLabel>

#include "../widget/panel/AdjustPanelWidget.h"
#include "../widget/panel/StylePanelWidget.h"

/**
 * @brief The AdjustStyleTab class
 * 调整/样式选择框
 */
class AdjustStyleTab : public QTabWidget
{
    Q_OBJECT
private:
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

    AdjustPanelWidget * adjustPanelWidget = nullptr;
    StylePanelWidget * stylePanelWidget = nullptr;
public:
    explicit AdjustStyleTab(QWidget *parent = nullptr);
    void setup();
signals:

};

#endif // ADJUSTSTYLETAB_H
