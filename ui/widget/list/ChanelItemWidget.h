#ifndef CHANELITEMWIDGET_H
#define CHANELITEMWIDGET_H

#include <QWidget>
#include <QLabel>
#include "../ImageView.h"
#include "../grid/GridItemWidget.h"
#include "LogItemWidget.h"

class ChanelItemWidget : public QWidget
{
    Q_OBJECT
private:
    const QString qss = "QLabel {border-bottom:1px solid #262626;}";
    GridItemWidget * eye = nullptr;
    LogItemWidget * imgItem = nullptr;
    QString imgPath;
    QString itemText;
	QString shotcutText;
public:
    explicit ChanelItemWidget(QWidget *parent = nullptr);
    explicit ChanelItemWidget(QString _imgPath, QString _itemText, QString _shotcutText, QWidget *parent=nullptr);
    void setup();
signals:

};

#endif // CHANELITEMWIDGET_H
