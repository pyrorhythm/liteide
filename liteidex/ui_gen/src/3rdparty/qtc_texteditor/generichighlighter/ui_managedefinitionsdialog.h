/********************************************************************************
** Form generated from reading UI file 'managedefinitionsdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGEDEFINITIONSDIALOG_H
#define UI_MANAGEDEFINITIONSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ManageDefinitionsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *definitionsGroupBox;
    QGridLayout *gridLayout;
    QTableWidget *definitionsTable;
    QPushButton *allButton;
    QPushButton *clearButton;
    QPushButton *invertButton;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *downloadButton;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ManageDefinitionsDialog)
    {
        if (ManageDefinitionsDialog->objectName().isEmpty())
            ManageDefinitionsDialog->setObjectName("ManageDefinitionsDialog");
        ManageDefinitionsDialog->resize(586, 280);
        verticalLayout = new QVBoxLayout(ManageDefinitionsDialog);
        verticalLayout->setObjectName("verticalLayout");
        definitionsGroupBox = new QGroupBox(ManageDefinitionsDialog);
        definitionsGroupBox->setObjectName("definitionsGroupBox");
        gridLayout = new QGridLayout(definitionsGroupBox);
        gridLayout->setObjectName("gridLayout");
        definitionsTable = new QTableWidget(definitionsGroupBox);
        if (definitionsTable->columnCount() < 3)
            definitionsTable->setColumnCount(3);
        definitionsTable->setObjectName("definitionsTable");
        definitionsTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        definitionsTable->setAlternatingRowColors(false);
        definitionsTable->setSelectionMode(QAbstractItemView::ExtendedSelection);
        definitionsTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        definitionsTable->setShowGrid(false);
        definitionsTable->setGridStyle(Qt::NoPen);
        definitionsTable->setColumnCount(3);
        definitionsTable->horizontalHeader()->setHighlightSections(false);
        definitionsTable->verticalHeader()->setVisible(false);
        definitionsTable->verticalHeader()->setDefaultSectionSize(20);
        definitionsTable->verticalHeader()->setHighlightSections(false);

        gridLayout->addWidget(definitionsTable, 0, 0, 4, 1);

        allButton = new QPushButton(definitionsGroupBox);
        allButton->setObjectName("allButton");

        gridLayout->addWidget(allButton, 0, 1, 1, 1);

        clearButton = new QPushButton(definitionsGroupBox);
        clearButton->setObjectName("clearButton");

        gridLayout->addWidget(clearButton, 1, 1, 1, 1);

        invertButton = new QPushButton(definitionsGroupBox);
        invertButton->setObjectName("invertButton");

        gridLayout->addWidget(invertButton, 2, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 244, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer, 3, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        downloadButton = new QPushButton(definitionsGroupBox);
        downloadButton->setObjectName("downloadButton");

        horizontalLayout->addWidget(downloadButton);

        horizontalSpacer = new QSpacerItem(188, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout, 4, 0, 1, 2);


        verticalLayout->addWidget(definitionsGroupBox);

        buttonBox = new QDialogButtonBox(ManageDefinitionsDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(ManageDefinitionsDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, ManageDefinitionsDialog, qOverload<>(&QDialog::close));

        QMetaObject::connectSlotsByName(ManageDefinitionsDialog);
    } // setupUi

    void retranslateUi(QDialog *ManageDefinitionsDialog)
    {
        ManageDefinitionsDialog->setWindowTitle(QCoreApplication::translate("ManageDefinitionsDialog", "Dialog", nullptr));
        definitionsGroupBox->setTitle(QCoreApplication::translate("ManageDefinitionsDialog", "Definitions", nullptr));
        allButton->setText(QCoreApplication::translate("ManageDefinitionsDialog", "Select All", nullptr));
        clearButton->setText(QCoreApplication::translate("ManageDefinitionsDialog", "Clear Selection", nullptr));
        invertButton->setText(QCoreApplication::translate("ManageDefinitionsDialog", "Invert Selection", nullptr));
        downloadButton->setText(QCoreApplication::translate("ManageDefinitionsDialog", "Download Selected Definitions", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ManageDefinitionsDialog: public Ui_ManageDefinitionsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGEDEFINITIONSDIALOG_H
