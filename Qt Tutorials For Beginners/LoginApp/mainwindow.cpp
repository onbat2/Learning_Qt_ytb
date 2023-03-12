    #include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

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


void MainWindow::on_Login_clicked()
{
    QString username = ui -> lineEdit_username -> text();
    QString password = ui -> lineEdit_password -> text();

    if(username == "AnhSon" && password == "Mr.JellyFish" ){
        QMessageBox::information(this,"Login","UserName and Password is correct");
        //ui -> statusBar -> showMessage("UserName and Password is correct")
    }else{
        QMessageBox::warning(this,"Login","UserName and password is not correct");
        //ui -> statusBar -> showMessage("UserName and Password is not correct")
    }
}

