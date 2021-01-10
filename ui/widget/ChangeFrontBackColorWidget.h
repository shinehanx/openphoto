#ifndef CHANGEFRONTBACKCOLORWIDGET_H
#define CHANGEFRONTBACKCOLORWIDGET_H

#include <QWidget>
#include <QVBoxLayout>
#include <QLabel>
#include "ImageView.h"
#include "FillStrokeColorWidget.h"

/**
 * @brief The ChangeFrontBackColorWidget class
 * change front and back color widget
 */
class ChangeFrontBackColorWidget : public QWidget
{
    Q_OBJECT
private:
    //填色和描边
    ImageView * fillStrokeBtn = nullptr;
    ImageView * changeFillStrokeBtn = nullptr;

    //填色和描边
    FillStrokeColorWidget * fillStrokeColorWidget = nullptr;
public:
    explicit ChangeFrontBackColorWidget(QWidget *parent = nullptr);
    void setup();
signals:

};

#endif // CHANGEFRONTBACKCOLORWIDGET_H
