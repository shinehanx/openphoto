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
    const QString qss = "QLabel {background-color:#535353;border:0px;}";
    const QString qssLabel = "background-color:transparent;color:#ffffff;font-size:12px;border:0px;";
    const QString qssImageView = "QLabel {border:0px;}";
    const QString qssLockView = "QLabel {border:0px;}";
    const QString qssShotcut = "QLabel {background-color:transparent;font-size:10px;color:#ffffff;border:0px;}";
    ImageView * imageView = nullptr;
    QLabel * labelText = nullptr;
    GridItemWidget * lockView = nullptr;
    QLabel * shotcutView = nullptr;

    QString imgPath;
    QString itemText;
    QString shotcutText;
public:
    explicit LogItemWidget(QWidget *parent = nullptr);
    explicit LogItemWidget(QString _imgPath, QString itemText, QWidget *parent = nullptr);
    explicit LogItemWidget(QString _imgPath, QString itemText, QString shotcutText, QWidget *parent = nullptr);
    void setup();
signals:

};

#endif // LOGITEMWIDGET_H
