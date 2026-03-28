/********************************************************************************
** Form generated from reading UI file 'golangfmtoption.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GOLANGFMTOPTION_H
#define UI_GOLANGFMTOPTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GolangFmtOption
{
public:
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QCheckBox *checkBoxUseGoimports;
    QCheckBox *checkBoxAutoFmt;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *enableSyncCheckBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *syncTimeoutLineEdit;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *GolangFmtOption)
    {
        if (GolangFmtOption->objectName().isEmpty())
            GolangFmtOption->setObjectName("GolangFmtOption");
        GolangFmtOption->resize(569, 220);
        verticalLayout_3 = new QVBoxLayout(GolangFmtOption);
        verticalLayout_3->setObjectName("verticalLayout_3");
        groupBox = new QGroupBox(GolangFmtOption);
        groupBox->setObjectName("groupBox");
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName("verticalLayout");
        checkBoxUseGoimports = new QCheckBox(groupBox);
        checkBoxUseGoimports->setObjectName("checkBoxUseGoimports");

        verticalLayout->addWidget(checkBoxUseGoimports);

        checkBoxAutoFmt = new QCheckBox(groupBox);
        checkBoxAutoFmt->setObjectName("checkBoxAutoFmt");

        verticalLayout->addWidget(checkBoxAutoFmt);


        verticalLayout_3->addWidget(groupBox);

        groupBox_2 = new QGroupBox(GolangFmtOption);
        groupBox_2->setObjectName("groupBox_2");
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        enableSyncCheckBox = new QCheckBox(groupBox_2);
        enableSyncCheckBox->setObjectName("enableSyncCheckBox");

        verticalLayout_2->addWidget(enableSyncCheckBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(groupBox_2);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        syncTimeoutLineEdit = new QLineEdit(groupBox_2);
        syncTimeoutLineEdit->setObjectName("syncTimeoutLineEdit");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(syncTimeoutLineEdit->sizePolicy().hasHeightForWidth());
        syncTimeoutLineEdit->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(syncTimeoutLineEdit);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        verticalLayout_3->addWidget(groupBox_2);


        retranslateUi(GolangFmtOption);

        QMetaObject::connectSlotsByName(GolangFmtOption);
    } // setupUi

    void retranslateUi(QWidget *GolangFmtOption)
    {
        GolangFmtOption->setWindowTitle(QCoreApplication::translate("GolangFmtOption", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("GolangFmtOption", "Format Options", nullptr));
#if QT_CONFIG(tooltip)
        checkBoxUseGoimports->setToolTip(QCoreApplication::translate("GolangFmtOption", "Goimports updates your Go import lines, adding missing ones and removing unreferenced ones.", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBoxUseGoimports->setText(QCoreApplication::translate("GolangFmtOption", "Enable update imports line, adding missing ones and removing unreferenced ones.", nullptr));
        checkBoxAutoFmt->setText(QCoreApplication::translate("GolangFmtOption", "Automatically format code when saving", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("GolangFmtOption", "Synchronous", nullptr));
        enableSyncCheckBox->setText(QCoreApplication::translate("GolangFmtOption", "Synchronous code formatting", nullptr));
        label->setText(QCoreApplication::translate("GolangFmtOption", "Synchronous code formatting timeout in milliseconds (500ms or more):", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GolangFmtOption: public Ui_GolangFmtOption {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GOLANGFMTOPTION_H
