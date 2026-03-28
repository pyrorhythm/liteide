/********************************************************************************
** Form generated from reading UI file 'litedebugoption.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LITEDEBUGOPTION_H
#define UI_LITEDEBUGOPTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LiteDebugOption
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QCheckBox *autoBreakMainCheckBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *LiteDebugOption)
    {
        if (LiteDebugOption->objectName().isEmpty())
            LiteDebugOption->setObjectName("LiteDebugOption");
        LiteDebugOption->resize(435, 113);
        verticalLayout_2 = new QVBoxLayout(LiteDebugOption);
        verticalLayout_2->setObjectName("verticalLayout_2");
        groupBox = new QGroupBox(LiteDebugOption);
        groupBox->setObjectName("groupBox");
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName("verticalLayout");
        autoBreakMainCheckBox = new QCheckBox(groupBox);
        autoBreakMainCheckBox->setObjectName("autoBreakMainCheckBox");

        verticalLayout->addWidget(autoBreakMainCheckBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        verticalLayout_2->addWidget(groupBox);


        retranslateUi(LiteDebugOption);

        QMetaObject::connectSlotsByName(LiteDebugOption);
    } // setupUi

    void retranslateUi(QWidget *LiteDebugOption)
    {
        LiteDebugOption->setWindowTitle(QCoreApplication::translate("LiteDebugOption", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("LiteDebugOption", "Debug", nullptr));
        autoBreakMainCheckBox->setText(QCoreApplication::translate("LiteDebugOption", "Automatically insert breakpoint main.main when debugging", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LiteDebugOption: public Ui_LiteDebugOption {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LITEDEBUGOPTION_H
