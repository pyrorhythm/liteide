/********************************************************************************
** Form generated from reading UI file 'outputoption.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OUTPUTOPTION_H
#define UI_OUTPUTOPTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OutputOption
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_7;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_2;
    QComboBox *familyComboBox;
    QLabel *label_7;
    QComboBox *sizeComboBox;
    QLabel *label_8;
    QSpinBox *fontZoomSpinBox;
    QCheckBox *antialiasCheckBox;
    QSpacerItem *horizontalSpacer_5;
    QGroupBox *groupBox_10;
    QVBoxLayout *verticalLayout;
    QCheckBox *useColorSchemeCheckBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpinBox *spinBoxOutputMaxLines;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *OutputOption)
    {
        if (OutputOption->objectName().isEmpty())
            OutputOption->setObjectName("OutputOption");
        OutputOption->resize(455, 161);
        verticalLayout_2 = new QVBoxLayout(OutputOption);
        verticalLayout_2->setObjectName("verticalLayout_2");
        groupBox_7 = new QGroupBox(OutputOption);
        groupBox_7->setObjectName("groupBox_7");
        horizontalLayout_8 = new QHBoxLayout(groupBox_7);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        label_2 = new QLabel(groupBox_7);
        label_2->setObjectName("label_2");

        horizontalLayout_8->addWidget(label_2);

        familyComboBox = new QComboBox(groupBox_7);
        familyComboBox->setObjectName("familyComboBox");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(familyComboBox->sizePolicy().hasHeightForWidth());
        familyComboBox->setSizePolicy(sizePolicy);

        horizontalLayout_8->addWidget(familyComboBox);

        label_7 = new QLabel(groupBox_7);
        label_7->setObjectName("label_7");

        horizontalLayout_8->addWidget(label_7);

        sizeComboBox = new QComboBox(groupBox_7);
        sizeComboBox->setObjectName("sizeComboBox");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(sizeComboBox->sizePolicy().hasHeightForWidth());
        sizeComboBox->setSizePolicy(sizePolicy1);

        horizontalLayout_8->addWidget(sizeComboBox);

        label_8 = new QLabel(groupBox_7);
        label_8->setObjectName("label_8");

        horizontalLayout_8->addWidget(label_8);

        fontZoomSpinBox = new QSpinBox(groupBox_7);
        fontZoomSpinBox->setObjectName("fontZoomSpinBox");
        fontZoomSpinBox->setMinimum(10);
        fontZoomSpinBox->setMaximum(1000);
        fontZoomSpinBox->setSingleStep(10);
        fontZoomSpinBox->setValue(100);

        horizontalLayout_8->addWidget(fontZoomSpinBox);

        antialiasCheckBox = new QCheckBox(groupBox_7);
        antialiasCheckBox->setObjectName("antialiasCheckBox");

        horizontalLayout_8->addWidget(antialiasCheckBox);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_5);


        verticalLayout_2->addWidget(groupBox_7);

        groupBox_10 = new QGroupBox(OutputOption);
        groupBox_10->setObjectName("groupBox_10");
        verticalLayout = new QVBoxLayout(groupBox_10);
        verticalLayout->setObjectName("verticalLayout");
        useColorSchemeCheckBox = new QCheckBox(groupBox_10);
        useColorSchemeCheckBox->setObjectName("useColorSchemeCheckBox");

        verticalLayout->addWidget(useColorSchemeCheckBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(groupBox_10);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        spinBoxOutputMaxLines = new QSpinBox(groupBox_10);
        spinBoxOutputMaxLines->setObjectName("spinBoxOutputMaxLines");
        spinBoxOutputMaxLines->setMinimum(10);
        spinBoxOutputMaxLines->setMaximum(10000000);
        spinBoxOutputMaxLines->setValue(5000);

        horizontalLayout->addWidget(spinBoxOutputMaxLines);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addWidget(groupBox_10);

        verticalSpacer = new QSpacerItem(20, 33, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        retranslateUi(OutputOption);

        QMetaObject::connectSlotsByName(OutputOption);
    } // setupUi

    void retranslateUi(QWidget *OutputOption)
    {
        OutputOption->setWindowTitle(QCoreApplication::translate("OutputOption", "Form", nullptr));
        groupBox_7->setTitle(QCoreApplication::translate("OutputOption", "Font", nullptr));
        label_2->setText(QCoreApplication::translate("OutputOption", "Family:", nullptr));
        label_7->setText(QCoreApplication::translate("OutputOption", "Size:", nullptr));
        label_8->setText(QCoreApplication::translate("OutputOption", "Zoom:", nullptr));
        fontZoomSpinBox->setSuffix(QCoreApplication::translate("OutputOption", "%", nullptr));
        antialiasCheckBox->setText(QCoreApplication::translate("OutputOption", "Antialias", nullptr));
        groupBox_10->setTitle(QCoreApplication::translate("OutputOption", "Display", nullptr));
        useColorSchemeCheckBox->setText(QCoreApplication::translate("OutputOption", "Use editor color scheme", nullptr));
        label->setText(QCoreApplication::translate("OutputOption", "Sets the maximum number of lines", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OutputOption: public Ui_OutputOption {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OUTPUTOPTION_H
