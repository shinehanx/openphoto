#ifndef LEVELCHANELPATHTAB_H
#define LEVELCHANELPATHTAB_H

#include <QTabWidget>
#include <QLabel>

/**
 * @brief The LevelChanelPathTab class
 * 图层/通道/路径
 */
class LevelChanelPathTab : public QTabWidget
{
    Q_OBJECT
private:
    QLabel * levelWidget = nullptr;
    QLabel * chanelWidget = nullptr;
    QLabel * pathWidget = nullptr;

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
    explicit LevelChanelPathTab(QWidget *parent = nullptr);
    void setup();
signals:

};

#endif // LEVELCHANELPATHTAB_H
