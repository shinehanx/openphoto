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
    mainSplitter = new MainFrameSplitter(this);
    qDebug() << "MainWindow::size()::width:" << size().width() << ",height:" << size().height();
    qDebug() << "MainWindow::geometry()::width:" << geometry().width() << ",height:" << geometry().height();
    mainSplitter->setGeometry(0, 75, geometry().width(), geometry().height());
    mainSplitter->setup();
}
