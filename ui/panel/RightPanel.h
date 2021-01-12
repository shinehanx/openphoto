#ifndef RIGHTPANEL_H
#define RIGHTPANEL_H

#include <QWidget>
#include <ui/tab/ColorPlansTab.h>
#include <ui/tab/AdjustStyleTab.h>
#include <ui/tab/LevelChanelPathTab.h>
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
    const QString qssHeader = "QLabel {background-color:#383838; \
                border-left: 1px solid #434343;\
                border-top: 1px solid #434343;\
                border-right: 1px solid #434343;\
                border-bottom: 1px solid #434343;\
            }";
    //头部
    QLabel * header = nullptr;
public:
    explicit RightPanel(QWidget *parent = nullptr);
    void setup();

    QVBoxLayout * vBoxLayout = nullptr;
    ColorPlansTab * colorPlansTab = nullptr;
    AdjustStyleTab * adjustStyleTab = nullptr;
    LevelChanelPathTab * levelChanelPathTab = nullptr;
signals:

};

#endif // RIGHTPANEL_H
