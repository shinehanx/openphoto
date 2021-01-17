#include "AdjustStyleTab.h"

AdjustStyleTab::AdjustStyleTab(QWidget *parent) : QTabWidget(parent)
{

}

void AdjustStyleTab::setup()
{
    setStyleSheet(qssTab);
    setDocumentMode(true); //去掉右边和底部边框的白边
    QRect rect = this->geometry();
    adjustPanelWidget = new AdjustPanelWidget(this);
    adjustPanelWidget->setGeometry(0,0, rect.width(), rect.height() - 20);
    adjustPanelWidget->setup();

    styleWidget = new QLabel(this);
    styleWidget->setGeometry(0,0, rect.width(), rect.height() - 20);
    //styleWidget->setup();

    addTab(adjustPanelWidget, "调整");
    addTab(styleWidget, "样式");
}
