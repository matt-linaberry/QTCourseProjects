#include "widget.h"
#include "ui_widget.h"
#include <stdlib.h>
#include <time.h>
#include <QDebug>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    // init the generator!
    srand (time(NULL));

    secretNumber = rand() % 10 + 1;
    qDebug() << "The secret number is " << QString::number(secretNumber) << endl;
    ui->startOverButton->setDisabled((true));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_guessButton_clicked()
{
    // capture the guessed number
    guessNumber = ui->spinBox->value();
    qDebug() << "The user put " << QString::number(guessNumber) << endl;

    if (guessNumber == secretNumber) {
        // YAY!
        ui->messageLabel->setText("YOU GOT IT !!");
        ui->guessButton->setDisabled(true);
        ui->startOverButton->setDisabled((false));
    } else {
        if (guessNumber < secretNumber) {
            //
            ui->messageLabel->setText("Go higher!");
        } else if (guessNumber > secretNumber) {
            ui->messageLabel->setText("Go Lower!");
        }
    }
}

void Widget::on_startOverButton_clicked()
{
    ui->guessButton->setDisabled(false);
    ui->messageLabel->setText("Pick a number");
    ui->startOverButton->setDisabled(true);
    ui->spinBox->setValue(1);
    secretNumber = rand() % 10 + 1;

}
