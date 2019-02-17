#include "widget.h"
#include "ui_widget.h"
#include <QButtonGroup>
#include <QDebug>
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    QButtonGroup * buttonGroup = new QButtonGroup(this);
    buttonGroup->addButton(ui->windowsCheckbox);
    buttonGroup->addButton(ui->macCheckbox);
    buttonGroup->addButton(ui->linuxCheckbox);
    buttonGroup->setExclusive(true);



}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_windowsCheckbox_toggled(bool checked)
{
    if (checked) {
        qDebug() << "The windows checkbox is checked.";
    } else {
        qDebug() << "The windows checkbox is not checked";
    }
}

void Widget::on_beerCheckbox_toggled(bool checked)
{
    if (checked) {
        qDebug() << "The beer is checked.";
    } else {
        qDebug() << "The beer is not checked";
    }
}

void Widget::on_aRadioButton_toggled(bool checked)
{
    if (checked) {
        qDebug() << "The a radio button is on";

    } else {
        qDebug() << "The radio button is off";
   }
}

void Widget::on_pushButton_clicked()
{
    if(ui->windowsCheckbox->isChecked()) {
        qDebug() << "Windows is checked";
    }
    else {
        qDebug() << "Windows is not checked";
    }
}

void Widget::on_pushButton_2_clicked()
{
    if (ui->windowsCheckbox->isChecked()) {
        ui->windowsCheckbox->setChecked(false);
    } else {
        ui->windowsCheckbox->setChecked (true);
    }

    if (ui->beerCheckbox->isChecked()) {
        ui->beerCheckbox->setChecked(false);
    } else {
        ui->beerCheckbox->setChecked(true);
    }
}
