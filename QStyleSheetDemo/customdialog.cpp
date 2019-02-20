#include "customdialog.h"
#include "ui_customdialog.h"

CustomDialog::CustomDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CustomDialog)
{
    ui->setupUi(this);
    // now for the specific widget.
    ui->pushButton->setStyleSheet("QPushButton {background-color: red; color: white;}");
}

CustomDialog::~CustomDialog()
{
    delete ui;
}
