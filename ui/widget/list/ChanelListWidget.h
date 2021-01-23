#ifndef CHANELLISTWIDGET_H
#define CHANELLISTWIDGET_H

#include <QListWidget>
#include "../../../model/UiModel.h"
#include "ChanelItemWidget.h"

class ChanelListWidget : public QListWidget
{
    Q_OBJECT
private:
    ChanelListItemData * chanelListItemData = nullptr;
    int chanelListItemSize = 0;
    QString qss = "QListWidget{background-color:#464646;border-bottom:1px solid #262626;border-top:1px solid #262626;} QListWidget::Item{background-color:#262626;}";
public:
    explicit ChanelListWidget(QWidget *parent = nullptr);
    explicit ChanelListWidget(ChanelListItemData * datas, int size, QWidget *parent = nullptr);
    void setup();
signals:

};

#endif // CHANELLISTWIDGET_H
