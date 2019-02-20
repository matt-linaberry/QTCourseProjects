/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QPushButton *clickMeButton;
    QLabel *textLabel;
    QLabel *codeLabel;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(528, 405);
        verticalLayout_2 = new QVBoxLayout(Widget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        clickMeButton = new QPushButton(Widget);
        clickMeButton->setObjectName(QString::fromUtf8("clickMeButton"));

        verticalLayout->addWidget(clickMeButton);

        textLabel = new QLabel(Widget);
        textLabel->setObjectName(QString::fromUtf8("textLabel"));
        QFont font;
        font.setPointSize(24);
        textLabel->setFont(font);
        textLabel->setStyleSheet(QString::fromUtf8("background-color: rgb(114, 159, 207);\n"
"color: rgb(245, 121, 0);"));

        verticalLayout->addWidget(textLabel);

        codeLabel = new QLabel(Widget);
        codeLabel->setObjectName(QString::fromUtf8("codeLabel"));
        codeLabel->setFont(font);

        verticalLayout->addWidget(codeLabel);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        clickMeButton->setText(QApplication::translate("Widget", "Click Me", nullptr));
        textLabel->setText(QApplication::translate("Widget", "UIText", nullptr));
        codeLabel->setText(QApplication::translate("Widget", "CodeText", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
