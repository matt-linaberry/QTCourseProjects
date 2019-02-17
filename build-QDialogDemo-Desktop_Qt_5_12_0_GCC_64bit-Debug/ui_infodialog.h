/********************************************************************************
** Form generated from reading UI file 'infodialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFODIALOG_H
#define UI_INFODIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_InfoDialog
{
public:
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *positionLineEdit;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QRadioButton *windowsRadioButton;
    QRadioButton *macRadioButton;
    QRadioButton *linuxRadioButton;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *InfoDialog)
    {
        if (InfoDialog->objectName().isEmpty())
            InfoDialog->setObjectName(QString::fromUtf8("InfoDialog"));
        InfoDialog->resize(335, 238);
        horizontalLayout_4 = new QHBoxLayout(InfoDialog);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label = new QLabel(InfoDialog);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_3->addWidget(label);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(InfoDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        positionLineEdit = new QLineEdit(InfoDialog);
        positionLineEdit->setObjectName(QString::fromUtf8("positionLineEdit"));

        horizontalLayout_2->addWidget(positionLineEdit);


        verticalLayout_2->addLayout(horizontalLayout_2);

        groupBox = new QGroupBox(InfoDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        windowsRadioButton = new QRadioButton(groupBox);
        windowsRadioButton->setObjectName(QString::fromUtf8("windowsRadioButton"));

        verticalLayout->addWidget(windowsRadioButton);

        macRadioButton = new QRadioButton(groupBox);
        macRadioButton->setObjectName(QString::fromUtf8("macRadioButton"));

        verticalLayout->addWidget(macRadioButton);

        linuxRadioButton = new QRadioButton(groupBox);
        linuxRadioButton->setObjectName(QString::fromUtf8("linuxRadioButton"));

        verticalLayout->addWidget(linuxRadioButton);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_2->addWidget(groupBox);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        okButton = new QPushButton(InfoDialog);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        horizontalLayout_3->addWidget(okButton);

        cancelButton = new QPushButton(InfoDialog);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        horizontalLayout_3->addWidget(cancelButton);


        verticalLayout_2->addLayout(horizontalLayout_3);


        verticalLayout_3->addLayout(verticalLayout_2);


        horizontalLayout_4->addLayout(verticalLayout_3);


        retranslateUi(InfoDialog);

        QMetaObject::connectSlotsByName(InfoDialog);
    } // setupUi

    void retranslateUi(QDialog *InfoDialog)
    {
        InfoDialog->setWindowTitle(QApplication::translate("InfoDialog", "Dialog", nullptr));
        label->setText(QApplication::translate("InfoDialog", "Your information ", nullptr));
        label_2->setText(QApplication::translate("InfoDialog", "Position :", nullptr));
        groupBox->setTitle(QApplication::translate("InfoDialog", "Favorite OS", nullptr));
        windowsRadioButton->setText(QApplication::translate("InfoDialog", "Windows", nullptr));
        macRadioButton->setText(QApplication::translate("InfoDialog", "Mac", nullptr));
        linuxRadioButton->setText(QApplication::translate("InfoDialog", "Linux", nullptr));
        okButton->setText(QApplication::translate("InfoDialog", "OK", nullptr));
        cancelButton->setText(QApplication::translate("InfoDialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InfoDialog: public Ui_InfoDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFODIALOG_H
