#include "widget.h"
#include <QTextEdit>
#include <QPushButton>
#include <QLabel>
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    QFont labelFont("Times", 10, QFont::Bold);
    QLabel * mLabel = new QLabel("This is my text", this);
    mLabel->setFont(labelFont);
    mLabel->move(100,25);

    QTextEdit * textEdit = new QTextEdit(this);
    textEdit->move(70, 55);

    // text changed
//    connect(textEdit, &QTextEdit::textChanged, [=](){
//        qDebug() << "Text changed!";
//    });

    QPushButton * copyButton = new QPushButton("Copy", this);
    copyButton->setMinimumSize(50,25);
    copyButton->move(10,250);
    connect(copyButton, &QPushButton::clicked, [=]() {
        textEdit->copy();
    });
    QPushButton * cutButton = new QPushButton("Cut", this);
    cutButton->setMinimumSize(50,25);
    cutButton->move(110,250);
    connect(cutButton, &QPushButton::clicked, [=]() {
        textEdit->cut();
    });
    QPushButton * pasteButton = new QPushButton("Paste", this);
    pasteButton->setMinimumSize(50,25);
    pasteButton->move(210,250);
    connect(pasteButton, &QPushButton::clicked, [=]() {
        textEdit->paste();
    });

    // undo and redo

    QPushButton * undoButton = new QPushButton("Undo", this);
    undoButton->setMinimumSize(50,25);
    undoButton->move(10,280);
    connect(undoButton, &QPushButton::clicked, [=]() {
        textEdit->undo();
    });

    QPushButton * redoButton = new QPushButton("Redo", this);
    redoButton->setMinimumSize(50,25);
    redoButton->move(110,280);
    connect(redoButton, &QPushButton::clicked, [=]() {
        textEdit->redo();
    });

    QPushButton * plainTextButton = new QPushButton("Plain Text", this);
    plainTextButton->setMinimumSize(100,25);
    plainTextButton->move(10,310);
    connect(plainTextButton, &QPushButton::clicked, [=]() {
        textEdit->setPlainText("loreum ipsum fkhfgklsdafhgfdkghdfjkghaskljfekjvhgrsvhrkjh esfhirauf airlf ajsgfljs hfas f hfjkfgdfhgsdfkjl  gsdfhi");
    });
    QPushButton * htmlTextButton = new QPushButton("html", this);
    htmlTextButton->setMinimumSize(100,25);
    htmlTextButton->move(120,310);

    connect(htmlTextButton, &QPushButton::clicked, [=]() {
        textEdit->setHtml("<h1>This is gonna work</h1>");
    });

    // Grab text and html
    QPushButton * grabTextButton = new QPushButton("Grab the texts!", this);
    grabTextButton->setMinimumSize(100,25);
    grabTextButton->move(10,340);
    connect(grabTextButton, &QPushButton::clicked, [=]() {
        qDebug() << "The plain text is " << textEdit->toPlainText();
    });

    QPushButton * grabHtmlButton = new QPushButton("Grab the htmls!", this);
    grabHtmlButton->setMinimumSize(100,25);
    grabHtmlButton->move(120,340);
    connect(grabHtmlButton, &QPushButton::clicked, [=]() {
        qDebug() << "The plain text is " << textEdit->toHtml();
    });
    setFixedSize(400,400);
}

Widget::~Widget()
{

}
