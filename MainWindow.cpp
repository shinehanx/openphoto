#include "MainWindow.h"
#include "ui_MainWindow.h"
#include <QDebug>
#include <QDesktopWidget>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QRect desktopRect = QApplication::desktop()->availableGeometry();
    this->setGeometry(desktopRect);
    this->setStyleSheet("background-color:#262827;");

    createActions();
    createMenus();
    createToolbars();
    createSplitters();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::createActions()
{
    newAct = new QAction(tr("新建"),this);
    newAct->setShortcut(tr("Ctrl+N"));



    moveBtn = new QToolButton(this);
    moveBtn->setIconSize(QSize(48,48));
    moveBtn->setIcon(QIcon(":/rc/images/toolbar/move.png"));

}

void MainWindow::createMenus()
{
    fileMenu = menuBar()->addMenu(tr("文件"));
    fileMenu->addAction(newAct);
}

void MainWindow::createToolbars()
{
    selectToolbar = new QToolBar(tr("移动"),this);
    selectToolbar->setFixedHeight(52);

    selectToolbar->setStyleSheet(qssToolBar);
    selectToolbar->addAction(moveAct);
    selectToolbar->addSeparator();
    selectToolbar->addWidget(moveBtn);

    addToolBar(selectToolbar);
}

void MainWindow::createSplitters()
{
    mainSplitter = new DrawToolPanel(this);
    qDebug() << "width:" << size().width() << ",height:" << size().height();

    mainSplitter->show();
}
