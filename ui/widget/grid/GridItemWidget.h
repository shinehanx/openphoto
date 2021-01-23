#ifndef GRIDITEMWIDGET_H
#define GRIDITEMWIDGET_H

#include <QLabel>
#include <QSize>
#include "../ImageView.h"
class GridItemWidget : public QLabel
{
    Q_OBJECT
private:
    QString qssImageView = "QLabel {border:0px;}";
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
