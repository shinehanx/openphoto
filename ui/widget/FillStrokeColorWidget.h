#ifndef FILLSTROKECOLORWIDGET_H
#define FILLSTROKECOLORWIDGET_H

#include <QWidget>
#include <QLabel>
/**
 * @brief The FrontBackColorWidget class
 * 填充/描边工具切换，用在左侧工具栏：是ChangeFrontBackColorWidget的一部分
 */
class FillStrokeColorWidget : public QWidget
{
    Q_OBJECT
private:
    QString fillColor = "#21B7B7";
    QString strokeColor = "#ffffff";

    const QString qssFillColorView = "QLabel {background-color: %1;border:1px solid #000000;}";
    const QString qssStrokeColorView = "QLabel {background-color: %1;border:2px solid %2;}";

    //填充颜色
    QLabel * fillColorView = nullptr;
    //描边颜色
    QLabel * strokeColorView = nullptr;
public:
    explicit FillStrokeColorWidget(QWidget *parent = nullptr);
    void setup();
signals:

};

#endif // FRONTBACKCOLORWIDGET_H
