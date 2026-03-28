/********************************************************************************
** Form generated from reading UI file 'hellooption.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELLOOPTION_H
#define UI_HELLOOPTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HelloOption
{
public:

    void setupUi(QWidget *HelloOption)
    {
        if (HelloOption->objectName().isEmpty())
            HelloOption->setObjectName("HelloOption");
        HelloOption->resize(400, 300);

        retranslateUi(HelloOption);

        QMetaObject::connectSlotsByName(HelloOption);
    } // setupUi

    void retranslateUi(QWidget *HelloOption)
    {
        HelloOption->setWindowTitle(QCoreApplication::translate("HelloOption", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HelloOption: public Ui_HelloOption {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELLOOPTION_H
