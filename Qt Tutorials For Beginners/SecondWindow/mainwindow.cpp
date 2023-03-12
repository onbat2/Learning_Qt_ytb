#include "mainwindow.h"
#include "ui_mainwindow.h"
//#include "secwindow.h"   //Cach 2

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
//    SecWindow secDialog;
//    secDialog.setModal(true);
//    secDialog.exec();
    hide();
    secDialog = new SecWindow(this);
    secDialog -> show();
}

// Cach 1 khong tuong tac duoc voi secondWindow
// Cach 2 tuong tac duoc voi secondWindow

