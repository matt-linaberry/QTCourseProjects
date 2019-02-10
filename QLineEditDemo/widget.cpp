#include "widget.h"
#include <QPushButton>
#include <QLabel>
#include <QLineEdit>
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    // First Name
    QLabel * firstNameLabel = new QLabel("First Name", this);
    firstNameLabel->setMinimumSize(70, 50);
    firstNameLabel->move(10,10);

    QLineEdit * firstNameLineEdit = new QLineEdit(this);
    firstNameLineEdit->setMinimumSize(200,50);
    firstNameLineEdit->move(100,10);
    // last name
    QLabel * lastNameLabel = new QLabel("Last Name", this);
    lastNameLabel->setMinimumSize(70, 50);
    lastNameLabel->move(10,70);

    QLineEdit * lastNameLineEdit = new QLineEdit(this);
    lastNameLineEdit->setMinimumSize(200,50);
    lastNameLineEdit->move(100,70);

    // city
    QLabel * cityNameLabel = new QLabel("City", this);
    cityNameLabel->setMinimumSize(70, 50);
    cityNameLabel->move(10,130);

    QLineEdit * cityNameLineEdit = new QLineEdit(this);
    cityNameLineEdit->setMinimumSize(200,50);
    cityNameLineEdit->move(100,130);

    // now add the button
    QFont buttonFont("Times", 20, QFont::Bold);
    QPushButton * button = new QPushButton("Grab the datas!", this);
    button->setFont(buttonFont);
    button->move(80, 190);

    connect(button, &QPushButton::clicked, [=](){
        QString firstName = firstNameLineEdit->text();
        QString lastName = lastNameLineEdit->text();
        QString cityName = cityNameLineEdit->text();



        if (!firstName.isEmpty() && !lastName.isEmpty() && !cityName.isEmpty()) {
            qDebug() << "first name: " << firstName;
            qDebug() << "last name: " << lastName;
            qDebug() << "city name: " << cityName;
        } else {
            // show an error!
            qDebug() << "whoops! you didn't fill it all out!!!";
        }

    });

    // respond to signals from QLineEdit
    // cursorPositionChanged
//    connect(firstNameLineEdit, &QLineEdit::cursorPositionChanged, [=](){
//        qDebug() << "the current pos: " << firstNameLineEdit->cursorPosition();
//    });
    // when the cursor leaves
//        connect(firstNameLineEdit, &QLineEdit::editingFinished, [=](){
//            qDebug() << "Editing finished!" ;
//        });

//        connect(firstNameLineEdit, &QLineEdit::returnPressed, [=](){
//            qDebug() << "Return pressed";
//        });

//            connect(firstNameLineEdit, &QLineEdit::selectionChanged, [=](){
//                qDebug() << "selection changed";
//            });
//    connect(firstNameLineEdit, &QLineEdit::textChanged, [=](){
//        qDebug() << "text changed to " << firstNameLineEdit->text();
//    });

    connect(firstNameLineEdit, &QLineEdit::textEdited, [=](){
        qDebug() << "text edited to " << firstNameLineEdit->text();
    });

    // change text programmatically
    //lastNameLineEdit->setText("Say your first name, first!");

    // hint text too!
    firstNameLineEdit->setPlaceholderText("Enter your first name here");
}

Widget::~Widget()
{

}
