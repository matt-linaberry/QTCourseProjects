#include "widget.h"
#include "ui_widget.h"
#include <QDebug>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->listWidget->setSelectionMode(QAbstractItemView::MultiSelection);

}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_addItemButton_clicked()
{
    ui->listWidget->addItem("My Item");
}

void Widget::on_deleteItemButton_clicked()
{
    ui->listWidget->takeItem(ui->listWidget->currentRow());
}

void Widget::on_selectedItemButtons_clicked()
{
    // get the list of selected items
    QList<QListWidgetItem *> list = ui->listWidget->selectedItems();
    // loop through em
    for (int i = 0; i < list.count(); i++) {
        qDebug() << "Selected item : " << list.at(i)->text() << " at row " << ui->listWidget->row(list.at(i));
    }
}
