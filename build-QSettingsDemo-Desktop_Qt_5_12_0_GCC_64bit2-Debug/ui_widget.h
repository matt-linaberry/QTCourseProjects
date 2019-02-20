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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QPushButton *button1;
    QPushButton *button2;
    QPushButton *button3;
    QPushButton *button4;
    QPushButton *button5;
    QPushButton *button6;
    QPushButton *button7;
    QPushButton *button8;
    QPushButton *button9;
    QPushButton *loadPushButton;
    QPushButton *savePushButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(596, 373);
        verticalLayout = new QVBoxLayout(Widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        button1 = new QPushButton(Widget);
        button1->setObjectName(QString::fromUtf8("button1"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(button1->sizePolicy().hasHeightForWidth());
        button1->setSizePolicy(sizePolicy);

        gridLayout->addWidget(button1, 0, 0, 1, 1);

        button2 = new QPushButton(Widget);
        button2->setObjectName(QString::fromUtf8("button2"));
        sizePolicy.setHeightForWidth(button2->sizePolicy().hasHeightForWidth());
        button2->setSizePolicy(sizePolicy);

        gridLayout->addWidget(button2, 0, 1, 1, 1);

        button3 = new QPushButton(Widget);
        button3->setObjectName(QString::fromUtf8("button3"));
        sizePolicy.setHeightForWidth(button3->sizePolicy().hasHeightForWidth());
        button3->setSizePolicy(sizePolicy);

        gridLayout->addWidget(button3, 0, 2, 1, 1);

        button4 = new QPushButton(Widget);
        button4->setObjectName(QString::fromUtf8("button4"));
        sizePolicy.setHeightForWidth(button4->sizePolicy().hasHeightForWidth());
        button4->setSizePolicy(sizePolicy);

        gridLayout->addWidget(button4, 1, 0, 1, 1);

        button5 = new QPushButton(Widget);
        button5->setObjectName(QString::fromUtf8("button5"));
        sizePolicy.setHeightForWidth(button5->sizePolicy().hasHeightForWidth());
        button5->setSizePolicy(sizePolicy);

        gridLayout->addWidget(button5, 1, 1, 1, 1);

        button6 = new QPushButton(Widget);
        button6->setObjectName(QString::fromUtf8("button6"));
        sizePolicy.setHeightForWidth(button6->sizePolicy().hasHeightForWidth());
        button6->setSizePolicy(sizePolicy);

        gridLayout->addWidget(button6, 1, 2, 1, 1);

        button7 = new QPushButton(Widget);
        button7->setObjectName(QString::fromUtf8("button7"));
        sizePolicy.setHeightForWidth(button7->sizePolicy().hasHeightForWidth());
        button7->setSizePolicy(sizePolicy);

        gridLayout->addWidget(button7, 2, 0, 1, 1);

        button8 = new QPushButton(Widget);
        button8->setObjectName(QString::fromUtf8("button8"));
        sizePolicy.setHeightForWidth(button8->sizePolicy().hasHeightForWidth());
        button8->setSizePolicy(sizePolicy);

        gridLayout->addWidget(button8, 2, 1, 1, 1);

        button9 = new QPushButton(Widget);
        button9->setObjectName(QString::fromUtf8("button9"));
        sizePolicy.setHeightForWidth(button9->sizePolicy().hasHeightForWidth());
        button9->setSizePolicy(sizePolicy);

        gridLayout->addWidget(button9, 2, 2, 1, 1);


        verticalLayout->addLayout(gridLayout);

        loadPushButton = new QPushButton(Widget);
        loadPushButton->setObjectName(QString::fromUtf8("loadPushButton"));

        verticalLayout->addWidget(loadPushButton);

        savePushButton = new QPushButton(Widget);
        savePushButton->setObjectName(QString::fromUtf8("savePushButton"));

        verticalLayout->addWidget(savePushButton);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        button1->setText(QApplication::translate("Widget", "One", nullptr));
        button2->setText(QApplication::translate("Widget", "Two", nullptr));
        button3->setText(QApplication::translate("Widget", "Three", nullptr));
        button4->setText(QApplication::translate("Widget", "Four", nullptr));
        button5->setText(QApplication::translate("Widget", "Five", nullptr));
        button6->setText(QApplication::translate("Widget", "Six", nullptr));
        button7->setText(QApplication::translate("Widget", "Seven", nullptr));
        button8->setText(QApplication::translate("Widget", "Eight", nullptr));
        button9->setText(QApplication::translate("Widget", "Nine", nullptr));
        loadPushButton->setText(QApplication::translate("Widget", "Load Colors", nullptr));
        savePushButton->setText(QApplication::translate("Widget", "Save Colors", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
