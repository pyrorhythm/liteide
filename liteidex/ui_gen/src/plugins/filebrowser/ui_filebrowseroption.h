/********************************************************************************
** Form generated from reading UI file 'filebrowseroption.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILEBROWSEROPTION_H
#define UI_FILEBROWSEROPTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FileBrowserOption
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *cmdLineEdit;
    QLabel *label_2;
    QLineEdit *argsLineEdit;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *FileBrowserOption)
    {
        if (FileBrowserOption->objectName().isEmpty())
            FileBrowserOption->setObjectName("FileBrowserOption");
        FileBrowserOption->resize(400, 118);
        verticalLayout = new QVBoxLayout(FileBrowserOption);
        verticalLayout->setObjectName("verticalLayout");
        groupBox = new QGroupBox(FileBrowserOption);
        groupBox->setObjectName("groupBox");
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName("formLayout");
        label = new QLabel(groupBox);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, label);

        cmdLineEdit = new QLineEdit(groupBox);
        cmdLineEdit->setObjectName("cmdLineEdit");

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, cmdLineEdit);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, label_2);

        argsLineEdit = new QLineEdit(groupBox);
        argsLineEdit->setObjectName("argsLineEdit");

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, argsLineEdit);


        verticalLayout->addWidget(groupBox);

        verticalSpacer = new QSpacerItem(20, 164, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(FileBrowserOption);

        QMetaObject::connectSlotsByName(FileBrowserOption);
    } // setupUi

    void retranslateUi(QWidget *FileBrowserOption)
    {
        FileBrowserOption->setWindowTitle(QCoreApplication::translate("FileBrowserOption", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("FileBrowserOption", "Terminal", nullptr));
        label->setText(QCoreApplication::translate("FileBrowserOption", "Command:", nullptr));
        label_2->setText(QCoreApplication::translate("FileBrowserOption", "Arguments:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FileBrowserOption: public Ui_FileBrowserOption {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILEBROWSEROPTION_H
