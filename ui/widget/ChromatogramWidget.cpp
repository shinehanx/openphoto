#include "ChromatogramWidget.h"

#define CHROMATOGRAMWIDGET_ITEM_W 16
#define CHROMATOGRAMWIDGET_ITEM_H 16
ChromatogramWidget::ChromatogramWidget(QWidget *parent) : QWidget(parent)
{
    setAutoFillBackground(true);
}

void ChromatogramWidget::setup()
{
    QRect rect = geometry();
    int x = 0, y = 0, w = CHROMATOGRAMWIDGET_ITEM_W, h = CHROMATOGRAMWIDGET_ITEM_H;
    clearColor = new QLabel(this);
    clearColor->setStyleSheet(qssClearColor);
    clearColor->setGeometry(x, y , w, h);

    chromatogram = new QLabel(this);
    chromatogram->setStyleSheet(qssChromatogram);
    x = CHROMATOGRAMWIDGET_ITEM_W;
    w = rect.width() - 2 * CHROMATOGRAMWIDGET_ITEM_W;
    chromatogram->setGeometry(x, y, w, h);

    white = new QLabel(this);
    white->setStyleSheet(qssWhite);
    x += w;
    w = CHROMATOGRAMWIDGET_ITEM_W;
    h = CHROMATOGRAMWIDGET_ITEM_H / 2;
    white->setGeometry(x, y, w, h);

    black = new QLabel(this);
    black->setStyleSheet(qssBlack);
    y += h;
    black->setGeometry(x, y, w, h);
}
