#include "GridItemWidget.h"

GridItemWidget::GridItemWidget(QWidget *parent) : QLabel(parent)
{

}

GridItemWidget::GridItemWidget(QString _icon, QSize _iconSize, QWidget *parent) : QLabel(parent)
{
    icon = _icon;
    iconSize = _iconSize;
}

void GridItemWidget::setup()
{
    //setStyleSheet(qss);
    QRect rect = geometry();
    int x = (rect.width() - iconSize.width()) / 2;
    int y = (rect.height() - iconSize.height()) / 2;
    int w = iconSize.width();
    int h = iconSize.height();

    imageView = new ImageView(this);
    imageView->setStyleSheet(qssImageView);
    imageView->show(x, y , w, h, icon);
}
