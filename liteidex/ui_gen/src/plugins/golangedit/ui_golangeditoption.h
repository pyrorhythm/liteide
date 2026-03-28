/********************************************************************************
** Form generated from reading UI file 'golangeditoption.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GOLANGEDITOPTION_H
#define UI_GOLANGEDITOPTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GolangEditOption
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QCheckBox *gorootSourceReadOnlyCheckBox;
    QCheckBox *enableMouseInfoCheckBox;
    QCheckBox *enableMouseNavigationCheckBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *GolangEditOption)
    {
        if (GolangEditOption->objectName().isEmpty())
            GolangEditOption->setObjectName("GolangEditOption");
        GolangEditOption->resize(400, 123);
        verticalLayout_2 = new QVBoxLayout(GolangEditOption);
        verticalLayout_2->setObjectName("verticalLayout_2");
        groupBox = new QGroupBox(GolangEditOption);
        groupBox->setObjectName("groupBox");
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName("verticalLayout");
        gorootSourceReadOnlyCheckBox = new QCheckBox(groupBox);
        gorootSourceReadOnlyCheckBox->setObjectName("gorootSourceReadOnlyCheckBox");

        verticalLayout->addWidget(gorootSourceReadOnlyCheckBox);

        enableMouseInfoCheckBox = new QCheckBox(groupBox);
        enableMouseInfoCheckBox->setObjectName("enableMouseInfoCheckBox");

        verticalLayout->addWidget(enableMouseInfoCheckBox);

        enableMouseNavigationCheckBox = new QCheckBox(groupBox);
        enableMouseNavigationCheckBox->setObjectName("enableMouseNavigationCheckBox");

        verticalLayout->addWidget(enableMouseNavigationCheckBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        verticalLayout_2->addWidget(groupBox);


        retranslateUi(GolangEditOption);

        QMetaObject::connectSlotsByName(GolangEditOption);
    } // setupUi

    void retranslateUi(QWidget *GolangEditOption)
    {
        GolangEditOption->setWindowTitle(QCoreApplication::translate("GolangEditOption", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("GolangEditOption", "Mouse", nullptr));
        gorootSourceReadOnlyCheckBox->setText(QCoreApplication::translate("GolangEditOption", "Go root source file editor setup read only", nullptr));
        enableMouseInfoCheckBox->setText(QCoreApplication::translate("GolangEditOption", "Enable view expression infomation on mouse", nullptr));
        enableMouseNavigationCheckBox->setText(QCoreApplication::translate("GolangEditOption", "Enable mouse navigation", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GolangEditOption: public Ui_GolangEditOption {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GOLANGEDITOPTION_H
