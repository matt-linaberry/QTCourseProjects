#include "widget.h"
#include "ui_widget.h"
#include <QFileDialog>
#include <QDebug>

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

void Widget::on_pushButton_clicked()
{
//    QString dir = QFileDialog::getExistingDirectory(this, tr("Open Directory"), "/home", QFileDialog::ShowDirsOnly | QFileDialog::DontResolveSymlinks);
//    qDebug() << "The directory is " << dir;
//    QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"), "/home", tr("Images (*.png, *.xpm, *.jpg"));

//    qDebug() << "You chose " << fileName;

//    QStringList files = QFileDialog::getOpenFileNames(this, "select one or more files to open", "/home", "Images (*.png, *.xpm, *.jpg);;Text files (*.txt)");
//    qDebug() << "You chose: " << files;
    QString fileName = QFileDialog::getSaveFileName(this, tr("Save File"),
                                 "/home/jana/untitled.png",
                                 tr("Images (*.png *.xpm *.jpg)"));
    qDebug() << "You chose: " << fileName;
}
