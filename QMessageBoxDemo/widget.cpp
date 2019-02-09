#include "widget.h"
#include <QPushButton>
#include <QMessageBox>
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    QPushButton * button = new QPushButton(this);
    button->setText("Click Me!");

    button->move(200,200);
    connect(button, &QPushButton::clicked,[=](){

        // the harder way
//        QMessageBox message;
//        message.setMinimumSize(300,200);
//        message.setWindowTitle("message title1");
//        message.setText("Something happened here!");
//        message.setInformativeText("Here are some infomrative texts!");
//        message.setIcon(QMessageBox::Critical);
//        message.setStandardButtons(QMessageBox::Ok | QMessageBox::Cancel);
//        message.setDefaultButton(QMessageBox::Cancel);
//        int ret = message.exec();

        //int ret = QMessageBox::critical(this, "Message Title", "Something is wrong! Wanna do something about it?", QMessageBox::Ok | QMessageBox::Cancel);

        //int ret = QMessageBox::information(this, "Info message title", "Somethign is info!", QMessageBox::Ok | QMessageBox::Cancel);

        //int ret = QMessageBox::question(this, "Question message title", "Somethign is Question?!?!?!", QMessageBox::Ok | QMessageBox::Cancel);

        int ret = QMessageBox::warning(this, "Warning message title", "Somethign is WARNING!!!!?!?!?!", QMessageBox::Ok | QMessageBox::Cancel);
        if ( ret == QMessageBox::Ok) {
            qDebug() << "User clicked on OK";
        }
        if (ret == QMessageBox::Cancel) {
            qDebug() << "User clicked on cancel";
        }
    });
}

Widget::~Widget()
{

}
