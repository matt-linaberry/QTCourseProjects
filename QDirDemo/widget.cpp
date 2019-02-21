#include "widget.h"
#include "ui_widget.h"

#include <QFile>
#include <QFileDialog>
#include<QMessageBox>
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_chooseDirButton_clicked()
{
    // open a directory
    QString filename = QFileDialog::getExistingDirectory(this, "Choose Folder");
    if (filename.isEmpty()) {
        return;
    }

    ui->lineEdit->setText(filename);
}

void Widget::on_createDirButton_clicked()
{
    QString dirPath = ui->lineEdit->text();
    if (dirPath.isEmpty()) {
        return;
    }
    QDir dir(dirPath);
    if (!dir.exists()) {
        // create it!
        if (dir.mkpath(dirPath)) {
            QMessageBox::information(this, "Message", "Directory created.");

        } else {
            QMessageBox::information(this, "Message", "Directory create failed.");
        }
    } else {
        QMessageBox::information(this, "Message", "Directory already exists.");

    }
}

void Widget::on_dirExistButton_clicked()
{
    // just check to see if it's already created
    QString dirPath = ui->lineEdit->text();
    if (dirPath.isEmpty()) {
        return;
    }
    QDir dir(dirPath);
    if (dir.exists()) {
        QMessageBox::information(this, "Message", "Directory already exists.");

    } else {
        QMessageBox::information(this, "Message", "Directory already does not exists.");

    }
}

void Widget::on_dirOrFileButton_clicked()
{
    QFileInfo fileInfo(ui->listWidget->currentItem()->text());
    if (fileInfo.isDir()) {
        QMessageBox::information(this, "Message", "This is a Dir!");
    }

    else if (fileInfo.isFile()) {
        QMessageBox::information(this, "Message", "This is a file!");

    } else {
        QMessageBox::information(this, "Message", "This is a something else!");

    }

}

void Widget::on_folderContentsButton_clicked()
{
    ui->listWidget->clear();

    // how to check if it's a file or directory
    QString dirPath = ui->lineEdit->text();
    if (dirPath.isEmpty()) {
        return;
    }

    QDir dir(dirPath);
    QList<QFileInfo> fileList = dir.entryInfoList();

    for (int i = 0; i < fileList.size(); i++) {
//        QString prefix;
//        if (fileList.at(i).isFile()) {
//            prefix = "FILE : ";
//        }
//        if (fileList.at(i).isDir()) {
//            prefix = "DIR : " ;
//        }
        ui->listWidget->addItem(fileList.at(i).absoluteFilePath());
    }
}
