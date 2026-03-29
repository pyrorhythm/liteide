/********************************************************************************
** Form generated from reading UI file 'acpoption.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACPOPTION_H
#define UI_ACPOPTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMenu>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ACPOption
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QListWidget *agentList;
    QHBoxLayout *horizontalLayout;
    QPushButton *addAgentBtn;
    QPushButton *removeAgentBtn;
    QSpacerItem *horizontalSpacer;
    QGroupBox *sessionGroupBox;
    QVBoxLayout *verticalLayout_3;
    QListWidget *sessionList;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *newSessionBtn;
    QPushButton *closeSessionBtn;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *ACPOption)
    {
        if (ACPOption->objectName().isEmpty())
            ACPOption->setObjectName("ACPOption");
        verticalLayout = new QVBoxLayout(ACPOption);
        verticalLayout->setObjectName("verticalLayout");
        groupBox = new QGroupBox(ACPOption);
        groupBox->setObjectName("groupBox");
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName("verticalLayout_2");
        agentList = new QListWidget(groupBox);
        agentList->setObjectName("agentList");
        agentList->setAlternatingRowColors(true);

        verticalLayout_2->addWidget(agentList);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        addAgentBtn = new QPushButton(groupBox);
        addAgentBtn->setObjectName("addAgentBtn");

        horizontalLayout->addWidget(addAgentBtn);

        removeAgentBtn = new QPushButton(groupBox);
        removeAgentBtn->setObjectName("removeAgentBtn");

        horizontalLayout->addWidget(removeAgentBtn);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout);


        verticalLayout->addWidget(groupBox);

        sessionGroupBox = new QGroupBox(ACPOption);
        sessionGroupBox->setObjectName("sessionGroupBox");
        verticalLayout_3 = new QVBoxLayout(sessionGroupBox);
        verticalLayout_3->setObjectName("verticalLayout_3");
        sessionList = new QListWidget(sessionGroupBox);
        sessionList->setObjectName("sessionList");
        sessionList->setAlternatingRowColors(true);

        verticalLayout_3->addWidget(sessionList);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        newSessionBtn = new QPushButton(sessionGroupBox);
        newSessionBtn->setObjectName("newSessionBtn");

        horizontalLayout_2->addWidget(newSessionBtn);

        closeSessionBtn = new QPushButton(sessionGroupBox);
        closeSessionBtn->setObjectName("closeSessionBtn");

        horizontalLayout_2->addWidget(closeSessionBtn);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_3->addLayout(horizontalLayout_2);


        verticalLayout->addWidget(sessionGroupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(ACPOption);

        QMetaObject::connectSlotsByName(ACPOption);
    } // setupUi

    void retranslateUi(QWidget *ACPOption)
    {
        groupBox->setTitle(QCoreApplication::translate("ACPOption", "ACP Agents", nullptr));
        addAgentBtn->setText(QCoreApplication::translate("ACPOption", "Add Agent", nullptr));
        removeAgentBtn->setText(QCoreApplication::translate("ACPOption", "Remove", nullptr));
        sessionGroupBox->setTitle(QCoreApplication::translate("ACPOption", "Active Sessions", nullptr));
        newSessionBtn->setText(QCoreApplication::translate("ACPOption", "New Session", nullptr));
        closeSessionBtn->setText(QCoreApplication::translate("ACPOption", "Close", nullptr));
        (void)ACPOption;
    } // retranslateUi

};

namespace Ui {
    class ACPOption: public Ui_ACPOption {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACPOPTION_H
