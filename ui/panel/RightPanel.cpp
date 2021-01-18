#include "RightPanel.h"
#include <QDebug>

#define RIGHTPANEL_TAB_MARGIN 1
#define RIGHTPANEL_TAB_MARGIN_T 2
#define RIGHTPANEL_HEADER_H 12
#define RIGHTPANEL_COLORPLANSTAB_H 150
#define RIGHTPANEL_ADJUSTSTYLETAB_H 150
#define RIGHTPANEL_LEVELCHANELPATHTAB_H 300

RightPanel::RightPanel(QWidget *parent) : QWidget(parent)
{

}

void RightPanel::setup()
{
    int x = RIGHTPANEL_TAB_MARGIN,
        y = RIGHTPANEL_TAB_MARGIN,
        w = this->size().width()+1,
        h = RIGHTPANEL_HEADER_H;

    //header
    header = new QLabel(this);
    header->setGeometry(x, y , w, h);
    header->setStyleSheet(qssHeader);

    qDebug() << "RightPanel::size():" << size() << ",parent.size():" << ((QWidget *)parent())->size();
    colorPlansTab = new ColorPlansTab(this);
    y = y + RIGHTPANEL_HEADER_H + 1;
    h = RIGHTPANEL_COLORPLANSTAB_H;
    colorPlansTab->setGeometry(x, y, w, h);
    colorPlansTab->setup();

    adjustStyleTab = new AdjustStyleTab(this);
    y = y + RIGHTPANEL_COLORPLANSTAB_H + RIGHTPANEL_TAB_MARGIN_T;
    h = RIGHTPANEL_ADJUSTSTYLETAB_H;
    adjustStyleTab->setGeometry(x, y, w, h);
    adjustStyleTab->setup();

    layerChanelPathTab = new LayerChanelPathTab(this);
    y = y + RIGHTPANEL_ADJUSTSTYLETAB_H + RIGHTPANEL_TAB_MARGIN_T;
    h = RIGHTPANEL_LEVELCHANELPATHTAB_H;
    layerChanelPathTab->setGeometry(x, y, w, h);
    layerChanelPathTab->setup();
}
