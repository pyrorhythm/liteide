/********************************************************************************
** Form generated from reading UI file 'importgopathdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMPORTGOPATHDIALOG_H
#define UI_IMPORTGOPATHDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ImportGopathDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_2;
    QPlainTextEdit *sysPathTextEdit;
    QVBoxLayout *verticalLayout;
    QPushButton *reloadButton;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout;
    QPlainTextEdit *pathTextEdit;
    QVBoxLayout *verticalLayout_2;
    QPushButton *browserButton;
    QPushButton *clearButton;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ImportGopathDialog)
    {
        if (ImportGopathDialog->objectName().isEmpty())
            ImportGopathDialog->setObjectName("ImportGopathDialog");
        ImportGopathDialog->resize(452, 259);
        verticalLayout_3 = new QVBoxLayout(ImportGopathDialog);
        verticalLayout_3->setObjectName("verticalLayout_3");
        groupBox = new QGroupBox(ImportGopathDialog);
        groupBox->setObjectName("groupBox");
        horizontalLayout_2 = new QHBoxLayout(groupBox);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        sysPathTextEdit = new QPlainTextEdit(groupBox);
        sysPathTextEdit->setObjectName("sysPathTextEdit");
        sysPathTextEdit->setReadOnly(true);

        horizontalLayout_2->addWidget(sysPathTextEdit);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        reloadButton = new QPushButton(groupBox);
        reloadButton->setObjectName("reloadButton");

        verticalLayout->addWidget(reloadButton);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);


        horizontalLayout_2->addLayout(verticalLayout);


        verticalLayout_3->addWidget(groupBox);

        groupBox_2 = new QGroupBox(ImportGopathDialog);
        groupBox_2->setObjectName("groupBox_2");
        horizontalLayout = new QHBoxLayout(groupBox_2);
        horizontalLayout->setObjectName("horizontalLayout");
        pathTextEdit = new QPlainTextEdit(groupBox_2);
        pathTextEdit->setObjectName("pathTextEdit");

        horizontalLayout->addWidget(pathTextEdit);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        browserButton = new QPushButton(groupBox_2);
        browserButton->setObjectName("browserButton");

        verticalLayout_2->addWidget(browserButton);

        clearButton = new QPushButton(groupBox_2);
        clearButton->setObjectName("clearButton");

        verticalLayout_2->addWidget(clearButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addWidget(groupBox_2);

        buttonBox = new QDialogButtonBox(ImportGopathDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_3->addWidget(buttonBox);

        QWidget::setTabOrder(pathTextEdit, browserButton);
        QWidget::setTabOrder(browserButton, clearButton);
        QWidget::setTabOrder(clearButton, reloadButton);
        QWidget::setTabOrder(reloadButton, sysPathTextEdit);
        QWidget::setTabOrder(sysPathTextEdit, buttonBox);

        retranslateUi(ImportGopathDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, ImportGopathDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, ImportGopathDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(ImportGopathDialog);
    } // setupUi

    void retranslateUi(QDialog *ImportGopathDialog)
    {
        ImportGopathDialog->setWindowTitle(QCoreApplication::translate("ImportGopathDialog", "Import GOPATH Project", nullptr));
        groupBox->setTitle(QCoreApplication::translate("ImportGopathDialog", "System GOPATH", nullptr));
        reloadButton->setText(QCoreApplication::translate("ImportGopathDialog", "Reload", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("ImportGopathDialog", "Custome GOPATH", nullptr));
        browserButton->setText(QCoreApplication::translate("ImportGopathDialog", "Browser", nullptr));
        clearButton->setText(QCoreApplication::translate("ImportGopathDialog", "Clear", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ImportGopathDialog: public Ui_ImportGopathDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMPORTGOPATHDIALOG_H
