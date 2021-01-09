#include "ColorPlansTab.h"
#include <QLabel>

ColorPlansTab::ColorPlansTab(QWidget * parent) : QTabWidget(parent)
{

}

void ColorPlansTab::setup()
{
    setStyleSheet(qssTab);
    colorWidget = new QLabel(this);
    colorWidget->setFixedSize(250, 300);
    colorWidget->setText("colorWidget");

    plansWidget = new QLabel(this);
    plansWidget->setFixedSize(250, 300);
    plansWidget->setText("plansWidget");

    addTab(colorWidget, "颜色");
    addTab(plansWidget, "色板");
}
