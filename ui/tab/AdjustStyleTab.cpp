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

    stylePanelWidget = new StylePanelWidget(this);
    stylePanelWidget->setGeometry(0,0, rect.width(), rect.height() - 20);
    stylePanelWidget->setup();

    addTab(adjustPanelWidget, "调整");
    addTab(stylePanelWidget, "样式");
}
