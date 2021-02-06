#include "AdjustPanelWidget.h"

#define ADJUSTPANELWIDGET_MARGIN 0
#define ADJUSTPANELWIDGET_W 50
#define ADJUSTPANELWIDGET_ITEM_MARGIN 8
#define ADJUSTPANELWIDGET_ITEM_HT 20
#define ADJUSTPANELWIDGET_ITEM_WT 30

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

    adjustToolbar1 = new AdjustPanelToolBar(adjustToolbarData1, ADJUSTTOOLBAR_SIZE_1, this);
    x = (rect.width() - ADJUSTTOOLBAR_SIZE_1 * ADJUSTPANELWIDGET_ITEM_WT ) / 2;
    y += ADJUSTPANELWIDGET_ITEM_HT + ADJUSTPANELWIDGET_ITEM_MARGIN;
    w = ADJUSTTOOLBAR_SIZE_1 * ADJUSTPANELWIDGET_ITEM_WT;
    adjustToolbar1->setGeometry(x, y, w, h);
    adjustToolbar1->setup();

    adjustToolbar2 = new AdjustPanelToolBar(adjustToolbarData2, ADJUSTTOOLBAR_SIZE_2, this);
    x = (rect.width() - ADJUSTTOOLBAR_SIZE_2 * ADJUSTPANELWIDGET_ITEM_WT) / 2;
    y += ADJUSTPANELWIDGET_ITEM_HT + ADJUSTPANELWIDGET_ITEM_MARGIN;
    w = ADJUSTTOOLBAR_SIZE_2 * ADJUSTPANELWIDGET_ITEM_WT;
    adjustToolbar2->setGeometry(x, y, w, h);
    adjustToolbar2->setup();

    adjustToolbar3 = new AdjustPanelToolBar(adjustToolbarData3, ADJUSTTOOLBAR_SIZE_3, this);
    x = (rect.width() - ADJUSTTOOLBAR_SIZE_3 * ADJUSTPANELWIDGET_ITEM_WT) / 2;
    y += ADJUSTPANELWIDGET_ITEM_HT + ADJUSTPANELWIDGET_ITEM_MARGIN;
    w = ADJUSTTOOLBAR_SIZE_3 * ADJUSTPANELWIDGET_ITEM_WT;
    adjustToolbar3->setGeometry(x, y, w, h);
    adjustToolbar3->setup();
}


