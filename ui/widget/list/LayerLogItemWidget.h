#ifndef LAYERLOGITEMWIDGET_H
#define LAYERLOGITEMWIDGET_H

#include <QWidget>
#include <QLabel>
#include "../ImageView.h"
#include "../grid/GridItemWidget.h"
#include "LogItemWidget.h"

class LayerLogItemWidget : public QWidget
{
    Q_OBJECT
private:
    const QString qssEye = "QLabel {background-color:#535353;background:url(:/rc/images/toolbar/layerpanel/eye.png);}";
    const QString qssImgItem = "QLabel {background-color:#535353;}";
    GridItemWidget * eye = nullptr;
    LogItemWidget * imgItem = nullptr;
    QString imgPath;
    QString itemText;
public:
    explicit LayerLogItemWidget(QWidget *parent = nullptr);
    explicit LayerLogItemWidget(QString _imgPath, QString _itemText, QWidget *parent=nullptr);
    void setup();
signals:

};

#endif // LAYERLOGITEMWIDGET_H
