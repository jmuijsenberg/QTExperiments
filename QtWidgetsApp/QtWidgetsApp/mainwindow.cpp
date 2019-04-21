#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mydialog.h"
#include <QMessageBox>
#include "QDebug"

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

void MainWindow::on_pushButton_3_clicked()
{
    QMessageBox::aboutQt(this);
}

void MainWindow::on_pushButton_2_clicked()
{
    if (QMessageBox::question(this, "Title", "Question?") == QMessageBox::StandardButton::Yes)
    {
        qDebug() << "Yes";
    }
}

void MainWindow::on_pushButton_4_clicked()
{
    ui->pushButton_3->setText("clicked");
}

void MainWindow::on_pushButton_clicked()
{
    MyDialog* dia = new MyDialog(this);
    dia->setModal(true);
    dia->exec();
}
