#ifndef LAYERLOGLISTWIDGET_H
#define LAYERLOGLISTWIDGET_H

#include <QListWidget>
#include "../../../model/UiModel.h"
#include "LayerLogItemWidget.h"

class LayerLogListWidget : public QListWidget
{
    Q_OBJECT
private:
    LayerLogListItemData * layerLogListItemData = nullptr;
    int layerLogListItemSize = 0;
    QString qss = "QListWidget{background-color:#464646;border-bottom:1px solid #262626;} QListWidget::Item{background-color:#262626;}";
public:
    explicit LayerLogListWidget(QWidget *parent = nullptr);
    explicit LayerLogListWidget(LayerLogListItemData * datas, int size, QWidget *parent = nullptr);
    void setup();
signals:

};

#endif // LAYERLOGLISTWIDGET_H
