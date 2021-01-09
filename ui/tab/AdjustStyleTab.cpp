#include "AdjustStyleTab.h"

AdjustStyleTab::AdjustStyleTab(QWidget *parent) : QTabWidget(parent)
{

}

void AdjustStyleTab::setup()
{
    setStyleSheet(qssTab);
    adjustWidget = new QLabel(this);
    adjustWidget->setFixedSize(250, 300);
    adjustWidget->setText("colorWidget");

    styleWidget = new QLabel(this);
    styleWidget->setFixedSize(250, 300);
    styleWidget->setText("plansWidget");

    addTab(adjustWidget, "调整");
    addTab(styleWidget, "样式");
}
