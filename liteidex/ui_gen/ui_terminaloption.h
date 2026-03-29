/********************************************************************************
** Form generated from reading UI file 'terminaloption.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TERMINALOPTION_H
#define UI_TERMINALOPTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TermianlOption
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_7;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_2;
    QFontComboBox *fontComboBox;
    QLabel *label_7;
    QComboBox *sizeComboBox;
    QLabel *label_8;
    QSpinBox *fontZoomSpinBox;
    QCheckBox *antialiasCheckBox;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *TermianlOption)
    {
        if (TermianlOption->objectName().isEmpty())
            TermianlOption->setObjectName("TermianlOption");
        TermianlOption->resize(645, 138);
        verticalLayout = new QVBoxLayout(TermianlOption);
        verticalLayout->setObjectName("verticalLayout");
        groupBox_7 = new QGroupBox(TermianlOption);
        groupBox_7->setObjectName("groupBox_7");
        horizontalLayout_8 = new QHBoxLayout(groupBox_7);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        label_2 = new QLabel(groupBox_7);
        label_2->setObjectName("label_2");

        horizontalLayout_8->addWidget(label_2);

        fontComboBox = new QFontComboBox(groupBox_7);
        fontComboBox->setObjectName("fontComboBox");
        fontComboBox->setFontFilters(QFontComboBox::MonospacedFonts);

        horizontalLayout_8->addWidget(fontComboBox);

        label_7 = new QLabel(groupBox_7);
        label_7->setObjectName("label_7");

        horizontalLayout_8->addWidget(label_7);

        sizeComboBox = new QComboBox(groupBox_7);
        sizeComboBox->setObjectName("sizeComboBox");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(sizeComboBox->sizePolicy().hasHeightForWidth());
        sizeComboBox->setSizePolicy(sizePolicy);

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


        verticalLayout->addWidget(groupBox_7);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(TermianlOption);

        QMetaObject::connectSlotsByName(TermianlOption);
    } // setupUi

    void retranslateUi(QWidget *TermianlOption)
    {
        TermianlOption->setWindowTitle(QCoreApplication::translate("TermianlOption", "Form", nullptr));
        groupBox_7->setTitle(QCoreApplication::translate("TermianlOption", "Font", nullptr));
        label_2->setText(QCoreApplication::translate("TermianlOption", "Family:", nullptr));
        label_7->setText(QCoreApplication::translate("TermianlOption", "Size:", nullptr));
        label_8->setText(QCoreApplication::translate("TermianlOption", "Zoom:", nullptr));
        fontZoomSpinBox->setSuffix(QCoreApplication::translate("TermianlOption", "%", nullptr));
        antialiasCheckBox->setText(QCoreApplication::translate("TermianlOption", "Antialias", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TermianlOption: public Ui_TermianlOption {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TERMINALOPTION_H
