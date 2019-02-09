#include "widget.h"
#include "ui_widget.h"
#include <QDebug>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    // string notation for signal
   // connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(changeText()));

    // functor notation -- regular slots
    //connect(ui->pushButton, &QPushButton::clicked, this, &Widget::changeText);

    // functor notation - lambdas!
    connect(ui->pushButton, &QPushButton::clicked, [=](){
        ui->label->setText("Lambda hello!");
    });
}

Widget::~Widget()
{
    delete ui;
}

void Widget::changeText()
{
    qDebug() << "User clicked on the button!" << endl;
    ui->label->setText("HAY THERE!");
}
