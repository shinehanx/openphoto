#ifndef GRIDLISTWIDGET_H
#define GRIDLISTWIDGET_H

#include <QListWidget>
#include "../../../model/UiModel.h"

class GridListWidget : public QListWidget
{
    Q_OBJECT
private:
    int gridListItemSize = 0;
    GridListItemData * gridListItemData;
    QString qss = "QListWidget {border: 1px solid rgba(255, 255, 255, 0.5);background-color:#919191;}";


public:
    explicit GridListWidget(QWidget *parent = nullptr);
    explicit GridListWidget(GridListItemData * datas, int size, QWidget *parent = nullptr);
    void setup();
signals:

};

#endif // GRIDLISTWIDGET_H
