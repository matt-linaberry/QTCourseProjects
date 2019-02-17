#include "widget.h"
#include "ui_widget.h"
#include "infodialog.h"
#include <QDebug>

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

void Widget::on_provideInfoButton_clicked()
{
    InfoDialog * dialog = new InfoDialog(this);
//    int ret = dialog->exec();

//    if (ret == QDialog::Accepted) {
//        QString position = dialog->getPosition();
//        QString os = dialog->getFavoriteOs();
//        qDebug() << "Helllllllo accepted!";
//        ui->infoLabel->setText("Position: " + dialog->getPosition() + " and os is " + dialog->getFavoriteOs());

//    } else {
//        qDebug() << "Helllo rejecteddddd!";
//    }

    // show it non-modal here!
    connect(dialog, &InfoDialog::accepted, [=]() {
                QString position = dialog->getPosition();
                QString os = dialog->getFavoriteOs();
                qDebug() << "Helllllllo accepted!";
                ui->infoLabel->setText("Position: " + dialog->getPosition() + " and os is " + dialog->getFavoriteOs());
    });

    connect(dialog, &InfoDialog::rejected, [=]() {
        qDebug() << "Helllo rejecteddddd!";
    });

    dialog->show();
    dialog->raise();
    dialog->activateWindow();
}
