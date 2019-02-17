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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QCheckBox *windowsCheckbox;
    QCheckBox *macCheckbox;
    QCheckBox *linuxCheckbox;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *beerCheckbox;
    QCheckBox *juiceCheckbox;
    QCheckBox *coffeeCheckbox;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_5;
    QRadioButton *aRadioButton;
    QRadioButton *bRadioButton;
    QRadioButton *cRadioButton;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(428, 370);
        verticalLayout_6 = new QVBoxLayout(Widget);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        windowsCheckbox = new QCheckBox(groupBox);
        windowsCheckbox->setObjectName(QStringLiteral("windowsCheckbox"));

        verticalLayout->addWidget(windowsCheckbox);

        macCheckbox = new QCheckBox(groupBox);
        macCheckbox->setObjectName(QStringLiteral("macCheckbox"));

        verticalLayout->addWidget(macCheckbox);

        linuxCheckbox = new QCheckBox(groupBox);
        linuxCheckbox->setObjectName(QStringLiteral("linuxCheckbox"));

        verticalLayout->addWidget(linuxCheckbox);


        verticalLayout_2->addLayout(verticalLayout);


        horizontalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(Widget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        verticalLayout_4 = new QVBoxLayout(groupBox_2);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        beerCheckbox = new QCheckBox(groupBox_2);
        beerCheckbox->setObjectName(QStringLiteral("beerCheckbox"));

        verticalLayout_3->addWidget(beerCheckbox);

        juiceCheckbox = new QCheckBox(groupBox_2);
        juiceCheckbox->setObjectName(QStringLiteral("juiceCheckbox"));

        verticalLayout_3->addWidget(juiceCheckbox);

        coffeeCheckbox = new QCheckBox(groupBox_2);
        coffeeCheckbox->setObjectName(QStringLiteral("coffeeCheckbox"));

        verticalLayout_3->addWidget(coffeeCheckbox);


        verticalLayout_4->addLayout(verticalLayout_3);


        horizontalLayout->addWidget(groupBox_2);


        verticalLayout_6->addLayout(horizontalLayout);

        groupBox_3 = new QGroupBox(Widget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        horizontalLayout_2 = new QHBoxLayout(groupBox_3);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        aRadioButton = new QRadioButton(groupBox_3);
        aRadioButton->setObjectName(QStringLiteral("aRadioButton"));

        verticalLayout_5->addWidget(aRadioButton);

        bRadioButton = new QRadioButton(groupBox_3);
        bRadioButton->setObjectName(QStringLiteral("bRadioButton"));

        verticalLayout_5->addWidget(bRadioButton);

        cRadioButton = new QRadioButton(groupBox_3);
        cRadioButton->setObjectName(QStringLiteral("cRadioButton"));

        verticalLayout_5->addWidget(cRadioButton);


        horizontalLayout_2->addLayout(verticalLayout_5);


        verticalLayout_6->addWidget(groupBox_3);

        pushButton = new QPushButton(Widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout_6->addWidget(pushButton);

        pushButton_2 = new QPushButton(Widget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        verticalLayout_6->addWidget(pushButton_2);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("Widget", "Choose OS (Exclusive)", Q_NULLPTR));
        windowsCheckbox->setText(QApplication::translate("Widget", "Windows", Q_NULLPTR));
        macCheckbox->setText(QApplication::translate("Widget", "Mac", Q_NULLPTR));
        linuxCheckbox->setText(QApplication::translate("Widget", "Linux", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("Widget", "Choose Drink (non exclusive)", Q_NULLPTR));
        beerCheckbox->setText(QApplication::translate("Widget", "Beer", Q_NULLPTR));
        juiceCheckbox->setText(QApplication::translate("Widget", "Juice", Q_NULLPTR));
        coffeeCheckbox->setText(QApplication::translate("Widget", "Coffee", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("Widget", "Choose Answer:", Q_NULLPTR));
        aRadioButton->setText(QApplication::translate("Widget", "A", Q_NULLPTR));
        bRadioButton->setText(QApplication::translate("Widget", "B", Q_NULLPTR));
        cRadioButton->setText(QApplication::translate("Widget", "C", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Widget", "Get Data", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Widget", "Set state", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
