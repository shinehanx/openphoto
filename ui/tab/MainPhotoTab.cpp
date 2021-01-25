#include "MainPhotoTab.h"

#define DEFAULT_PHOTO_WIDTH 400
#define DEFAULT_PHOTO_HEIGHT 300
MainPhotoTab::MainPhotoTab(QWidget *parent) : QTabWidget(parent)
{

}

void MainPhotoTab::setup()
{
    setStyleSheet(qssTab);
    setDocumentMode(true); //去掉右边和底部边框的白边
    QRect rect = geometry();
    int x = (rect.width() - DEFAULT_PHOTO_WIDTH) / 2, y = (rect.height() - DEFAULT_PHOTO_HEIGHT) / 2,
        w = DEFAULT_PHOTO_WIDTH, h = DEFAULT_PHOTO_HEIGHT;
    photoView = new QLabel(this);
    photoView->setStyleSheet("background-color:#282828;");
    photoView->setGeometry(x, y, w, h);
    addTab(photoView, "hello-world.png @ 100%(RGB8#)");
}

