#include "widget.h"
#include "ui_widget.h"
#include <QDebug>
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    model = new QFileSystemModel(this);
    parentIndex = model->setRootPath("/home/parallels");



}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_clicked()
{
    int rowCount = model->rowCount(parentIndex);
    qDebug() << "Row count: " << QString::number(rowCount);

    for (int i = 0; i < rowCount; i ++) {
        // get the model index for the item
        QModelIndex index = model->index(i, 0, parentIndex);
        QString data = model->data(index, Qt::DisplayRole).toString();
        qDebug() << "data item at [" << QString::number(i) << "] " << data;
    }
}
