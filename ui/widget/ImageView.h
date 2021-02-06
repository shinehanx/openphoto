#ifndef IMAGEVIEW_H
#define IMAGEVIEW_H

#include <QWidget>
#include <QLabel>

class ImageView : public QLabel
{
    Q_OBJECT
public:
    explicit ImageView(QWidget *parent = nullptr);

    void show(const QRect &rect, const QString &imagePath);
    void show(int x,int y,int w,int h, const QString &imagePath);
    void show(const QSize &size, const QString &imagePath);

private:
    QString qss = "QLabel{background: transparent;background-image:url(%1);}";
signals:

};

#endif // IMAGEVIEW_H
