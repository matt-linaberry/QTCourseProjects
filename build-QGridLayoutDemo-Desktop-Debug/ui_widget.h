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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *buttonOne;
    QPushButton *buttonTwo;
    QPushButton *buttonThree;
    QPushButton *buttonFour;
    QPushButton *buttonFive;
    QPushButton *buttonSeven;
    QPushButton *buttonNine;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(766, 503);
        widget = new QWidget(Widget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(80, 90, 281, 89));
        gridLayout = new QGridLayout(widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        buttonOne = new QPushButton(widget);
        buttonOne->setObjectName(QStringLiteral("buttonOne"));

        gridLayout->addWidget(buttonOne, 0, 0, 1, 1);

        buttonTwo = new QPushButton(widget);
        buttonTwo->setObjectName(QStringLiteral("buttonTwo"));

        gridLayout->addWidget(buttonTwo, 0, 1, 1, 1);

        buttonThree = new QPushButton(widget);
        buttonThree->setObjectName(QStringLiteral("buttonThree"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(buttonThree->sizePolicy().hasHeightForWidth());
        buttonThree->setSizePolicy(sizePolicy);

        gridLayout->addWidget(buttonThree, 0, 2, 1, 1);

        buttonFour = new QPushButton(widget);
        buttonFour->setObjectName(QStringLiteral("buttonFour"));

        gridLayout->addWidget(buttonFour, 1, 0, 1, 1);

        buttonFive = new QPushButton(widget);
        buttonFive->setObjectName(QStringLiteral("buttonFive"));

        gridLayout->addWidget(buttonFive, 1, 1, 1, 1);

        buttonSeven = new QPushButton(widget);
        buttonSeven->setObjectName(QStringLiteral("buttonSeven"));

        gridLayout->addWidget(buttonSeven, 2, 0, 1, 1);

        buttonNine = new QPushButton(widget);
        buttonNine->setObjectName(QStringLiteral("buttonNine"));

        gridLayout->addWidget(buttonNine, 2, 2, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        buttonOne->setText(QApplication::translate("Widget", "One", Q_NULLPTR));
        buttonTwo->setText(QApplication::translate("Widget", "Two", Q_NULLPTR));
        buttonThree->setText(QApplication::translate("Widget", "Three", Q_NULLPTR));
        buttonFour->setText(QApplication::translate("Widget", "Four", Q_NULLPTR));
        buttonFive->setText(QApplication::translate("Widget", "Five", Q_NULLPTR));
        buttonSeven->setText(QApplication::translate("Widget", "Seven", Q_NULLPTR));
        buttonNine->setText(QApplication::translate("Widget", "Nine", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
