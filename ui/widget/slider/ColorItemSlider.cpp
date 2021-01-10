#include "ColorItemSlider.h"

ColorItemSlider::ColorItemSlider(QWidget *parent) : QSlider(Qt::Horizontal, parent)
{

}

void ColorItemSlider::setup()
{
    setMinimum(0);
    setMaximum(255);
    setStyleSheet(qssSlider);
}
