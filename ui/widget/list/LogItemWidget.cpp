#include "LogItemWidget.h"
#define LOGITEMWIDGET_MARGIN 1
#define LOGITEMWIDGET_IMAGEVIEW_W 32
#define LOGITEMWIDGET_IMAGEVIEW_H 22
#define LOGITEMWIDGET_LOCKVIEW_WH 18
LogItemWidget::LogItemWidget(QWidget *parent) : QLabel(parent)
{

}

LogItemWidget::LogItemWidget(QString _imgPath, QString _itemText, QWidget *parent) : QLabel(parent)
{
    imgPath = _imgPath;
    itemText = _itemText;
}

LogItemWidget::LogItemWidget(QString _imgPath, QString _itemText, QString _shotcutText, QWidget *parent) : QLabel(parent)
{
    imgPath = _imgPath;
    itemText = _itemText;
    shotcutText = _shotcutText;
}

void LogItemWidget::setup()
{
    QRect rect = geometry();
    int x =LOGITEMWIDGET_MARGIN, y = LOGITEMWIDGET_MARGIN, w = LOGITEMWIDGET_IMAGEVIEW_W, h = LOGITEMWIDGET_IMAGEVIEW_H;
    imageView = new ImageView(this);
    imageView->setStyleSheet(qssImageView);
    imageView->show(x, y, w, h, imgPath);

    labelText = new QLabel(this);
    x += LOGITEMWIDGET_IMAGEVIEW_W;
    w = rect.width() - LOGITEMWIDGET_IMAGEVIEW_W - LOGITEMWIDGET_LOCKVIEW_WH - 2 * LOGITEMWIDGET_MARGIN - 20;
    labelText->setGeometry(x, y, w, h);
    labelText->setStyleSheet(qssLabel);
    labelText->setText(itemText);

    x = rect.width() - LOGITEMWIDGET_MARGIN - LOGITEMWIDGET_LOCKVIEW_WH - 22;
    w = LOGITEMWIDGET_LOCKVIEW_WH;
    h = LOGITEMWIDGET_LOCKVIEW_WH;
    if (shotcutText == nullptr || shotcutText == "") {
        lockView = new GridItemWidget(":/rc/images/toolbar/layerpanel/lock-all.png", QSize(16,16), this);
        lockView->setGeometry(x, y, w, h);
        lockView->setStyleSheet(qssLockView);
        lockView->setup();
    }else{
        shotcutView = new QLabel(this);
        shotcutView->setText(shotcutText);
        w = LOGITEMWIDGET_LOCKVIEW_WH + 15;
        shotcutView->setStyleSheet(qssShotcut);
        shotcutView->setGeometry(x, y, w, h);
    }

}
