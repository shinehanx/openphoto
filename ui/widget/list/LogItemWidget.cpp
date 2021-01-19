#include "LogItemWidget.h"
#define LOGITEMWIDGET_MARGIN 2
#define LOGITEMWIDGET_IMAGEVIEW_W 32
#define LOGITEMWIDGET_IMAGEVIEW_H 24
#define LOGITEMWIDGET_LOCKVIEW_WH 24
LogItemWidget::LogItemWidget(QWidget *parent) : QLabel(parent)
{

}

LogItemWidget::LogItemWidget(QString _imgPath, QString _itemText, QWidget *parent) : QLabel(parent)
{
    imgPath = _imgPath;
    itemText = _itemText;
}

void LogItemWidget::setup()
{
    QRect rect = geometry();
    int x =LOGITEMWIDGET_MARGIN, y = LOGITEMWIDGET_MARGIN, w = LOGITEMWIDGET_IMAGEVIEW_W, h = LOGITEMWIDGET_IMAGEVIEW_H;
    imageView = new ImageView(this);
    imageView->show(x, y, w, h, imgPath);

    labelText = new QLabel(this);
    x += LOGITEMWIDGET_IMAGEVIEW_W;
    w = rect.width() - LOGITEMWIDGET_IMAGEVIEW_W - LOGITEMWIDGET_LOCKVIEW_WH - 2 * LOGITEMWIDGET_MARGIN - 20;
    labelText->setGeometry(x, y, w, h);
    labelText->setStyleSheet("background-color:transparent;color:#ffffff;");
    labelText->setText(itemText);

    lockView = new GridItemWidget(":/rc/images/toolbar/layerpanel/lock-all.png", QSize(16,16), this);
    x = rect.width() - LOGITEMWIDGET_MARGIN - LOGITEMWIDGET_LOCKVIEW_WH - 20;
    w = LOGITEMWIDGET_LOCKVIEW_WH;
    h = LOGITEMWIDGET_LOCKVIEW_WH;
    lockView->setGeometry(x, y, w, h);
    lockView->setup();
}
