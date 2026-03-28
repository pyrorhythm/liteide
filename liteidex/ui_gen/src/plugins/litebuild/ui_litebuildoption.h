/********************************************************************************
** Form generated from reading UI file 'litebuildoption.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LITEBUILDOPTION_H
#define UI_LITEBUILDOPTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LiteBuildOption
{
public:
    QVBoxLayout *verticalLayout_2;
    QCheckBox *goenvCheckBox;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QTreeView *fileTreeView;

    void setupUi(QWidget *LiteBuildOption)
    {
        if (LiteBuildOption->objectName().isEmpty())
            LiteBuildOption->setObjectName("LiteBuildOption");
        LiteBuildOption->resize(383, 255);
        verticalLayout_2 = new QVBoxLayout(LiteBuildOption);
        verticalLayout_2->setObjectName("verticalLayout_2");
        goenvCheckBox = new QCheckBox(LiteBuildOption);
        goenvCheckBox->setObjectName("goenvCheckBox");

        verticalLayout_2->addWidget(goenvCheckBox);

        groupBox = new QGroupBox(LiteBuildOption);
        groupBox->setObjectName("groupBox");
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName("verticalLayout");
        fileTreeView = new QTreeView(groupBox);
        fileTreeView->setObjectName("fileTreeView");

        verticalLayout->addWidget(fileTreeView);


        verticalLayout_2->addWidget(groupBox);


        retranslateUi(LiteBuildOption);

        QMetaObject::connectSlotsByName(LiteBuildOption);
    } // setupUi

    void retranslateUi(QWidget *LiteBuildOption)
    {
        LiteBuildOption->setWindowTitle(QCoreApplication::translate("LiteBuildOption", "Form", nullptr));
        goenvCheckBox->setText(QCoreApplication::translate("LiteBuildOption", "Recheck Go installation when changing environments", nullptr));
        groupBox->setTitle(QCoreApplication::translate("LiteBuildOption", "Build command configuration files [*]", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LiteBuildOption: public Ui_LiteBuildOption {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LITEBUILDOPTION_H
