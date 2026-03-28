/********************************************************************************
** Form generated from reading UI file 'golangpackageoption.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GOLANGPACKAGEOPTION_H
#define UI_GOLANGPACKAGEOPTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GolangPackageOption
{
public:
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout;
    QLineEdit *editGoPrivate;
    QLineEdit *editGoNoSumdb;
    QComboBox *cmbGoProxy;
    QCheckBox *chkUseGoNoProxy;
    QLineEdit *editGoNoProxy;
    QCheckBox *chkUseGoProxy;
    QCheckBox *chkUseGoModule;
    QCheckBox *chkUseGoNoSumdb;
    QCheckBox *chkUseGoPrivate;
    QComboBox *cmbGoModule;
    QLabel *sysGoModuleInfo;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QCheckBox *chkUseSysGopath;
    QSpacerItem *horizontalSpacer;
    QPushButton *reloadButton;
    QPlainTextEdit *sysPathTextEdit;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *chkUseLiteGopath;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *browserButton;
    QPushButton *clearButton;
    QPlainTextEdit *litePathTextEdit;

    void setupUi(QWidget *GolangPackageOption)
    {
        if (GolangPackageOption->objectName().isEmpty())
            GolangPackageOption->setObjectName("GolangPackageOption");
        GolangPackageOption->resize(597, 412);
        verticalLayout_3 = new QVBoxLayout(GolangPackageOption);
        verticalLayout_3->setSpacing(2);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(4, 4, 4, 4);
        groupBox = new QGroupBox(GolangPackageOption);
        groupBox->setObjectName("groupBox");
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(2, 2, 2, 2);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        gridLayout->setHorizontalSpacing(10);
        gridLayout->setVerticalSpacing(1);
        editGoPrivate = new QLineEdit(groupBox);
        editGoPrivate->setObjectName("editGoPrivate");
        editGoPrivate->setEnabled(true);

        gridLayout->addWidget(editGoPrivate, 2, 1, 1, 2);

        editGoNoSumdb = new QLineEdit(groupBox);
        editGoNoSumdb->setObjectName("editGoNoSumdb");

        gridLayout->addWidget(editGoNoSumdb, 4, 1, 1, 2);

        cmbGoProxy = new QComboBox(groupBox);
        cmbGoProxy->setObjectName("cmbGoProxy");
        cmbGoProxy->setEditable(true);

        gridLayout->addWidget(cmbGoProxy, 1, 1, 1, 2);

        chkUseGoNoProxy = new QCheckBox(groupBox);
        chkUseGoNoProxy->setObjectName("chkUseGoNoProxy");

        gridLayout->addWidget(chkUseGoNoProxy, 3, 0, 1, 1);

        editGoNoProxy = new QLineEdit(groupBox);
        editGoNoProxy->setObjectName("editGoNoProxy");

        gridLayout->addWidget(editGoNoProxy, 3, 1, 1, 2);

        chkUseGoProxy = new QCheckBox(groupBox);
        chkUseGoProxy->setObjectName("chkUseGoProxy");

        gridLayout->addWidget(chkUseGoProxy, 1, 0, 1, 1);

        chkUseGoModule = new QCheckBox(groupBox);
        chkUseGoModule->setObjectName("chkUseGoModule");

        gridLayout->addWidget(chkUseGoModule, 0, 0, 1, 1);

        chkUseGoNoSumdb = new QCheckBox(groupBox);
        chkUseGoNoSumdb->setObjectName("chkUseGoNoSumdb");

        gridLayout->addWidget(chkUseGoNoSumdb, 4, 0, 1, 1);

        chkUseGoPrivate = new QCheckBox(groupBox);
        chkUseGoPrivate->setObjectName("chkUseGoPrivate");

        gridLayout->addWidget(chkUseGoPrivate, 2, 0, 1, 1);

        cmbGoModule = new QComboBox(groupBox);
        cmbGoModule->setObjectName("cmbGoModule");

        gridLayout->addWidget(cmbGoModule, 0, 1, 1, 1);

        sysGoModuleInfo = new QLabel(groupBox);
        sysGoModuleInfo->setObjectName("sysGoModuleInfo");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(sysGoModuleInfo->sizePolicy().hasHeightForWidth());
        sysGoModuleInfo->setSizePolicy(sizePolicy);

        gridLayout->addWidget(sysGoModuleInfo, 0, 2, 1, 1);


        verticalLayout_2->addLayout(gridLayout);


        verticalLayout_3->addWidget(groupBox);

        groupBox_2 = new QGroupBox(GolangPackageOption);
        groupBox_2->setObjectName("groupBox_2");
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setSpacing(2);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(2, 2, 2, 2);
        horizontalLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        horizontalLayout->setSpacing(-1);
#endif
        horizontalLayout->setObjectName("horizontalLayout");
        chkUseSysGopath = new QCheckBox(groupBox_2);
        chkUseSysGopath->setObjectName("chkUseSysGopath");
        chkUseSysGopath->setChecked(true);

        horizontalLayout->addWidget(chkUseSysGopath);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        reloadButton = new QPushButton(groupBox_2);
        reloadButton->setObjectName("reloadButton");

        horizontalLayout->addWidget(reloadButton);


        verticalLayout->addLayout(horizontalLayout);

        sysPathTextEdit = new QPlainTextEdit(groupBox_2);
        sysPathTextEdit->setObjectName("sysPathTextEdit");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(sysPathTextEdit->sizePolicy().hasHeightForWidth());
        sysPathTextEdit->setSizePolicy(sizePolicy1);
        sysPathTextEdit->setReadOnly(true);

        verticalLayout->addWidget(sysPathTextEdit);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        chkUseLiteGopath = new QCheckBox(groupBox_2);
        chkUseLiteGopath->setObjectName("chkUseLiteGopath");
        chkUseLiteGopath->setChecked(true);

        horizontalLayout_2->addWidget(chkUseLiteGopath);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        browserButton = new QPushButton(groupBox_2);
        browserButton->setObjectName("browserButton");

        horizontalLayout_2->addWidget(browserButton);

        clearButton = new QPushButton(groupBox_2);
        clearButton->setObjectName("clearButton");

        horizontalLayout_2->addWidget(clearButton);


        verticalLayout->addLayout(horizontalLayout_2);

        litePathTextEdit = new QPlainTextEdit(groupBox_2);
        litePathTextEdit->setObjectName("litePathTextEdit");
        sizePolicy1.setHeightForWidth(litePathTextEdit->sizePolicy().hasHeightForWidth());
        litePathTextEdit->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(litePathTextEdit);


        verticalLayout_3->addWidget(groupBox_2);


        retranslateUi(GolangPackageOption);

        QMetaObject::connectSlotsByName(GolangPackageOption);
    } // setupUi

    void retranslateUi(QWidget *GolangPackageOption)
    {
        GolangPackageOption->setWindowTitle(QCoreApplication::translate("GolangPackageOption", "Manage GOPATH / Modules", nullptr));
        groupBox->setTitle(QCoreApplication::translate("GolangPackageOption", "Go Modules", nullptr));
        chkUseGoNoProxy->setText(QCoreApplication::translate("GolangPackageOption", "Custom GONOPROXY", nullptr));
        chkUseGoProxy->setText(QCoreApplication::translate("GolangPackageOption", "Custom GOPROXY", nullptr));
        chkUseGoModule->setText(QCoreApplication::translate("GolangPackageOption", "Custom GO111MODULE", nullptr));
        chkUseGoNoSumdb->setText(QCoreApplication::translate("GolangPackageOption", "Custom GONOSUMDB", nullptr));
        chkUseGoPrivate->setText(QCoreApplication::translate("GolangPackageOption", "Custom GOPRIVATE", nullptr));
        sysGoModuleInfo->setText(QCoreApplication::translate("GolangPackageOption", "TextLabel", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("GolangPackageOption", "GOPATH", nullptr));
        chkUseSysGopath->setText(QCoreApplication::translate("GolangPackageOption", "Use System GOPATH", nullptr));
        reloadButton->setText(QCoreApplication::translate("GolangPackageOption", "Reload", nullptr));
        chkUseLiteGopath->setText(QCoreApplication::translate("GolangPackageOption", "Use Custom GOPATH (one per line)", nullptr));
        browserButton->setText(QCoreApplication::translate("GolangPackageOption", "Add Directory...", nullptr));
        clearButton->setText(QCoreApplication::translate("GolangPackageOption", "Clear", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GolangPackageOption: public Ui_GolangPackageOption {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GOLANGPACKAGEOPTION_H
