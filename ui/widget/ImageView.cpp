#include "ImageView.h"
#include <QDebug>
ImageView::ImageView(QWidget *parent) : QLabel(parent)
{
    setStyleSheet("QLabel{background-color:transparent;}");
}

void ImageView::show(const QRect &rect, const QString &imagePath)
{
    this->setGeometry(rect);
    QPixmap pixmap(imagePath);

    if (!pixmap.isNull()) {
        int w=rect.width();
        int h=rect.height();
        this->setPixmap(pixmap.scaled(w,h, Qt::IgnoreAspectRatio, Qt::SmoothTransformation));
    }
}


void ImageView::show(int x,int y,int w,int h, const QString &imagePath)
{
    QRect rect(x,y,w,h);
    ImageView::show(rect,imagePath);
}

void ImageView::show(const QSize &size, const QString &imagePath)
{
    this->setFixedSize(size);

    QPixmap pixmap(imagePath);

    if (!pixmap.isNull()) {
        int w=size.width();
        int h=size.height();
        this->setPixmap(pixmap.scaled(w,h, Qt::IgnoreAspectRatio, Qt::SmoothTransformation));
    }
}
