#include "LayerLogListWidget.h"
#include <QScrollBar>
#define LAYERLOGLISTWIDGET_ITEM_H 25
LayerLogListWidget::LayerLogListWidget(QWidget *parent) : QListWidget(parent)
{

}

LayerLogListWidget::LayerLogListWidget(LayerLogListItemData * datas, int size, QWidget *parent): QListWidget(parent)
{
    layerLogListItemData = datas;
    layerLogListItemSize = size;
}

void LayerLogListWidget::setup()
{
    this->setViewMode(QListView::IconMode);
    this->setStyleSheet(qss);
    QRect rect = geometry();
    QRect scrollRect = this->horizontalScrollBar()->geometry();

    this->setFrameShape(QListView::NoFrame);
    this->setAttribute(Qt::WA_MacShowFocusRect, 0);
    this->setResizeMode(QListView::Adjust);
    this->horizontalScrollBar()->setVisible(false);
    this->setSpacing(1);
    this->setMovement(QListView::Static);

    if (layerLogListItemData == nullptr) {
        return ;
    }

    int i = 0;
    for (LayerLogListItemData * data = layerLogListItemData; i < layerLogListItemSize; data++) {
        QListWidgetItem * item = new QListWidgetItem();
        item->setSizeHint(QSize(rect.width() - 2, LAYERLOGLISTWIDGET_ITEM_H));
        item->setData(Qt::UserRole, data->name);

        LayerLogItemWidget * layerLog = new LayerLogItemWidget(data->img, data->text);
        layerLog->setFixedSize(QSize(rect.width() - 2, LAYERLOGLISTWIDGET_ITEM_H));
        layerLog->setup();
        addItem(item);
        setItemWidget(item, layerLog);
        i++;
    }
}
