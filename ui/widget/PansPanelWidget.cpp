#include "PansPanelWidget.h"
#define PANSPANELWIDGET_MARGIN 2
#define PANSPANELWIDGET_COLORVIEW_WH 13
#define PANSPANELWIDGET_COLORVIEW_ROWS 18
#define PANSPANELWIDGET_TOOLBAR_H 16
#include <sys/time.h>

PansPanelWidget::PansPanelWidget(QWidget *parent) : QLabel(parent)
{

}

void PansPanelWidget::setup()
{
    QRect rect = geometry();

    struct timeval tv;
    int r =0, g=0, b = 0;
    int n = 100;
    int x = PANSPANELWIDGET_MARGIN, y = PANSPANELWIDGET_MARGIN, w = PANSPANELWIDGET_COLORVIEW_WH, h = PANSPANELWIDGET_COLORVIEW_WH ;
    setStyleSheet(qss);
    for (int i = 1; i <= n; i++) {
        gettimeofday(&tv,NULL);
        srand(tv.tv_sec*1000000 + tv.tv_usec + r);
        r = rand() % 255;
        srand(tv.tv_sec*1000 + tv.tv_usec/1000 + r + g);
        g = rand() % 255;
        srand(tv.tv_sec + tv.tv_usec + r+ g+b);
        b = rand() % 255;
        char color[8];
        memset(color,0,sizeof(color));
        sprintf(color, "#%02x%02x%02x", r, g, b);
        QLabel * colorView = new QLabel(this);
        colorViewList.append(colorView);
        colorView->setGeometry(x, y, w, h);
        colorView->setStyleSheet(qssColorView.arg(color));

        if (i % PANSPANELWIDGET_COLORVIEW_ROWS == 0) {
            x = 2;
            y += PANSPANELWIDGET_COLORVIEW_WH;
        }else {
            x += PANSPANELWIDGET_COLORVIEW_WH;
        }

    }

    toolbar = new QToolBar(this);
    x = -1, y = rect.height() - PANSPANELWIDGET_TOOLBAR_H - PANSPANELWIDGET_MARGIN;
    w = rect.width() + 2, h = PANSPANELWIDGET_TOOLBAR_H;
    toolbar->setGeometry(x, y, w, h);
    toolbar->setOrientation(Qt::Horizontal);
    toolbar->setLayoutDirection(Qt::RightToLeft);
    toolbar->setToolButtonStyle(Qt::ToolButtonIconOnly);
    toolbar->setStyleSheet(qssToolBar);

    delPansAction = new QAction(this);
    delPansAction->setIcon(QIcon(":/rc/images/toolbar/panspanel/del-pans.png"));
    newPansAction = new QAction(this);
    newPansAction->setIcon(QIcon(":/rc/images/toolbar/panspanel/new-pans.png"));
    toolbar->addAction(delPansAction);
    toolbar->addAction(newPansAction);
}
