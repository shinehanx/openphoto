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
    explicit LevelChanelPathTab(QWidget *parent = nullptr);
    void setup();
signals:

};

#endif // LEVELCHANELPATHTAB_H
