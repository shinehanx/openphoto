#ifndef ADJUSTSTYLETAB_H
#define ADJUSTSTYLETAB_H

#include <QTabWidget>
#include <QLabel>

/**
 * @brief The AdjustStyleTab class
 * 调整/样式选择框
 */
class AdjustStyleTab : public QTabWidget
{
    Q_OBJECT
private:
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
    QLabel * adjustWidget = nullptr;
    QLabel * styleWidget = nullptr;
public:
    explicit AdjustStyleTab(QWidget *parent = nullptr);
    void setup();
signals:

};

#endif // ADJUSTSTYLETAB_H
