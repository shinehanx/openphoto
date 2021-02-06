#ifndef PANSPANELWIDGET_H
#define PANSPANELWIDGET_H

#include <QWidget>
#include <QLabel>
#include <QList>
#include <QToolBar>
#include <QAction>
class PansPanelWidget : public QLabel
{
    Q_OBJECT

private:
    const QString qss = "QLabel{background-color:#535353;border: 0px}";
    const QString qssColorView = "QLabel {background-color:%1;border:0.5px solid #333333}";
    const QString qssToolBar = "QToolBar { background-color:#535353;\
              spacing: 3px;\
              padding:0px 32px 0px 0px;\
              border:1px solid #707070;} \
            QToolButton {margin-right:10px; width:14px;\
              height:14px; \
              background-color:#535353;\
              border: 0px solid #333333; }\
            QToolButton:hover{\
              border-left: 1px solid #333333;\
              border-right: 1px solid #333333;\
              background-color:#6f6f6f;\
            }";
    QList<QLabel *> colorViewList;
    QToolBar * toolbar;
    QAction * delPansAction;
    QAction * newPansAction;
public:
    explicit PansPanelWidget(QWidget *parent = nullptr);
    void setup();
signals:

};

#endif // PANSPANELWIDGET_H
