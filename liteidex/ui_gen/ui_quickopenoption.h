/********************************************************************************
** Form generated from reading UI file 'quickopenoption.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUICKOPENOPTION_H
#define UI_QUICKOPENOPTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QuickOpenOption
{
public:
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QCheckBox *checkFilesMatchCase;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpinBox *spinBoxFilesMaxCount;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *checkEditorMatchCase;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *QuickOpenOption)
    {
        if (QuickOpenOption->objectName().isEmpty())
            QuickOpenOption->setObjectName("QuickOpenOption");
        QuickOpenOption->resize(374, 163);
        verticalLayout_3 = new QVBoxLayout(QuickOpenOption);
        verticalLayout_3->setObjectName("verticalLayout_3");
        groupBox = new QGroupBox(QuickOpenOption);
        groupBox->setObjectName("groupBox");
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName("verticalLayout");
        checkFilesMatchCase = new QCheckBox(groupBox);
        checkFilesMatchCase->setObjectName("checkFilesMatchCase");

        verticalLayout->addWidget(checkFilesMatchCase);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(groupBox);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        spinBoxFilesMaxCount = new QSpinBox(groupBox);
        spinBoxFilesMaxCount->setObjectName("spinBoxFilesMaxCount");
        spinBoxFilesMaxCount->setMaximum(10000000);
        spinBoxFilesMaxCount->setSingleStep(1000);
        spinBoxFilesMaxCount->setValue(100000);

        horizontalLayout->addWidget(spinBoxFilesMaxCount);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_3->addWidget(groupBox);

        groupBox_2 = new QGroupBox(QuickOpenOption);
        groupBox_2->setObjectName("groupBox_2");
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        checkEditorMatchCase = new QCheckBox(groupBox_2);
        checkEditorMatchCase->setObjectName("checkEditorMatchCase");

        verticalLayout_2->addWidget(checkEditorMatchCase);


        verticalLayout_3->addWidget(groupBox_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);


        retranslateUi(QuickOpenOption);

        QMetaObject::connectSlotsByName(QuickOpenOption);
    } // setupUi

    void retranslateUi(QWidget *QuickOpenOption)
    {
        QuickOpenOption->setWindowTitle(QCoreApplication::translate("QuickOpenOption", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("QuickOpenOption", "QuickOpenFiles", nullptr));
        checkFilesMatchCase->setText(QCoreApplication::translate("QuickOpenOption", "Match case sensitive", nullptr));
        label->setText(QCoreApplication::translate("QuickOpenOption", "Max files count:", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("QuickOpenOption", "QuickOpenEditor", nullptr));
        checkEditorMatchCase->setText(QCoreApplication::translate("QuickOpenOption", "Match case sensitive", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QuickOpenOption: public Ui_QuickOpenOption {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUICKOPENOPTION_H
