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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QPushButton *oneButton;
    QPushButton *twoButton;
    QPushButton *threeButton;
    QPushButton *fourButton;
    QPushButton *pushButton_5;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(503, 611);
        horizontalLayout = new QHBoxLayout(Widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        oneButton = new QPushButton(Widget);
        oneButton->setObjectName(QStringLiteral("oneButton"));

        verticalLayout->addWidget(oneButton);

        twoButton = new QPushButton(Widget);
        twoButton->setObjectName(QStringLiteral("twoButton"));

        verticalLayout->addWidget(twoButton);

        threeButton = new QPushButton(Widget);
        threeButton->setObjectName(QStringLiteral("threeButton"));

        verticalLayout->addWidget(threeButton);

        fourButton = new QPushButton(Widget);
        fourButton->setObjectName(QStringLiteral("fourButton"));

        verticalLayout->addWidget(fourButton);

        pushButton_5 = new QPushButton(Widget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        verticalLayout->addWidget(pushButton_5);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        oneButton->setText(QApplication::translate("Widget", "One", Q_NULLPTR));
        twoButton->setText(QApplication::translate("Widget", "Two", Q_NULLPTR));
        threeButton->setText(QApplication::translate("Widget", "Three", Q_NULLPTR));
        fourButton->setText(QApplication::translate("Widget", "Four", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("Widget", "Five", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
