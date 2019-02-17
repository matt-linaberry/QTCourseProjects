#include "widget.h"
#include "ui_widget.h"
#include <QDebug>
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    // add some planets tot he combo box
    ui->comboBox->addItem("Earth");
    ui->comboBox->addItem("Venus");

    ui->comboBox->addItem("Mercury");

    ui->comboBox->addItem("Mars");
    ui->comboBox->addItem("Pluto");
    ui->comboBox->addItem("Saturn");
    ui->comboBox->addItem("Jupiter");
    ui->comboBox->addItem("Uranus");
    // make it editable!
    ui->comboBox->setEditable(true);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_captureValueButton_clicked()
{
    qDebug() << "The currently selected item in the combo is " << ui->comboBox->currentText();
    qDebug() << "The currently selected index is " << QString::number(ui->comboBox->currentIndex());
}

void Widget::on_setValueButton_clicked()
{
    ui->comboBox->setCurrentIndex(4);
}

void Widget::on_getValuesButton_clicked()
{
    qDebug() << "The combo box currently has " << QString::number(ui->comboBox->count());
    for (int i = 0; i < ui->comboBox->count(); i++) {
        qDebug() << "Index " << QString::number(i) << " : " << ui->comboBox->itemText(i);
    }
}
