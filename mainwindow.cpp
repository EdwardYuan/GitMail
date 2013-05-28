#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "sendmsgdlg.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_menuNewMsg_triggered()
{
    SendMsgDlg sendmsgdlg;
}
