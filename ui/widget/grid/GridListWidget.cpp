#include "GridListWidget.h"
#include <QListWidgetItem>
#include <QScrollBar>
#include "../ImageView.h"
#include "GridItemWidget.h"
#define GRIDLISTWIDGET_COLUMN_COUNT 7
#define GRIDLISTWIDGET_ROW_COUNT 3
GridListWidget::GridListWidget(QWidget *parent) : QListWidget(parent)
{

}

GridListWidget::GridListWidget(GridListItemData * datas, int size, QWidget *parent) : QListWidget(parent)
{
    gridListItemData = datas;
    gridListItemSize = size;
}

void GridListWidget::setup()
{
    this->setViewMode(QListView::IconMode);
    this->setStyleSheet(qss);

    this->setFrameShape(QListView::NoFrame);
    this->setAttribute(Qt::WA_MacShowFocusRect, 0);
    this->setResizeMode(QListView::Adjust);
    this->horizontalScrollBar()->setVisible(false);
    this->setSpacing(1);
    this->setMovement(QListView::Static);

    if (gridListItemData == nullptr) {
        return ;
    }

    int i = 0;
    for (GridListItemData * data = gridListItemData; i < gridListItemSize; data++) {
        QListWidgetItem * item = new QListWidgetItem();
        item->setSizeHint(QSize(30,30));
        item->setData(Qt::UserRole, data->name);

        GridItemWidget * img = new GridItemWidget(data->icon, QSize(20, 20));
        img->setFixedSize(QSize(30, 30));
        img->setup();
        addItem(item);
        setItemWidget(item, img);
        i++;
    }
}
