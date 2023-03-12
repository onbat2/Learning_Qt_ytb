#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/resources/img/LikeABoss.jpg");
    //int w = ui -> label_pic -> width();
    //int h = ui -> label_pic -> height();
    ui -> label_pic -> setPixmap(pix.scaled(400,400,Qt::KeepAspectRatio));
}

MainWindow::~MainWindow()
{
    delete ui;
}

/*Cách khác: Nhấn vào label cần chỉnh, chọn "pixmap", di chuột sang phải chọn "Choose file",
             Chọn ảnh cần tìm từ "File"
*/

