#ifndef COLORPLANSTAB_H
#define COLORPLANSTAB_H

#include <QTabWidget>
#include <QLabel>

#include "../widget/ColorPanelWidget.h"

class ColorPlansTab : public QTabWidget
{
    Q_OBJECT
private:
    ColorPanelWidget * colorPanelWidget = nullptr;
    QLabel * plansWidget = nullptr;

    const QString qssTab = "QTabWidget{ /* The tab widget frame */ \
                        background-color:#535353; \
                        position: absolute;\
                        border:0px; margin-left:0px;border-color:transparent;} \
                    QTabBar::pane { \
                        border:0px;border-color:transparent;} \
                    QTabBar::tab { \
                        background-color: #393A3A; \
                        color:#6D7377; } \
                    QTabBar::tab:selected {\
                       background-color: #535353; \
                       color:#ffffff;}";

public:
    explicit ColorPlansTab(QWidget * parent=nullptr);
    void setup();
};

#endif // COLORPLANSTAB_H
