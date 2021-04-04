#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QDebug>
#include <QIcon>
#include <QPixmap>

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
     QMessageBox::StandardButton reply=QMessageBox::information(this,"NANDITHA 212218104117","THIS IS AN INFORMATION BOX");
}


void MainWindow::on_pushButton_2_clicked()
{

    QMessageBox::StandardButton reply=QMessageBox::question(this,"NANDITHA","Do you like Apples",QMessageBox::Yes | QMessageBox::No);
    if(reply==QMessageBox::Yes)
    {
      QMessageBox::StandardButton reply=QMessageBox::question(this,"NANDITHA","Yes");
      qDebug()<<"yes";
    }
    else
    {
        QMessageBox::StandardButton reply=QMessageBox::question(this,"NANDITHA","No");
        QApplication::quit();
    }
}


void MainWindow::on_pushButton_3_clicked()
{
    QMessageBox::StandardButton reply=QMessageBox::question(this,"Custom message","This is a custom message",QMessageBox::Yes | QMessageBox::YesToAll | QMessageBox::No | QMessageBox::NoToAll);
    if(reply==QMessageBox::Yes)
    {
        qDebug()<<"Nothing is Displayed";
        QApplication::quit();
    }
    else if(reply==QMessageBox::YesToAll)
     {
        QMessageBox::StandardButton reply=QMessageBox::warning(this,"Display message","Display the message with warning as Yes To All");
    }
    else if(reply==QMessageBox::No)
     {
        qDebug()<<"Nothing is Displayed";
        QApplication::quit();
    }
    else if(reply==QMessageBox::NoToAll)
     {
        QMessageBox::StandardButton reply=QMessageBox::warning(this,"No Message Display","Don't Display the message with warning as Yes To All");
    }
}



void MainWindow::on_pushButton_4_clicked()
{
    QMessageBox::StandardButton reply=QMessageBox::warning(this,"Critical message","This is an warning message");
}

void MainWindow::on_pushButton_5_toggled(bool checked)
{

    if(checked)
    {
        qDebug()<<"Button Checked--ON--";
        ui->pushButton_5->setIcon(QIcon("C:\nanditha\QtButtonOn-nanditha.jpg"));
        ui->pushButton_5->setIconSize(QSize(110,110));
    }
    else
    {
        qDebug()<<"Button Checked--OFF--";
         ui->pushButton_5->setIconSize(QSize(150,150));
         ui->pushButton_5->setIcon(QIcon("C:\nanditha\QtButtonOff-nanditha.jpg"));

    }
}
