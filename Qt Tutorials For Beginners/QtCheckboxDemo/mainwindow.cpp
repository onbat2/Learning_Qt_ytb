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


void MainWindow::on_pushButton_clicked()
{
    if(ui -> checkBox -> isChecked()){
        QMessageBox::information(this,"Tinder","Yes, I love you too. Marry me.");
    }else{
        QMessageBox::information(this,"Tinder","No, but you can marry me.");
    }
}


void MainWindow::on_checkBox_stateChanged(int arg1)
{
    if(arg1){
        QMessageBox::information(this,"Tinder","Yes, I love you too. Marry me.");
    }else{
        QMessageBox::information(this,"Tinder","No, but you can marry me.");
    }
}

