/********************************************************************************
** Form generated from reading UI file 'golangcodeoption.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GOLANGCODEOPTION_H
#define UI_GOLANGCODEOPTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GolangCodeOption
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QRadioButton *pkgHintGopathRadioButton;
    QRadioButton *pkgHintStdRadioButton;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *exitCloseCheckBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *GolangCodeOption)
    {
        if (GolangCodeOption->objectName().isEmpty())
            GolangCodeOption->setObjectName("GolangCodeOption");
        GolangCodeOption->resize(678, 242);
        verticalLayout_2 = new QVBoxLayout(GolangCodeOption);
        verticalLayout_2->setObjectName("verticalLayout_2");
        groupBox_2 = new QGroupBox(GolangCodeOption);
        groupBox_2->setObjectName("groupBox_2");
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setObjectName("verticalLayout");
        pkgHintGopathRadioButton = new QRadioButton(groupBox_2);
        pkgHintGopathRadioButton->setObjectName("pkgHintGopathRadioButton");

        verticalLayout->addWidget(pkgHintGopathRadioButton);

        pkgHintStdRadioButton = new QRadioButton(groupBox_2);
        pkgHintStdRadioButton->setObjectName("pkgHintStdRadioButton");

        verticalLayout->addWidget(pkgHintStdRadioButton);


        verticalLayout_2->addWidget(groupBox_2);

        groupBox = new QGroupBox(GolangCodeOption);
        groupBox->setObjectName("groupBox");
        verticalLayout_3 = new QVBoxLayout(groupBox);
        verticalLayout_3->setObjectName("verticalLayout_3");
        exitCloseCheckBox = new QCheckBox(groupBox);
        exitCloseCheckBox->setObjectName("exitCloseCheckBox");

        verticalLayout_3->addWidget(exitCloseCheckBox);


        verticalLayout_2->addWidget(groupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        retranslateUi(GolangCodeOption);

        QMetaObject::connectSlotsByName(GolangCodeOption);
    } // setupUi

    void retranslateUi(QWidget *GolangCodeOption)
    {
        GolangCodeOption->setWindowTitle(QCoreApplication::translate("GolangCodeOption", "Form", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("GolangCodeOption", "PKG automitic import prompt", nullptr));
        pkgHintGopathRadioButton->setText(QCoreApplication::translate("GolangCodeOption", "PKG automatic import hints for all packages (Module/GOPATH)", nullptr));
        pkgHintStdRadioButton->setText(QCoreApplication::translate("GolangCodeOption", "PKG automatic import hints for standard package", nullptr));
        groupBox->setTitle(QCoreApplication::translate("GolangCodeOption", "Gocode", nullptr));
        exitCloseCheckBox->setText(QCoreApplication::translate("GolangCodeOption", "Close gocode when exiting", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GolangCodeOption: public Ui_GolangCodeOption {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GOLANGCODEOPTION_H
