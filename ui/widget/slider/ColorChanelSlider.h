#ifndef COLORCHANELSLIDER_H
#define COLORCHANELSLIDER_H

#include <QWidget>
#include <QSlider>

/**
 * @brief The ColorChanelSlider class
 * 颜色滑块
 */
class ColorChanelSlider : public QSlider
{
    Q_OBJECT
private:
    const QString qssSlider = "QSlider::handle:horizontal {border-image: url(:/rc/images/widget/slider/slider-handle.png);width: 16px;} \
                               QSlider::groove:horizontal {background-color: transparent;} \
                               QSlider::sub-page:horizontal {background-color: #535353;} \
                               QSlider::add-page:horizontal {background-color: #535353;}";
public:
    explicit ColorChanelSlider(QWidget *parent = nullptr);
    void setup();
signals:

};

#endif // COLORCHANELSLIDER_H
