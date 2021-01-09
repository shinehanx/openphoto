#ifndef COLORPLANSTAB_H
#define COLORPLANSTAB_H

#include <QTabWidget>
#include <QLabel>

class ColorPlansTab : public QTabWidget
{
    Q_OBJECT
private:
    QLabel * colorWidget = nullptr;
    QLabel * plansWidget = nullptr;

    const QString qssTab = "QTabWidget::panel { /* The tab widget frame */ \
                        background-color:#4F4E4E; \
                        position: absolute;\
                        top: -0.5em;} \
                    QTabBar::tab { \
                        background-color: #393A3A; \
                        color:#6D7377; } \
                    QTabBar::tab:selected {\
                       background-color: #4F4E4E; \
                       color:#ffffff;}";

public:
    explicit ColorPlansTab(QWidget * parent=nullptr);
    void setup();
};

#endif // COLORPLANSTAB_H
