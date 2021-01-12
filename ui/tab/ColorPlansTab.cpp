#include "ColorPlansTab.h"
#include <QLabel>

ColorPlansTab::ColorPlansTab(QWidget * parent) : QTabWidget(parent)
{

}

void ColorPlansTab::setup()
{
    setStyleSheet(qssTab);
    setDocumentMode(true); //去掉右边和底部边框的白边
    QRect rect = this->geometry();
    colorPanelWidget = new ColorPanelWidget(this);
    colorPanelWidget->setGeometry(0,0, rect.width(), rect.height() - 20);
    colorPanelWidget->setup();

    plansWidget = new QLabel(this);
    plansWidget->setFixedSize(250, 300);
    plansWidget->setText("plansWidget");

    addTab(colorPanelWidget, "颜色");
    addTab(plansWidget, "色板");
}
