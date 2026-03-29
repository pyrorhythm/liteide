/********************************************************************************
** Form generated from reading UI file 'goaddtagsdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GOADDTAGSDIALOG_H
#define UI_GOADDTAGSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_GoAddTagsDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QCheckBox *jsonCheckBox;
    QGroupBox *jsonGroupBox;
    QHBoxLayout *horizontalLayout;
    QCheckBox *jsonOptionsCheckBox;
    QLineEdit *jsonOptionsLineEdit;
    QCheckBox *xmlCheckBox;
    QGroupBox *xmlGroupBox;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *xmlOptionsCheckBox;
    QLineEdit *xmlOptionsLineEdit;
    QCheckBox *customCheckBox;
    QGroupBox *customGroupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLineEdit *customTagNameLineEdit1;
    QLabel *label_2;
    QLineEdit *customTagOptionLineEdit1;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QLineEdit *customTagNameLineEdit2;
    QLabel *label_4;
    QLineEdit *customTagOptionlineEdit2;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_5;
    QRadioButton *snakeCaseRadioButton;
    QRadioButton *camelCaseRadioButton;
    QRadioButton *lispCaseRadioButton;
    QSpacerItem *horizontalSpacer;
    QLabel *transformInfo;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *sortCheckBox;
    QCheckBox *overrideCheckBox;
    QLabel *infoLabel;
    QPlainTextEdit *argumentsEdit;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *GoAddTagsDialog)
    {
        if (GoAddTagsDialog->objectName().isEmpty())
            GoAddTagsDialog->setObjectName("GoAddTagsDialog");
        GoAddTagsDialog->resize(550, 441);
        verticalLayout_2 = new QVBoxLayout(GoAddTagsDialog);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName("verticalLayout_2");
        jsonCheckBox = new QCheckBox(GoAddTagsDialog);
        jsonCheckBox->setObjectName("jsonCheckBox");

        verticalLayout_2->addWidget(jsonCheckBox);

        jsonGroupBox = new QGroupBox(GoAddTagsDialog);
        jsonGroupBox->setObjectName("jsonGroupBox");
        jsonGroupBox->setCheckable(false);
        jsonGroupBox->setChecked(false);
        horizontalLayout = new QHBoxLayout(jsonGroupBox);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(12, 2, 12, 2);
        jsonOptionsCheckBox = new QCheckBox(jsonGroupBox);
        jsonOptionsCheckBox->setObjectName("jsonOptionsCheckBox");

        horizontalLayout->addWidget(jsonOptionsCheckBox);

        jsonOptionsLineEdit = new QLineEdit(jsonGroupBox);
        jsonOptionsLineEdit->setObjectName("jsonOptionsLineEdit");
        jsonOptionsLineEdit->setText(QString::fromUtf8("omitempty,"));

        horizontalLayout->addWidget(jsonOptionsLineEdit);


        verticalLayout_2->addWidget(jsonGroupBox);

        xmlCheckBox = new QCheckBox(GoAddTagsDialog);
        xmlCheckBox->setObjectName("xmlCheckBox");

        verticalLayout_2->addWidget(xmlCheckBox);

        xmlGroupBox = new QGroupBox(GoAddTagsDialog);
        xmlGroupBox->setObjectName("xmlGroupBox");
        xmlGroupBox->setCheckable(false);
        xmlGroupBox->setChecked(false);
        horizontalLayout_2 = new QHBoxLayout(xmlGroupBox);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(12, 2, 12, 2);
        xmlOptionsCheckBox = new QCheckBox(xmlGroupBox);
        xmlOptionsCheckBox->setObjectName("xmlOptionsCheckBox");

        horizontalLayout_2->addWidget(xmlOptionsCheckBox);

        xmlOptionsLineEdit = new QLineEdit(xmlGroupBox);
        xmlOptionsLineEdit->setObjectName("xmlOptionsLineEdit");
        xmlOptionsLineEdit->setText(QString::fromUtf8("omitempty,"));

        horizontalLayout_2->addWidget(xmlOptionsLineEdit);


        verticalLayout_2->addWidget(xmlGroupBox);

        customCheckBox = new QCheckBox(GoAddTagsDialog);
        customCheckBox->setObjectName("customCheckBox");

        verticalLayout_2->addWidget(customCheckBox);

        customGroupBox = new QGroupBox(GoAddTagsDialog);
        customGroupBox->setObjectName("customGroupBox");
        customGroupBox->setCheckable(false);
        customGroupBox->setChecked(false);
        verticalLayout = new QVBoxLayout(customGroupBox);
        verticalLayout->setSpacing(2);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(-1, 2, -1, 2);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label = new QLabel(customGroupBox);
        label->setObjectName("label");

        horizontalLayout_3->addWidget(label);

        customTagNameLineEdit1 = new QLineEdit(customGroupBox);
        customTagNameLineEdit1->setObjectName("customTagNameLineEdit1");

        horizontalLayout_3->addWidget(customTagNameLineEdit1);

        label_2 = new QLabel(customGroupBox);
        label_2->setObjectName("label_2");

        horizontalLayout_3->addWidget(label_2);

        customTagOptionLineEdit1 = new QLineEdit(customGroupBox);
        customTagOptionLineEdit1->setObjectName("customTagOptionLineEdit1");

        horizontalLayout_3->addWidget(customTagOptionLineEdit1);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_3 = new QLabel(customGroupBox);
        label_3->setObjectName("label_3");

        horizontalLayout_4->addWidget(label_3);

        customTagNameLineEdit2 = new QLineEdit(customGroupBox);
        customTagNameLineEdit2->setObjectName("customTagNameLineEdit2");

        horizontalLayout_4->addWidget(customTagNameLineEdit2);

        label_4 = new QLabel(customGroupBox);
        label_4->setObjectName("label_4");

        horizontalLayout_4->addWidget(label_4);

        customTagOptionlineEdit2 = new QLineEdit(customGroupBox);
        customTagOptionlineEdit2->setObjectName("customTagOptionlineEdit2");

        horizontalLayout_4->addWidget(customTagOptionlineEdit2);


        verticalLayout->addLayout(horizontalLayout_4);


        verticalLayout_2->addWidget(customGroupBox);

        groupBox = new QGroupBox(GoAddTagsDialog);
        groupBox->setObjectName("groupBox");
        groupBox->setTitle(QString::fromUtf8("Ttransform"));
        horizontalLayout_5 = new QHBoxLayout(groupBox);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(12, 2, 12, 2);
        snakeCaseRadioButton = new QRadioButton(groupBox);
        snakeCaseRadioButton->setObjectName("snakeCaseRadioButton");
        snakeCaseRadioButton->setText(QString::fromUtf8("SnakeCase"));
        snakeCaseRadioButton->setChecked(true);

        horizontalLayout_5->addWidget(snakeCaseRadioButton);

        camelCaseRadioButton = new QRadioButton(groupBox);
        camelCaseRadioButton->setObjectName("camelCaseRadioButton");
        camelCaseRadioButton->setText(QString::fromUtf8("CamelCase"));

        horizontalLayout_5->addWidget(camelCaseRadioButton);

        lispCaseRadioButton = new QRadioButton(groupBox);
        lispCaseRadioButton->setObjectName("lispCaseRadioButton");
        lispCaseRadioButton->setText(QString::fromUtf8("LispCase"));

        horizontalLayout_5->addWidget(lispCaseRadioButton);

        horizontalSpacer = new QSpacerItem(9, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        transformInfo = new QLabel(groupBox);
        transformInfo->setObjectName("transformInfo");
        transformInfo->setText(QString::fromUtf8("BaseDomain -> base_domain"));

        horizontalLayout_5->addWidget(transformInfo);


        verticalLayout_2->addWidget(groupBox);

        groupBox_2 = new QGroupBox(GoAddTagsDialog);
        groupBox_2->setObjectName("groupBox_2");
        verticalLayout_3 = new QVBoxLayout(groupBox_2);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(12, 2, 12, 2);
        sortCheckBox = new QCheckBox(groupBox_2);
        sortCheckBox->setObjectName("sortCheckBox");

        verticalLayout_3->addWidget(sortCheckBox);

        overrideCheckBox = new QCheckBox(groupBox_2);
        overrideCheckBox->setObjectName("overrideCheckBox");

        verticalLayout_3->addWidget(overrideCheckBox);


        verticalLayout_2->addWidget(groupBox_2);

        infoLabel = new QLabel(GoAddTagsDialog);
        infoLabel->setObjectName("infoLabel");

        verticalLayout_2->addWidget(infoLabel);

        argumentsEdit = new QPlainTextEdit(GoAddTagsDialog);
        argumentsEdit->setObjectName("argumentsEdit");

        verticalLayout_2->addWidget(argumentsEdit);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(GoAddTagsDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);


        retranslateUi(GoAddTagsDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, GoAddTagsDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, GoAddTagsDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(GoAddTagsDialog);
    } // setupUi

    void retranslateUi(QDialog *GoAddTagsDialog)
    {
        GoAddTagsDialog->setWindowTitle(QCoreApplication::translate("GoAddTagsDialog", "Add Tags To Struct Field", nullptr));
        jsonCheckBox->setText(QCoreApplication::translate("GoAddTagsDialog", "Add JSON Tag", nullptr));
        jsonGroupBox->setTitle(QString());
        jsonOptionsCheckBox->setText(QCoreApplication::translate("GoAddTagsDialog", "Options", nullptr));
#if QT_CONFIG(tooltip)
        jsonOptionsLineEdit->setToolTip(QCoreApplication::translate("GoAddTagsDialog", "Multiple options separated by commas", nullptr));
#endif // QT_CONFIG(tooltip)
        xmlCheckBox->setText(QCoreApplication::translate("GoAddTagsDialog", "Add XML Tag", nullptr));
        xmlGroupBox->setTitle(QString());
        xmlOptionsCheckBox->setText(QCoreApplication::translate("GoAddTagsDialog", "Options", nullptr));
#if QT_CONFIG(tooltip)
        xmlOptionsLineEdit->setToolTip(QCoreApplication::translate("GoAddTagsDialog", "Multiple options separated by commas", nullptr));
#endif // QT_CONFIG(tooltip)
        customCheckBox->setText(QCoreApplication::translate("GoAddTagsDialog", "Add Custom Tags", nullptr));
        customGroupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("GoAddTagsDialog", "Tag Name", nullptr));
#if QT_CONFIG(tooltip)
        customTagNameLineEdit1->setToolTip(QCoreApplication::translate("GoAddTagsDialog", "Setup custom tag name", nullptr));
#endif // QT_CONFIG(tooltip)
        label_2->setText(QCoreApplication::translate("GoAddTagsDialog", "Options", nullptr));
#if QT_CONFIG(tooltip)
        customTagOptionLineEdit1->setToolTip(QCoreApplication::translate("GoAddTagsDialog", "Multiple options separated by commas", nullptr));
#endif // QT_CONFIG(tooltip)
        label_3->setText(QCoreApplication::translate("GoAddTagsDialog", "Tag Name", nullptr));
        label_4->setText(QCoreApplication::translate("GoAddTagsDialog", "Options", nullptr));
#if QT_CONFIG(tooltip)
        customTagOptionlineEdit2->setToolTip(QCoreApplication::translate("GoAddTagsDialog", "Multiple options separated by commas", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBox_2->setTitle(QCoreApplication::translate("GoAddTagsDialog", "Options", nullptr));
        sortCheckBox->setText(QCoreApplication::translate("GoAddTagsDialog", "Sort sorts the tags in increasing order according to the key name", nullptr));
        overrideCheckBox->setText(QCoreApplication::translate("GoAddTagsDialog", "Override current tags when adding tags", nullptr));
        infoLabel->setText(QCoreApplication::translate("GoAddTagsDialog", "Info", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GoAddTagsDialog: public Ui_GoAddTagsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GOADDTAGSDIALOG_H
