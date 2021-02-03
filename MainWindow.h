#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QToolBar>
#include <QToolButton>
#include <QSplitter>
#include <QLabel>
#include "ui/MainFrameSplitter.h"
#include "ui/menu/MainMenuToolbar.h"
#include "ui/widget/ImageView.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

    MainMenuToolbar * mainMenuToolbar = nullptr;

    //文件菜单
    QAction *newAct = nullptr;
    QAction *openAct = nullptr;
    QAction *browseInBridgeAct = nullptr;
    QAction *browseInMinBridgeAct = nullptr;
    QAction *openAsAct = nullptr;
    QAction *openAsIntelliAct = nullptr;
    QAction *curOpenFilesAct = nullptr;
    QAction *closeAct = nullptr;
    QAction *closeAllAct = nullptr;
    QAction *closeToBridgeAct = nullptr;
    QAction *saveAct = nullptr;
    QAction *saveAsAct = nullptr;
    QAction *checkInAct = nullptr;
    QAction *saveAsWebAct = nullptr;

    QMenu *fileMenu = nullptr;
    QToolBar *selectToolbar = nullptr;



    QAction * moveAct = nullptr;
    QToolButton *moveBtn = nullptr;

    MainFrameSplitter *mainSplitter = nullptr;
    QSplitter *rightSplitter = nullptr;

    void createActions();
    void createMenus();
    void createToolbars();
    void createSplitters();

    QString qssToolBar = "QToolBar { background-color:#525252;} \
            QToolBar {border-top: 1px solid #666666;border-bottom: 1px solid #666666;} \
            QToolButton { background-color: transparent; border: 1px;}";


};
#endif // MAINWINDOW_H
