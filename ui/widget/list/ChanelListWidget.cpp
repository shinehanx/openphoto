#include "ChanelListWidget.h"
#include <QScrollBar>
#define CHANELLISTWIDGET_ITEM_H 25
ChanelListWidget::ChanelListWidget(QWidget *parent) : QListWidget(parent)
{

}

ChanelListWidget::ChanelListWidget(ChanelListItemData * datas, int size, QWidget *parent): QListWidget(parent)
{
    chanelListItemData = datas;
    chanelListItemSize = size;
}

void ChanelListWidget::setup()
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

    if (chanelListItemData == nullptr) {
        return ;
    }

    int i = 0;
    for (ChanelListItemData * data = chanelListItemData; i < chanelListItemSize; data++) {
        QListWidgetItem * item = new QListWidgetItem();
        item->setSizeHint(QSize(rect.width() - 2, CHANELLISTWIDGET_ITEM_H));
        item->setData(Qt::UserRole, data->name);

        ChanelItemWidget * chanel = new ChanelItemWidget(data->img, data->text, data->shotcut);
        chanel->setFixedSize(QSize(rect.width() - 2, CHANELLISTWIDGET_ITEM_H));
        chanel->setup();
        addItem(item);
        setItemWidget(item, chanel);
        i++;
    }
}
