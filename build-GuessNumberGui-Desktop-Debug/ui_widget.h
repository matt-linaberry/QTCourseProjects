/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *label;
    QSpinBox *spinBox;
    QPushButton *guessButton;
    QPushButton *startOverButton;
    QLabel *messageLabel;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(477, 364);
        label = new QLabel(Widget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(140, 60, 221, 17));
        QFont font;
        font.setPointSize(16);
        label->setFont(font);
        spinBox = new QSpinBox(Widget);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(100, 110, 48, 26));
        spinBox->setFont(font);
        spinBox->setMinimum(1);
        spinBox->setMaximum(10);
        guessButton = new QPushButton(Widget);
        guessButton->setObjectName(QStringLiteral("guessButton"));
        guessButton->setGeometry(QRect(170, 110, 89, 25));
        startOverButton = new QPushButton(Widget);
        startOverButton->setObjectName(QStringLiteral("startOverButton"));
        startOverButton->setGeometry(QRect(280, 110, 89, 25));
        messageLabel = new QLabel(Widget);
        messageLabel->setObjectName(QStringLiteral("messageLabel"));
        messageLabel->setGeometry(QRect(20, 190, 441, 51));
        messageLabel->setFont(font);
        messageLabel->setAlignment(Qt::AlignCenter);
        messageLabel->setWordWrap(true);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        label->setText(QApplication::translate("Widget", "Guess MY Number!", Q_NULLPTR));
        guessButton->setText(QApplication::translate("Widget", "Guess", Q_NULLPTR));
        startOverButton->setText(QApplication::translate("Widget", "Start Over", Q_NULLPTR));
        messageLabel->setText(QApplication::translate("Widget", "Pick a Number", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
