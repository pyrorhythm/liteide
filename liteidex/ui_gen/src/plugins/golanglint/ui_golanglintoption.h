/********************************************************************************
** Form generated from reading UI file 'golanglintoption.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GOLANGLINTOPTION_H
#define UI_GOLANGLINTOPTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GolangLintOption
{
public:
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QCheckBox *checkBoxAutoLint;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lintConfidenceLabel;
    QSlider *confidenceSlider;
    QSpacerItem *horizontalSpacer;
    QLabel *lintConfidenceValLabel;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *syncTimeoutLineEdit;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *GolangLintOption)
    {
        if (GolangLintOption->objectName().isEmpty())
            GolangLintOption->setObjectName("GolangLintOption");
        GolangLintOption->resize(503, 176);
        verticalLayout_3 = new QVBoxLayout(GolangLintOption);
        verticalLayout_3->setObjectName("verticalLayout_3");
        groupBox = new QGroupBox(GolangLintOption);
        groupBox->setObjectName("groupBox");
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName("verticalLayout");
        checkBoxAutoLint = new QCheckBox(groupBox);
        checkBoxAutoLint->setObjectName("checkBoxAutoLint");
        checkBoxAutoLint->setChecked(true);

        verticalLayout->addWidget(checkBoxAutoLint);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        lintConfidenceLabel = new QLabel(groupBox);
        lintConfidenceLabel->setObjectName("lintConfidenceLabel");

        horizontalLayout_2->addWidget(lintConfidenceLabel);

        confidenceSlider = new QSlider(groupBox);
        confidenceSlider->setObjectName("confidenceSlider");
        confidenceSlider->setMaximum(10);
        confidenceSlider->setSingleStep(1);
        confidenceSlider->setPageStep(2);
        confidenceSlider->setValue(8);
        confidenceSlider->setSliderPosition(8);
        confidenceSlider->setTracking(true);
        confidenceSlider->setOrientation(Qt::Horizontal);
        confidenceSlider->setInvertedAppearance(false);
        confidenceSlider->setInvertedControls(false);
        confidenceSlider->setTickPosition(QSlider::NoTicks);

        horizontalLayout_2->addWidget(confidenceSlider);

        horizontalSpacer = new QSpacerItem(10, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        lintConfidenceValLabel = new QLabel(groupBox);
        lintConfidenceValLabel->setObjectName("lintConfidenceValLabel");

        horizontalLayout_2->addWidget(lintConfidenceValLabel);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_3->addWidget(groupBox);

        groupBox_2 = new QGroupBox(GolangLintOption);
        groupBox_2->setObjectName("groupBox_2");
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
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


        verticalLayout_3->addWidget(groupBox_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);


        retranslateUi(GolangLintOption);

        QMetaObject::connectSlotsByName(GolangLintOption);
    } // setupUi

    void retranslateUi(QWidget *GolangLintOption)
    {
        GolangLintOption->setWindowTitle(QCoreApplication::translate("GolangLintOption", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("GolangLintOption", "Lint Options", nullptr));
        checkBoxAutoLint->setText(QCoreApplication::translate("GolangLintOption", "Automatically lint code when saving", nullptr));
        lintConfidenceLabel->setText(QCoreApplication::translate("GolangLintOption", "Minimum confidence", nullptr));
        lintConfidenceValLabel->setText(QCoreApplication::translate("GolangLintOption", "0.8", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("GolangLintOption", "Synchronous", nullptr));
        label->setText(QCoreApplication::translate("GolangLintOption", "Code linting timeout in milliseconds (500ms or more):", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GolangLintOption: public Ui_GolangLintOption {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GOLANGLINTOPTION_H
