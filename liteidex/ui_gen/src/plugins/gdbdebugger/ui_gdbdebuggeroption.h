/********************************************************************************
** Form generated from reading UI file 'gdbdebuggeroption.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GDBDEBUGGEROPTION_H
#define UI_GDBDEBUGGEROPTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GdbDebuggerOption
{
public:
    QVBoxLayout *verticalLayout;
    QCheckBox *useTtyCheckBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *GdbDebuggerOption)
    {
        if (GdbDebuggerOption->objectName().isEmpty())
            GdbDebuggerOption->setObjectName("GdbDebuggerOption");
        GdbDebuggerOption->resize(400, 72);
        verticalLayout = new QVBoxLayout(GdbDebuggerOption);
        verticalLayout->setObjectName("verticalLayout");
        useTtyCheckBox = new QCheckBox(GdbDebuggerOption);
        useTtyCheckBox->setObjectName("useTtyCheckBox");

        verticalLayout->addWidget(useTtyCheckBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(GdbDebuggerOption);

        QMetaObject::connectSlotsByName(GdbDebuggerOption);
    } // setupUi

    void retranslateUi(QWidget *GdbDebuggerOption)
    {
        GdbDebuggerOption->setWindowTitle(QCoreApplication::translate("GdbDebuggerOption", "Form", nullptr));
        useTtyCheckBox->setText(QCoreApplication::translate("GdbDebuggerOption", "Enable --tty for program being debugged.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GdbDebuggerOption: public Ui_GdbDebuggerOption {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GDBDEBUGGEROPTION_H
