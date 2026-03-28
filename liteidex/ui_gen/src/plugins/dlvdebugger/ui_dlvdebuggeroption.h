/********************************************************************************
** Form generated from reading UI file 'dlvdebuggeroption.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLVDEBUGGEROPTION_H
#define UI_DLVDEBUGGEROPTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DlvDebuggerOption
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLineEdit *flagsLineEdit;
    QGroupBox *GroupBox;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QSpacerItem *verticalSpacer;
    QButtonGroup *buttonGroup;

    void setupUi(QWidget *DlvDebuggerOption)
    {
        if (DlvDebuggerOption->objectName().isEmpty())
            DlvDebuggerOption->setObjectName("DlvDebuggerOption");
        DlvDebuggerOption->resize(473, 213);
        verticalLayout = new QVBoxLayout(DlvDebuggerOption);
        verticalLayout->setObjectName("verticalLayout");
        groupBox = new QGroupBox(DlvDebuggerOption);
        groupBox->setObjectName("groupBox");
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName("verticalLayout_2");
        label = new QLabel(groupBox);
        label->setObjectName("label");

        verticalLayout_2->addWidget(label);

        flagsLineEdit = new QLineEdit(groupBox);
        flagsLineEdit->setObjectName("flagsLineEdit");

        verticalLayout_2->addWidget(flagsLineEdit);


        verticalLayout->addWidget(groupBox);

        GroupBox = new QGroupBox(DlvDebuggerOption);
        GroupBox->setObjectName("GroupBox");
        horizontalLayout = new QHBoxLayout(GroupBox);
        horizontalLayout->setObjectName("horizontalLayout");
        radioButton = new QRadioButton(GroupBox);
        buttonGroup = new QButtonGroup(DlvDebuggerOption);
        buttonGroup->setObjectName("buttonGroup");
        buttonGroup->addButton(radioButton);
        radioButton->setObjectName("radioButton");

        horizontalLayout->addWidget(radioButton);

        radioButton_2 = new QRadioButton(GroupBox);
        buttonGroup->addButton(radioButton_2);
        radioButton_2->setObjectName("radioButton_2");

        horizontalLayout->addWidget(radioButton_2);

        radioButton_3 = new QRadioButton(GroupBox);
        buttonGroup->addButton(radioButton_3);
        radioButton_3->setObjectName("radioButton_3");

        horizontalLayout->addWidget(radioButton_3);


        verticalLayout->addWidget(GroupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(DlvDebuggerOption);

        QMetaObject::connectSlotsByName(DlvDebuggerOption);
    } // setupUi

    void retranslateUi(QWidget *DlvDebuggerOption)
    {
        DlvDebuggerOption->setWindowTitle(QCoreApplication::translate("DlvDebuggerOption", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("DlvDebuggerOption", "Delve Pass Flags", nullptr));
        label->setText(QCoreApplication::translate("DlvDebuggerOption", "example --check-go-version=false", nullptr));
        GroupBox->setTitle(QCoreApplication::translate("DlvDebuggerOption", "Assembly Syntax", nullptr));
        radioButton->setText(QCoreApplication::translate("DlvDebuggerOption", "Gnu", nullptr));
        radioButton_2->setText(QCoreApplication::translate("DlvDebuggerOption", "Intel", nullptr));
        radioButton_3->setText(QCoreApplication::translate("DlvDebuggerOption", "Go", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DlvDebuggerOption: public Ui_DlvDebuggerOption {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLVDEBUGGEROPTION_H
