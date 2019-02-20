#include "widget.h"
#include "ui_widget.h"
#include <QDebug>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    // retrieve the palette
    QPalette palette = ui->label->palette();
    // modify the palette
    palette.setColor(QPalette::Window, Qt::blue);
    palette.setColor(QPalette::WindowText, Qt::red);

    // reset the palette to the widget

    ui->label->setPalette(palette);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_activeButton_clicked()
{
    QPalette::ColorGroup activeButtonColorGroup = ui->activeButton->palette().currentColorGroup();
    QPalette::ColorGroup disabledButtonColorGroup = ui->disabledButton->palette().currentColorGroup();
    qDebug() << "active group: " << activeButtonColorGroup;
    qDebug() << "disabled group: " << disabledButtonColorGroup;
}
