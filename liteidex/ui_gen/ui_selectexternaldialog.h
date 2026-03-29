/********************************************************************************
** Form generated from reading UI file 'selectexternaldialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTEXTERNALDIALOG_H
#define UI_SELECTEXTERNALDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SelectExternalDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    QPushButton *cmbPushButton;
    QLabel *label_2;
    QLineEdit *argsLineEdit;
    QLabel *label_3;
    QLineEdit *workLineEdit;
    QPushButton *workPushButton;
    QLineEdit *cmdLineEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SelectExternalDialog)
    {
        if (SelectExternalDialog->objectName().isEmpty())
            SelectExternalDialog->setObjectName("SelectExternalDialog");
        SelectExternalDialog->resize(398, 127);
        verticalLayout = new QVBoxLayout(SelectExternalDialog);
        verticalLayout->setObjectName("verticalLayout");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(SelectExternalDialog);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        cmbPushButton = new QPushButton(SelectExternalDialog);
        cmbPushButton->setObjectName("cmbPushButton");

        gridLayout->addWidget(cmbPushButton, 0, 2, 1, 1);

        label_2 = new QLabel(SelectExternalDialog);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        argsLineEdit = new QLineEdit(SelectExternalDialog);
        argsLineEdit->setObjectName("argsLineEdit");

        gridLayout->addWidget(argsLineEdit, 1, 1, 1, 1);

        label_3 = new QLabel(SelectExternalDialog);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        workLineEdit = new QLineEdit(SelectExternalDialog);
        workLineEdit->setObjectName("workLineEdit");

        gridLayout->addWidget(workLineEdit, 2, 1, 1, 1);

        workPushButton = new QPushButton(SelectExternalDialog);
        workPushButton->setObjectName("workPushButton");

        gridLayout->addWidget(workPushButton, 2, 2, 1, 1);

        cmdLineEdit = new QLineEdit(SelectExternalDialog);
        cmdLineEdit->setObjectName("cmdLineEdit");

        gridLayout->addWidget(cmdLineEdit, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        buttonBox = new QDialogButtonBox(SelectExternalDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(SelectExternalDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, SelectExternalDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, SelectExternalDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(SelectExternalDialog);
    } // setupUi

    void retranslateUi(QDialog *SelectExternalDialog)
    {
        SelectExternalDialog->setWindowTitle(QCoreApplication::translate("SelectExternalDialog", "Debug External Application", nullptr));
        label->setText(QCoreApplication::translate("SelectExternalDialog", "Application:", nullptr));
        cmbPushButton->setText(QCoreApplication::translate("SelectExternalDialog", "Browse...", nullptr));
        label_2->setText(QCoreApplication::translate("SelectExternalDialog", "Arguments:", nullptr));
        label_3->setText(QCoreApplication::translate("SelectExternalDialog", "Working directory:", nullptr));
        workPushButton->setText(QCoreApplication::translate("SelectExternalDialog", "Browse...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SelectExternalDialog: public Ui_SelectExternalDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTEXTERNALDIALOG_H
