#include "MainWindow.h"
#include "ui_MainWindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->showMaximized();
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

    moveAct = new QAction(tr("新建"),this);
    moveAct->setIcon(QIcon(":/rc/images/toolbar/move.png"));
    moveAct->setToolTip(tr("移动图像"));

    moveBtn = new QToolButton(this);
    moveBtn->setIconSize(QSize(48,48));
    moveBtn->setIcon(QIcon(":/rc/images/toolbar/move.png"));

    ctrlBarHeader = new QLabel(this);
    ctrlBarHeader->setFixedSize(72,24);
    ctrlBarHeader->setStyleSheet("background-color:#383838;border-top: 2px solid #434343;border-right: 2px solid #434343;border-bottom: 2px solid 434343;");
    ctrlBarHeaderSplit = new QLabel(this);
    ctrlBarHeaderSplit->setFixedSize(72,2);
    ctrlBarHeaderSplit->setStyleSheet("background-color:#262827;border:0px;margin-top:0px");

    selectBtn = new QToolButton(this);
    selectBtn->setIconSize(QSize(48,48));
    selectBtn->setIcon(QIcon(":/rc/images/ctrlbar/EllipseSel.png"));
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
    mainSplitter = new QSplitter(Qt::Horizontal, this);
    mainSplitter->setOpaqueResize(true);
    mainSplitter->setHandleWidth(5);
    mainSplitter->setStretchFactor(0,1);

    controlToolbar = new QToolBar(tr("控制栏"), mainSplitter);
    controlToolbar->setOrientation(Qt::Vertical); //垂直摆放
    controlToolbar->setStyleSheet(qssCtrlBar);
    controlToolbar->setFixedWidth(72);
    controlToolbar->addWidget(ctrlBarHeader);
    controlToolbar->addSeparator();
    controlToolbar->addAction(moveAct);
    controlToolbar->addWidget(selectBtn);

    rightSplitter = new QSplitter(Qt::Horizontal, mainSplitter);

    mainSplitter->setGeometry(0, 52, size().width(),size().height());
    mainSplitter->setStyleSheet(qssSplit);
    mainSplitter->show();
}
