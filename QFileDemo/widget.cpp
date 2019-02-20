#include "widget.h"
#include "ui_widget.h"
#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include <QMessageBox>

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

void Widget::on_writeButton_clicked()
{
    // save the file to disk
    QString filename = QFileDialog::getSaveFileName(this, "Save As...");
    if (filename.isEmpty()) {
        return;
    }

    QFile file(filename);

    if (!file.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Append)) {
        return;  // get out if the file failed to open
    }

    QTextStream out(&file);
    out << ui->textEdit->toPlainText() << "\n";
    file.close();
}

void Widget::on_readButton_clicked()
{
    QString fileContents;
    QString filename = QFileDialog::getOpenFileName(this, "Open");
    if (filename.isEmpty()) {
        return ;
    }
    QFile file(filename);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        return ;
    }

    QTextStream in (&file);
    QString line = in.readLine();
    while (!line.isNull()) {
        fileContents.append(line);
        line = in.readLine();
    }
    file.close();

    ui->textEdit->clear();
    ui->textEdit->setPlainText(fileContents);
}

void Widget::on_selectButton_clicked()
{
    QString filename = QFileDialog::getOpenFileName(this, "Choose File");
    if (filename.isEmpty()) {
        return;
    }
    ui->sourceLineEdit->setText(filename);
}

void Widget::on_copyButton_clicked()
{
    QString sourceFileName = ui->sourceLineEdit->text();
    QString destFileName = ui->destinationLineEdit->text();

    if (sourceFileName.isEmpty() || destFileName.isEmpty()) {
        return;
    }

    QFile file(sourceFileName);
    if (file.copy(destFileName)) {
        QMessageBox::information(this, "Success", "Copy successful!");
    } else {
        QMessageBox::information(this, "Failure", "Copy Failed");
    }
}
