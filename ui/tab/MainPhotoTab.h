#ifndef MAINPHOTOTAB_H
#define MAINPHOTOTAB_H

#include <QTabWidget>
#include <QLabel>

class MainPhotoTab : public QTabWidget
{
    Q_OBJECT

private:
    const QString qssTab = "QTabWidget{ /* The tab widget frame */ \
                        background-color:#393939; \
                        position: absolute;\
                        font-size: 12px;\
                        border-top:1px solid #4a4a4a;} \
                    QTabBar::pane { \
                        background-color:red;\
                        border:1px solid #4a4a4a;} \
                    QTabBar::tab { \
                        margin-top:1px;\
                        padding:0px 6px 0px 6px;\
                        height:18px;\
                        background-color: #3a3a3a; \
                        font-size: 12px;\
                        color:#6D7377; } \
                    QTabBar::tab:selected {\
                       border-top:1px solid #6a6a6a;\
                       height:18px;\
                       padding:0px 6px 0px 6px;\
                       background-color: #535353; \
                       font-size: 12px;\
                       color:#ffffff;}";

    QLabel * photoView;
public:
    explicit MainPhotoTab(QWidget *parent = nullptr);
    void setup();
signals:

};

#endif // MAINPHOTOTAB_H
