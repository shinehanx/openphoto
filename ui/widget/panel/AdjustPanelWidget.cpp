#include "AdjustPanelWidget.h"

#define ADJUSTPANELWIDGET_MARGIN 0
#define ADJUSTPANELWIDGET_W 50
#define ADJUSTPANELWIDGET_ITEM_HT 20

#define CHANELWIDGET_HT 90
#define CHROMATOGRAMWIDGET_HT 16

AdjustPanelWidget::AdjustPanelWidget(QWidget *parent) : QLabel(parent)
{
    //setAutoFillBackground(true);
}

void AdjustPanelWidget::setup()
{
    setStyleSheet(qss);
    QRect rect = geometry();
    int x = ADJUSTPANELWIDGET_MARGIN,
        y = ADJUSTPANELWIDGET_MARGIN,
        w = rect.width() + 1,
        h = ADJUSTPANELWIDGET_ITEM_HT;

    topLabel = new QLabel(this);
    topLabel->setStyleSheet(qssTopLabel);
    topLabel->setGeometry(x, y, w, h);
    topLabel->setContentsMargins(16, 0, 0, 0);
    topLabel->setText(tr("添加调整"));

    adjustToolbar1 = new AdjustPanelToolBar(adjustToolbarData1,1, this);
    y += ADJUSTPANELWIDGET_ITEM_HT;
    adjustToolbar1->setGeometry(x, y, w, h);
    adjustToolbar1->setup();
}


