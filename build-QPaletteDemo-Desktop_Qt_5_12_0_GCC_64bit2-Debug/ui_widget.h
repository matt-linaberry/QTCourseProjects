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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *activeButton;
    QPushButton *disabledButton;
    QLabel *label;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(400, 300);
        activeButton = new QPushButton(Widget);
        activeButton->setObjectName(QString::fromUtf8("activeButton"));
        activeButton->setGeometry(QRect(60, 60, 89, 25));
        disabledButton = new QPushButton(Widget);
        disabledButton->setObjectName(QString::fromUtf8("disabledButton"));
        disabledButton->setEnabled(false);
        disabledButton->setGeometry(QRect(220, 60, 89, 25));
        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 160, 251, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Sahadeva"));
        font.setPointSize(20);
        label->setFont(font);
        label->setAutoFillBackground(true);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        activeButton->setText(QApplication::translate("Widget", "Active", nullptr));
        disabledButton->setText(QApplication::translate("Widget", "Disabled", nullptr));
        label->setText(QApplication::translate("Widget", "My Label", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
