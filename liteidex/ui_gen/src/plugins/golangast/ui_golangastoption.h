/********************************************************************************
** Form generated from reading UI file 'golangastoption.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GOLANGASTOPTION_H
#define UI_GOLANGASTOPTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GolangAstOption
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QCheckBox *checkQuickSymbolImportPath;
    QCheckBox *checkQuickSymbolMatchCase;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *GolangAstOption)
    {
        if (GolangAstOption->objectName().isEmpty())
            GolangAstOption->setObjectName("GolangAstOption");
        GolangAstOption->resize(400, 121);
        verticalLayout_2 = new QVBoxLayout(GolangAstOption);
        verticalLayout_2->setObjectName("verticalLayout_2");
        groupBox = new QGroupBox(GolangAstOption);
        groupBox->setObjectName("groupBox");
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName("verticalLayout");
        checkQuickSymbolImportPath = new QCheckBox(groupBox);
        checkQuickSymbolImportPath->setObjectName("checkQuickSymbolImportPath");

        verticalLayout->addWidget(checkQuickSymbolImportPath);

        checkQuickSymbolMatchCase = new QCheckBox(groupBox);
        checkQuickSymbolMatchCase->setObjectName("checkQuickSymbolMatchCase");

        verticalLayout->addWidget(checkQuickSymbolMatchCase);


        verticalLayout_2->addWidget(groupBox);

        verticalSpacer = new QSpacerItem(20, 24, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        retranslateUi(GolangAstOption);

        QMetaObject::connectSlotsByName(GolangAstOption);
    } // setupUi

    void retranslateUi(QWidget *GolangAstOption)
    {
        GolangAstOption->setWindowTitle(QCoreApplication::translate("GolangAstOption", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("GolangAstOption", "QuickOpenSymbol", nullptr));
        checkQuickSymbolImportPath->setText(QCoreApplication::translate("GolangAstOption", "Show import path", nullptr));
        checkQuickSymbolMatchCase->setText(QCoreApplication::translate("GolangAstOption", "Match case sensitive", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GolangAstOption: public Ui_GolangAstOption {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GOLANGASTOPTION_H
