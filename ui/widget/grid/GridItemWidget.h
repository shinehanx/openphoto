#ifndef GRIDITEMWIDGET_H
#define GRIDITEMWIDGET_H

#include <QLabel>
#include <QSize>
#include "../ImageView.h"
class GridItemWidget : public QLabel
{
    Q_OBJECT
private:
    QString qss = "{border: 1px solid #919191;background-color:#535353;}";
    ImageView * imageView = nullptr;
    QString icon ;
    QSize iconSize ;
public:
    explicit GridItemWidget(QWidget *parent = nullptr);
    explicit GridItemWidget(QString _icon, QSize _iconSize, QWidget *parent = nullptr);
    void setup();
signals:

};

#endif // GRIDITEMWIDGET_H
