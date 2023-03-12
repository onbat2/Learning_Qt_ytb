#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->comboBox->addItem("Duke 's waifu");
    ui->comboBox->addItem(QIcon(":/img/Venti.jpg"),"Venti");
    ui->comboBox->addItem(QIcon(":/img/Yae.jpeg"),"Yae");
    //actrually not Raiden
    ui->comboBox->addItem(QIcon(":/img/Ayaka.webp"),"Ayaka");
    //actrually not Ayato

}

MainWindow::~MainWindow()
{
    delete ui;
}

