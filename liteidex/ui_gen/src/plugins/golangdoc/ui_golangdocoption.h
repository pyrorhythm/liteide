/********************************************************************************
** Form generated from reading UI file 'golangdocoption.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GOLANGDOCOPTION_H
#define UI_GOLANGDOCOPTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GolangDocOption
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QCheckBox *defContextCheckBox;
    QCheckBox *onlyStdCheckBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *GolangDocOption)
    {
        if (GolangDocOption->objectName().isEmpty())
            GolangDocOption->setObjectName("GolangDocOption");
        GolangDocOption->resize(370, 123);
        verticalLayout_2 = new QVBoxLayout(GolangDocOption);
        verticalLayout_2->setObjectName("verticalLayout_2");
        groupBox = new QGroupBox(GolangDocOption);
        groupBox->setObjectName("groupBox");
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName("verticalLayout");
        defContextCheckBox = new QCheckBox(groupBox);
        defContextCheckBox->setObjectName("defContextCheckBox");

        verticalLayout->addWidget(defContextCheckBox);

        onlyStdCheckBox = new QCheckBox(groupBox);
        onlyStdCheckBox->setObjectName("onlyStdCheckBox");

        verticalLayout->addWidget(onlyStdCheckBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        verticalLayout_2->addWidget(groupBox);


        retranslateUi(GolangDocOption);

        QMetaObject::connectSlotsByName(GolangDocOption);
    } // setupUi

    void retranslateUi(QWidget *GolangDocOption)
    {
        GolangDocOption->setWindowTitle(QCoreApplication::translate("GolangDocOption", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("GolangDocOption", "Go API", nullptr));
        defContextCheckBox->setText(QCoreApplication::translate("GolangDocOption", "Use default context (fast)", nullptr));
        onlyStdCheckBox->setText(QCoreApplication::translate("GolangDocOption", "Only load standard API documentation", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GolangDocOption: public Ui_GolangDocOption {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GOLANGDOCOPTION_H
