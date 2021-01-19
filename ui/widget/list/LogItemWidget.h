#ifndef LOGITEMWIDGET_H
#define LOGITEMWIDGET_H

#include <QLabel>
#include "../ImageView.h"
#include "../../../model/UiModel.h"
#include "../grid/GridItemWidget.h"

class LogItemWidget : public QLabel
{
    Q_OBJECT
private:
    const QString qss = "QLabel {background-color:#535353;}";
    ImageView * imageView = nullptr;
    QLabel * labelText = nullptr;
    GridItemWidget * lockView = nullptr;

    QString imgPath;
    QString itemText;
public:
    explicit LogItemWidget(QWidget *parent = nullptr);
    explicit LogItemWidget(QString _imgPath, QString itemText, QWidget *parent = nullptr);
    void setup();
signals:

};

#endif // LOGITEMWIDGET_H
