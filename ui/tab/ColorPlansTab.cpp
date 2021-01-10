#include "ColorPlansTab.h"
#include <QLabel>

ColorPlansTab::ColorPlansTab(QWidget * parent) : QTabWidget(parent)
{

}

void ColorPlansTab::setup()
{
    setStyleSheet(qssTab);
    colorWidget = new ChangeFrontBackColorWidget(this);
    colorWidget->setFixedSize(60, 70);
    colorWidget->setup();

    plansWidget = new QLabel(this);
    plansWidget->setFixedSize(250, 300);
    plansWidget->setText("plansWidget");

    addTab(colorWidget, "颜色");
    addTab(plansWidget, "色板");
}
