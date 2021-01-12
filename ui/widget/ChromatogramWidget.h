#ifndef CHROMATOGRAMWIDGET_H
#define CHROMATOGRAMWIDGET_H

#include <QWidget>
#include <QLabel>

/**
 * @brief The ChromatogramWidget class
 * 色谱
 */
class ChromatogramWidget : public QWidget
{
    Q_OBJECT
private:
    const QString qssClearColor = "QLabel {border:1px solid #000000; background-color:#ffffff; background-image:url(:/rc/images/widget/red-diagonal-14.png)}";
    const QString qssChromatogram = "QLabel {border:1px solid #000000;background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0,stop:0 red,stop:0.2 blue,stop:0.5 red, stop:1 green)}";
    const QString qssWhite = "QLabel{border:1px solid #000000;background-color:#ffffff;}";
    const QString qssBlack = "QLabel{border:1px solid #000000;background-color:#000000;}";

    QLabel * clearColor = nullptr;
    QLabel * chromatogram = nullptr;
    QLabel * black = nullptr;
    QLabel * white = nullptr;
public:
    explicit ChromatogramWidget(QWidget *parent = nullptr);
    void setup();
signals:

};

#endif // CHROMATOGRAMWIDGET_H
