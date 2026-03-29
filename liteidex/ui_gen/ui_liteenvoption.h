/********************************************************************************
** Form generated from reading UI file 'liteenvoption.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LITEENVOPTION_H
#define UI_LITEENVOPTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LiteEnvOption
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *treeLabel;
    QTreeView *fileTreeView;
    QLabel *label;

    void setupUi(QWidget *LiteEnvOption)
    {
        if (LiteEnvOption->objectName().isEmpty())
            LiteEnvOption->setObjectName("LiteEnvOption");
        LiteEnvOption->resize(415, 260);
        verticalLayout = new QVBoxLayout(LiteEnvOption);
        verticalLayout->setObjectName("verticalLayout");
        treeLabel = new QLabel(LiteEnvOption);
        treeLabel->setObjectName("treeLabel");
        treeLabel->setWordWrap(true);

        verticalLayout->addWidget(treeLabel);

        fileTreeView = new QTreeView(LiteEnvOption);
        fileTreeView->setObjectName("fileTreeView");

        verticalLayout->addWidget(fileTreeView);

        label = new QLabel(LiteEnvOption);
        label->setObjectName("label");
        label->setWordWrap(true);

        verticalLayout->addWidget(label);


        retranslateUi(LiteEnvOption);

        QMetaObject::connectSlotsByName(LiteEnvOption);
    } // setupUi

    void retranslateUi(QWidget *LiteEnvOption)
    {
        LiteEnvOption->setWindowTitle(QCoreApplication::translate("LiteEnvOption", "Form", nullptr));
        treeLabel->setText(QCoreApplication::translate("LiteEnvOption", "Environment definition files:", nullptr));
        label->setText(QCoreApplication::translate("LiteEnvOption", "Environment changes will take effect after switching environments.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LiteEnvOption: public Ui_LiteEnvOption {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LITEENVOPTION_H
