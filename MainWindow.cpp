#include "MainWindow.h"
#include "ui_MainWindow.h"
#include <QDebug>
#include <QDesktopWidget>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QRect rect = QApplication::desktop()->availableGeometry(-1);
    int iTitleBarHeight = style()->pixelMetric(QStyle::PM_TitleBarHeight);  // 获取标题栏高度
    rect.setHeight(rect.height() - iTitleBarHeight);
    this->setGeometry(rect);
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
    menuBar()->close();
    mainMenuToolbar = new MainMenuToolbar(this);
    mainMenuToolbar->setGeometry(0,0, geometry().width(), 28);
    mainMenuToolbar->setup();

}

void MainWindow::createToolbars()
{
    selectToolbar = new QToolBar(tr("主工具栏"),this);
    selectToolbar->setGeometry(0, 28, geometry().width(), 32);
    selectToolbar->setMovable(false);
    selectToolbar->setStyleSheet(qssToolBar);
    selectToolbar->addAction(moveAct);

    ImageView * horizontalSplit = new ImageView(this);
    horizontalSplit->show(QSize(5,26), ":/rc/images/toolbar/horizontal.png");
    selectToolbar->addWidget(horizontalSplit);
    selectToolbar->addWidget(moveBtn);

    //addToolBar(selectToolbar);
}

void MainWindow::createSplitters()
{
    mainSplitter = new MainFrameSplitter(this);
    qDebug() << "MainWindow::size()::width:" << size().width() << ",height:" << size().height();
    qDebug() << "MainWindow::geometry()::width:" << geometry().width() << ",height:" << geometry().height();
    mainSplitter->setGeometry(0, 60, geometry().width(), geometry().height());
    mainSplitter->setup();
}
