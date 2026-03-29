/********************************************************************************
** Form generated from reading UI file 'fakevimeditoption.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FAKEVIMEDITOPTION_H
#define UI_FAKEVIMEDITOPTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FakeVimEditOption
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *resetCommandsButton;
    QSpacerItem *horizontalSpacer;
    QPlainTextEdit *textInitCommands;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *FakeVimEditOption)
    {
        if (FakeVimEditOption->objectName().isEmpty())
            FakeVimEditOption->setObjectName("FakeVimEditOption");
        FakeVimEditOption->resize(395, 242);
        verticalLayout_2 = new QVBoxLayout(FakeVimEditOption);
        verticalLayout_2->setObjectName("verticalLayout_2");
        groupBox = new QGroupBox(FakeVimEditOption);
        groupBox->setObjectName("groupBox");
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        resetCommandsButton = new QPushButton(groupBox);
        resetCommandsButton->setObjectName("resetCommandsButton");

        horizontalLayout->addWidget(resetCommandsButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        textInitCommands = new QPlainTextEdit(groupBox);
        textInitCommands->setObjectName("textInitCommands");

        verticalLayout->addWidget(textInitCommands);


        verticalLayout_2->addWidget(groupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        retranslateUi(FakeVimEditOption);

        QMetaObject::connectSlotsByName(FakeVimEditOption);
    } // setupUi

    void retranslateUi(QWidget *FakeVimEditOption)
    {
        FakeVimEditOption->setWindowTitle(QCoreApplication::translate("FakeVimEditOption", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("FakeVimEditOption", "FakeVim initialization command list (# start is comment):", nullptr));
        resetCommandsButton->setText(QCoreApplication::translate("FakeVimEditOption", "Load default init command list", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FakeVimEditOption: public Ui_FakeVimEditOption {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FAKEVIMEDITOPTION_H
