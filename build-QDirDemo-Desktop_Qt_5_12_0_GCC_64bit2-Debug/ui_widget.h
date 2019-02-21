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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit;
    QListWidget *listWidget;
    QVBoxLayout *verticalLayout_2;
    QPushButton *chooseDirButton;
    QPushButton *createDirButton;
    QPushButton *dirExistButton;
    QPushButton *dirOrFileButton;
    QPushButton *folderContentsButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(558, 202);
        horizontalLayout = new QHBoxLayout(Widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lineEdit = new QLineEdit(Widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        verticalLayout->addWidget(lineEdit);

        listWidget = new QListWidget(Widget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        verticalLayout->addWidget(listWidget);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        chooseDirButton = new QPushButton(Widget);
        chooseDirButton->setObjectName(QString::fromUtf8("chooseDirButton"));

        verticalLayout_2->addWidget(chooseDirButton);

        createDirButton = new QPushButton(Widget);
        createDirButton->setObjectName(QString::fromUtf8("createDirButton"));

        verticalLayout_2->addWidget(createDirButton);

        dirExistButton = new QPushButton(Widget);
        dirExistButton->setObjectName(QString::fromUtf8("dirExistButton"));

        verticalLayout_2->addWidget(dirExistButton);

        dirOrFileButton = new QPushButton(Widget);
        dirOrFileButton->setObjectName(QString::fromUtf8("dirOrFileButton"));

        verticalLayout_2->addWidget(dirOrFileButton);

        folderContentsButton = new QPushButton(Widget);
        folderContentsButton->setObjectName(QString::fromUtf8("folderContentsButton"));

        verticalLayout_2->addWidget(folderContentsButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout_2);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        chooseDirButton->setText(QApplication::translate("Widget", "Choose Dir", nullptr));
        createDirButton->setText(QApplication::translate("Widget", "Create Dir", nullptr));
        dirExistButton->setText(QApplication::translate("Widget", "Dir Exist ?", nullptr));
        dirOrFileButton->setText(QApplication::translate("Widget", "Dir or File", nullptr));
        folderContentsButton->setText(QApplication::translate("Widget", "Folder Contents", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
