#include "widget.h"
#include "ui_widget.h"
#include <QPushButton>
#include <QDebug>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    // clicked signal
    QPushButton * button = new QPushButton("Button1", this);
    QFont buttonFont ("Times", 20, QFont::Bold);
    button->setMinimumSize(200,100);
    button->setFont(buttonFont);
    connect(button, &QPushButton::clicked, [=](){
       qDebug() << "Button clicked";
    });

    QPushButton * button2 = new QPushButton("Button2", this);
    QFont button2Font ("Times", 20, QFont::Bold);
    button2->setMinimumSize(200,100);
    button2->move(205,0);
    button->setFont(button2Font);
    connect(button2, &QPushButton::pressed, [=](){
       qDebug() << "Button pressed";
    });
    connect(button2, &QPushButton::released, [=](){
       qDebug() << "Button released";
    });
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}
