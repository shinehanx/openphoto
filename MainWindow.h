#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QToolBar>
#include <QToolButton>
#include <QSplitter>
#include <QLabel>
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
    QToolBar *controlToolbar = nullptr;

    QAction * moveAct = nullptr;
    QToolButton *moveBtn = nullptr;
    QToolButton *selectBtn = nullptr;

    QLabel * ctrlBarHeader = nullptr;
    QLabel * ctrlBarHeaderSplit = nullptr;
    QSplitter *mainSplitter = nullptr;
    QSplitter *rightSplitter = nullptr;

    void createActions();
    void createMenus();
    void createToolbars();
    void createSplitters();


    QString qssToolBar = "QToolBar { background-color:#525252;} \
            QToolBar {margin-top:1px;padding-top:2px; border-top: 2px solid #666666;border-bottom: 1px solid #666666;} \
            QToolButton { background-color: transparent; border: 1px;}";

    QString qssCtrlBar = "QToolBar { background-color:#525252;\
              spacing: 0px;\
              margin-top:2px;\
              border: 2px solid #525252;\
              padding: 2px solid #585858;} \
            QToolButton { width:64px;\
              height:48px;\
              background-color: transparent; \
              border: 0px; }\
            QToolButton:hover{\
              border:2px solid #262827;\
              border-radius: 6px;\
              background-color:#3e3e3e;\
            }";

    QString qssSplit = "QSplitter::handle:horizontal {\
            margin-left:1px solid #262827;\
            margin-right:1px solid #262827;\
            background-color:#3f3f3f;\
            background-repeat:no-repeat;\
            background-size:100% 100%;\
            width: 1px;}";
};
#endif // MAINWINDOW_H
