#include "ColorChanelSlider.h"

ColorChanelSlider::ColorChanelSlider(QWidget *parent) : QSlider(Qt::Horizontal, parent)
{

}

void ColorChanelSlider::setup()
{
    setMinimum(0);
    setMaximum(255);
    setStyleSheet(qssSlider);
}
