/********************************************************************************
** Form generated from reading UI file 'goremovetagsdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GOREMOVETAGSDIALOG_H
#define UI_GOREMOVETAGSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_GoRemoveTagsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QRadioButton *clearAllTagsRadioButton;
    QRadioButton *clearAllOptionsRadioButton;
    QRadioButton *removeJsonTagRadioButton;
    QRadioButton *removeXmlTagRadioButton;
    QRadioButton *removeCustomTagRadioButton;
    QLineEdit *customTaglineEdit;
    QRadioButton *removeJsonOptionRadioButton;
    QLineEdit *jsonOptionLineEdit;
    QRadioButton *removeXmlOptionRadioButton;
    QLineEdit *xmlOptionLineEdit;
    QRadioButton *removeCustomOptionRadioButton;
    QLineEdit *customOptionLineEdit;
    QLabel *infoLabel;
    QPlainTextEdit *argumentsEdit;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *GoRemoveTagsDialog)
    {
        if (GoRemoveTagsDialog->objectName().isEmpty())
            GoRemoveTagsDialog->setObjectName("GoRemoveTagsDialog");
        GoRemoveTagsDialog->resize(550, 395);
        verticalLayout = new QVBoxLayout(GoRemoveTagsDialog);
        verticalLayout->setSpacing(2);
        verticalLayout->setObjectName("verticalLayout");
        groupBox = new QGroupBox(GoRemoveTagsDialog);
        groupBox->setObjectName("groupBox");
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName("gridLayout");
        clearAllTagsRadioButton = new QRadioButton(groupBox);
        clearAllTagsRadioButton->setObjectName("clearAllTagsRadioButton");
        clearAllTagsRadioButton->setChecked(false);

        gridLayout->addWidget(clearAllTagsRadioButton, 0, 0, 1, 1);

        clearAllOptionsRadioButton = new QRadioButton(groupBox);
        clearAllOptionsRadioButton->setObjectName("clearAllOptionsRadioButton");

        gridLayout->addWidget(clearAllOptionsRadioButton, 1, 0, 1, 1);

        removeJsonTagRadioButton = new QRadioButton(groupBox);
        removeJsonTagRadioButton->setObjectName("removeJsonTagRadioButton");

        gridLayout->addWidget(removeJsonTagRadioButton, 2, 0, 1, 1);

        removeXmlTagRadioButton = new QRadioButton(groupBox);
        removeXmlTagRadioButton->setObjectName("removeXmlTagRadioButton");

        gridLayout->addWidget(removeXmlTagRadioButton, 3, 0, 1, 1);

        removeCustomTagRadioButton = new QRadioButton(groupBox);
        removeCustomTagRadioButton->setObjectName("removeCustomTagRadioButton");
        removeCustomTagRadioButton->setChecked(true);

        gridLayout->addWidget(removeCustomTagRadioButton, 4, 0, 1, 1);

        customTaglineEdit = new QLineEdit(groupBox);
        customTaglineEdit->setObjectName("customTaglineEdit");

        gridLayout->addWidget(customTaglineEdit, 4, 1, 1, 1);

        removeJsonOptionRadioButton = new QRadioButton(groupBox);
        removeJsonOptionRadioButton->setObjectName("removeJsonOptionRadioButton");

        gridLayout->addWidget(removeJsonOptionRadioButton, 5, 0, 1, 1);

        jsonOptionLineEdit = new QLineEdit(groupBox);
        jsonOptionLineEdit->setObjectName("jsonOptionLineEdit");

        gridLayout->addWidget(jsonOptionLineEdit, 5, 1, 1, 1);

        removeXmlOptionRadioButton = new QRadioButton(groupBox);
        removeXmlOptionRadioButton->setObjectName("removeXmlOptionRadioButton");

        gridLayout->addWidget(removeXmlOptionRadioButton, 6, 0, 1, 1);

        xmlOptionLineEdit = new QLineEdit(groupBox);
        xmlOptionLineEdit->setObjectName("xmlOptionLineEdit");
        xmlOptionLineEdit->setCursorPosition(0);

        gridLayout->addWidget(xmlOptionLineEdit, 6, 1, 1, 1);

        removeCustomOptionRadioButton = new QRadioButton(groupBox);
        removeCustomOptionRadioButton->setObjectName("removeCustomOptionRadioButton");

        gridLayout->addWidget(removeCustomOptionRadioButton, 7, 0, 1, 1);

        customOptionLineEdit = new QLineEdit(groupBox);
        customOptionLineEdit->setObjectName("customOptionLineEdit");

        gridLayout->addWidget(customOptionLineEdit, 7, 1, 1, 1);


        verticalLayout->addWidget(groupBox);

        infoLabel = new QLabel(GoRemoveTagsDialog);
        infoLabel->setObjectName("infoLabel");

        verticalLayout->addWidget(infoLabel);

        argumentsEdit = new QPlainTextEdit(GoRemoveTagsDialog);
        argumentsEdit->setObjectName("argumentsEdit");

        verticalLayout->addWidget(argumentsEdit);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(GoRemoveTagsDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(GoRemoveTagsDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, GoRemoveTagsDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, GoRemoveTagsDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(GoRemoveTagsDialog);
    } // setupUi

    void retranslateUi(QDialog *GoRemoveTagsDialog)
    {
        GoRemoveTagsDialog->setWindowTitle(QCoreApplication::translate("GoRemoveTagsDialog", "Remove Tags From Struct Field", nullptr));
        groupBox->setTitle(QCoreApplication::translate("GoRemoveTagsDialog", "Remove Tags And Options", nullptr));
        clearAllTagsRadioButton->setText(QCoreApplication::translate("GoRemoveTagsDialog", "Clear All Tags", nullptr));
        clearAllOptionsRadioButton->setText(QCoreApplication::translate("GoRemoveTagsDialog", "Clear All Tags Options", nullptr));
        removeJsonTagRadioButton->setText(QCoreApplication::translate("GoRemoveTagsDialog", "Remove JSON Tag", nullptr));
        removeXmlTagRadioButton->setText(QCoreApplication::translate("GoRemoveTagsDialog", "Remove XML Tag", nullptr));
        removeCustomTagRadioButton->setText(QCoreApplication::translate("GoRemoveTagsDialog", "Remove Custom Tag", nullptr));
#if QT_CONFIG(tooltip)
        customTaglineEdit->setToolTip(QCoreApplication::translate("GoRemoveTagsDialog", "Multiple tags separated by commas", nullptr));
#endif // QT_CONFIG(tooltip)
        removeJsonOptionRadioButton->setText(QCoreApplication::translate("GoRemoveTagsDialog", "Remove JSON Options", nullptr));
#if QT_CONFIG(tooltip)
        jsonOptionLineEdit->setToolTip(QCoreApplication::translate("GoRemoveTagsDialog", "Multiple options separated by commas", nullptr));
#endif // QT_CONFIG(tooltip)
        removeXmlOptionRadioButton->setText(QCoreApplication::translate("GoRemoveTagsDialog", "Remove XML Options", nullptr));
#if QT_CONFIG(tooltip)
        xmlOptionLineEdit->setToolTip(QCoreApplication::translate("GoRemoveTagsDialog", "Multiple options separated by commas", nullptr));
#endif // QT_CONFIG(tooltip)
        xmlOptionLineEdit->setPlaceholderText(QString());
        removeCustomOptionRadioButton->setText(QCoreApplication::translate("GoRemoveTagsDialog", "Remove Custom Tag Options", nullptr));
#if QT_CONFIG(tooltip)
        customOptionLineEdit->setToolTip(QCoreApplication::translate("GoRemoveTagsDialog", "Setup remove custom tag and option, example tag=opt1,tag=opt2", nullptr));
#endif // QT_CONFIG(tooltip)
        customOptionLineEdit->setPlaceholderText(QCoreApplication::translate("GoRemoveTagsDialog", "tag=option", nullptr));
        infoLabel->setText(QCoreApplication::translate("GoRemoveTagsDialog", "Info", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GoRemoveTagsDialog: public Ui_GoRemoveTagsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GOREMOVETAGSDIALOG_H
