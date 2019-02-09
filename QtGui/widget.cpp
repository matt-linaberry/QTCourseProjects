#include "widget.h"
#include "ui_widget.h"
#include <QDebug>
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

void Widget::on_pushButton_clicked()
{
    // when the pushButton on the widget.ui is clicked
    qDebug() << "User clicked on a button!" << endl;
    QMessageBox::information(this, "Message", "You clicked on the button!", QMessageBox::Ok);

}
