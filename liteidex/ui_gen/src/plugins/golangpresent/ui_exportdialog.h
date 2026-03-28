/********************************************************************************
** Form generated from reading UI file 'exportdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXPORTDIALOG_H
#define UI_EXPORTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ExportDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *fileName;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *exportButton;
    QPushButton *exportAndViewButton;

    void setupUi(QDialog *ExportDialog)
    {
        if (ExportDialog->objectName().isEmpty())
            ExportDialog->setObjectName("ExportDialog");
        ExportDialog->resize(348, 71);
        verticalLayout = new QVBoxLayout(ExportDialog);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label = new QLabel(ExportDialog);
        label->setObjectName("label");

        horizontalLayout_2->addWidget(label);

        fileName = new QLineEdit(ExportDialog);
        fileName->setObjectName("fileName");

        horizontalLayout_2->addWidget(fileName);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        exportButton = new QPushButton(ExportDialog);
        exportButton->setObjectName("exportButton");

        horizontalLayout->addWidget(exportButton);

        exportAndViewButton = new QPushButton(ExportDialog);
        exportAndViewButton->setObjectName("exportAndViewButton");

        horizontalLayout->addWidget(exportAndViewButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(ExportDialog);

        QMetaObject::connectSlotsByName(ExportDialog);
    } // setupUi

    void retranslateUi(QDialog *ExportDialog)
    {
        ExportDialog->setWindowTitle(QCoreApplication::translate("ExportDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("ExportDialog", "Name:", nullptr));
        exportButton->setText(QCoreApplication::translate("ExportDialog", "Export", nullptr));
        exportAndViewButton->setText(QCoreApplication::translate("ExportDialog", "ExportAndView", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ExportDialog: public Ui_ExportDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPORTDIALOG_H
