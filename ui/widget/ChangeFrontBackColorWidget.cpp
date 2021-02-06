#include "ChangeFrontBackColorWidget.h"
#include <QDebug>

#define CHANGEFRONTBACKCOLORWIDGET_MARGIN 3
#define CHANGEFRONTBACKCOLORWIDGET_BTN_W 12
#define CHANGEFRONTBACKCOLORWIDGET_BTN_H 12
ChangeFrontBackColorWidget::ChangeFrontBackColorWidget(QWidget *parent) : QWidget(parent)
{
    setAutoFillBackground(true);
}

/**
 * @brief ChangeFrontBackColorWidget::setup
 * 初始化UI
 */
void ChangeFrontBackColorWidget::setup()
{
    int x = CHANGEFRONTBACKCOLORWIDGET_MARGIN,
        y = CHANGEFRONTBACKCOLORWIDGET_MARGIN,
        w = CHANGEFRONTBACKCOLORWIDGET_BTN_W,
        h = CHANGEFRONTBACKCOLORWIDGET_BTN_H;

    QRect rect = geometry();
    qDebug() << "ChangeFrontBackColorWidget this rect:" << rect;

    //填充和描边按钮
    fillStrokeBtn = new ImageView(this);
    fillStrokeBtn->show(x, y, w, h, ":/rc/images/widget/fill-stroke.png");
    qDebug() << "ChangeFrontBackColorWidget.left rect:" << QRect(x,y,w,h);

    //切换填充和描边按钮
    x = rect.width() - CHANGEFRONTBACKCOLORWIDGET_MARGIN - CHANGEFRONTBACKCOLORWIDGET_BTN_W;
    changeFillStrokeBtn = new ImageView(this);
    changeFillStrokeBtn->show(x, y, w, h, ":/rc/images/widget/change-fill-stroke.png");
    qDebug() << "ChangeFrontBackColorWidget.right rect:" << QRect(x,y,w,h);

    //切换填充和描边控件
    fillStrokeColorWidget = new FillStrokeColorWidget(this);
    x = CHANGEFRONTBACKCOLORWIDGET_MARGIN;
    y = CHANGEFRONTBACKCOLORWIDGET_MARGIN * 3 + CHANGEFRONTBACKCOLORWIDGET_BTN_H;
    w = rect.width() - 2 * CHANGEFRONTBACKCOLORWIDGET_MARGIN;
    h = rect.height() - y -  2 * CHANGEFRONTBACKCOLORWIDGET_MARGIN;
    fillStrokeColorWidget->setGeometry(x, y, w, h);
    qDebug() << "ChangeFrontBackColorWidget.bottom rect:" << QRect(x,y,w,h);
    fillStrokeColorWidget->setup();
}
