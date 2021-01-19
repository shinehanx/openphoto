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
    QString qss = "{border: 1px solid rgba(255, 255, 255, 0.5);background-color:#464646;}";
public:
    explicit LayerLogListWidget(QWidget *parent = nullptr);
    explicit LayerLogListWidget(LayerLogListItemData * datas, int size, QWidget *parent = nullptr);
    void setup();
signals:

};

#endif // LAYERLOGLISTWIDGET_H
