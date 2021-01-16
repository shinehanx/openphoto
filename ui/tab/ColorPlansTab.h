#ifndef COLORPLANSTAB_H
#define COLORPLANSTAB_H

#include <QTabWidget>
#include <QLabel>
#include "../widget/ColorPanelWidget.h"
#include "../widget/PansPanelWidget.h"

class ColorPlansTab : public QTabWidget
{
    Q_OBJECT
private:
    ColorPanelWidget * colorPanelWidget = nullptr;
    PansPanelWidget * plansPanelWidget = nullptr;

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
    explicit ColorPlansTab(QWidget * parent=nullptr);
    void setup();
};

#endif // COLORPLANSTAB_H
