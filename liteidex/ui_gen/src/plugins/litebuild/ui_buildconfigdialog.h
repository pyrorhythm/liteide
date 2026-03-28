/********************************************************************************
** Form generated from reading UI file 'buildconfigdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUILDCONFIGDIALOG_H
#define UI_BUILDCONFIGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BuildConfigDialog
{
public:
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *buildFileLabel;
    QLabel *label_3;
    QLabel *buildIdLabel;
    QLabel *label;
    QTabWidget *tabWidget;
    QWidget *tab_gopath;
    QVBoxLayout *verticalLayout_6;
    QGroupBox *gopathInfoGroupBox;
    QVBoxLayout *verticalLayout_8;
    QLabel *gopathInfoHeadLabel;
    QLabel *gopathInfoLabel;
    QGroupBox *useCustomGopathGroupBox;
    QVBoxLayout *verticalLayout_5;
    QCheckBox *inheritSysGopathCheckBox;
    QLabel *sysGopathLabel;
    QCheckBox *inheritLiteGopathCheckBox;
    QLabel *liteGopathLabel;
    QHBoxLayout *horizontalLayout;
    QCheckBox *customGopathCheckBox;
    QSpacerItem *horizontalSpacer;
    QPushButton *customGopathBrowserButton;
    QPushButton *customGopathClear;
    QPlainTextEdit *customGopathEdit;
    QWidget *tab_liteide;
    QVBoxLayout *verticalLayout_3;
    QTableView *liteideTableView;
    QWidget *tab_config;
    QVBoxLayout *verticalLayout_2;
    QTableView *configTableView;
    QWidget *tab_action;
    QVBoxLayout *verticalLayout_7;
    QTableView *actionTableView;
    QWidget *tab_custom;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *customResetAllButton;
    QTableView *customTableView;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *BuildConfigDialog)
    {
        if (BuildConfigDialog->objectName().isEmpty())
            BuildConfigDialog->setObjectName("BuildConfigDialog");
        BuildConfigDialog->resize(790, 604);
        verticalLayout_4 = new QVBoxLayout(BuildConfigDialog);
        verticalLayout_4->setObjectName("verticalLayout_4");
        groupBox = new QGroupBox(BuildConfigDialog);
        groupBox->setObjectName("groupBox");
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName("gridLayout");
        buildFileLabel = new QLabel(groupBox);
        buildFileLabel->setObjectName("buildFileLabel");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(buildFileLabel->sizePolicy().hasHeightForWidth());
        buildFileLabel->setSizePolicy(sizePolicy);
        buildFileLabel->setFrameShape(QFrame::Panel);
        buildFileLabel->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(buildFileLabel, 1, 1, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        buildIdLabel = new QLabel(groupBox);
        buildIdLabel->setObjectName("buildIdLabel");
        sizePolicy.setHeightForWidth(buildIdLabel->sizePolicy().hasHeightForWidth());
        buildIdLabel->setSizePolicy(sizePolicy);
        buildIdLabel->setFrameShape(QFrame::Panel);
        buildIdLabel->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(buildIdLabel, 0, 1, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);


        verticalLayout_4->addWidget(groupBox);

        tabWidget = new QTabWidget(BuildConfigDialog);
        tabWidget->setObjectName("tabWidget");
        tab_gopath = new QWidget();
        tab_gopath->setObjectName("tab_gopath");
        verticalLayout_6 = new QVBoxLayout(tab_gopath);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(2, 2, 2, 2);
        gopathInfoGroupBox = new QGroupBox(tab_gopath);
        gopathInfoGroupBox->setObjectName("gopathInfoGroupBox");
        verticalLayout_8 = new QVBoxLayout(gopathInfoGroupBox);
        verticalLayout_8->setObjectName("verticalLayout_8");
        gopathInfoHeadLabel = new QLabel(gopathInfoGroupBox);
        gopathInfoHeadLabel->setObjectName("gopathInfoHeadLabel");
        gopathInfoHeadLabel->setFrameShape(QFrame::Panel);
        gopathInfoHeadLabel->setFrameShadow(QFrame::Sunken);

        verticalLayout_8->addWidget(gopathInfoHeadLabel);

        gopathInfoLabel = new QLabel(gopathInfoGroupBox);
        gopathInfoLabel->setObjectName("gopathInfoLabel");
        gopathInfoLabel->setMinimumSize(QSize(0, 60));
        gopathInfoLabel->setFrameShape(QFrame::Panel);
        gopathInfoLabel->setFrameShadow(QFrame::Sunken);
        gopathInfoLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        verticalLayout_8->addWidget(gopathInfoLabel);


        verticalLayout_6->addWidget(gopathInfoGroupBox);

        useCustomGopathGroupBox = new QGroupBox(tab_gopath);
        useCustomGopathGroupBox->setObjectName("useCustomGopathGroupBox");
        useCustomGopathGroupBox->setCheckable(true);
        useCustomGopathGroupBox->setChecked(false);
        verticalLayout_5 = new QVBoxLayout(useCustomGopathGroupBox);
        verticalLayout_5->setObjectName("verticalLayout_5");
        inheritSysGopathCheckBox = new QCheckBox(useCustomGopathGroupBox);
        inheritSysGopathCheckBox->setObjectName("inheritSysGopathCheckBox");

        verticalLayout_5->addWidget(inheritSysGopathCheckBox);

        sysGopathLabel = new QLabel(useCustomGopathGroupBox);
        sysGopathLabel->setObjectName("sysGopathLabel");
        sysGopathLabel->setFrameShape(QFrame::Panel);
        sysGopathLabel->setFrameShadow(QFrame::Sunken);

        verticalLayout_5->addWidget(sysGopathLabel);

        inheritLiteGopathCheckBox = new QCheckBox(useCustomGopathGroupBox);
        inheritLiteGopathCheckBox->setObjectName("inheritLiteGopathCheckBox");

        verticalLayout_5->addWidget(inheritLiteGopathCheckBox);

        liteGopathLabel = new QLabel(useCustomGopathGroupBox);
        liteGopathLabel->setObjectName("liteGopathLabel");
        liteGopathLabel->setFrameShape(QFrame::Panel);
        liteGopathLabel->setFrameShadow(QFrame::Sunken);

        verticalLayout_5->addWidget(liteGopathLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        customGopathCheckBox = new QCheckBox(useCustomGopathGroupBox);
        customGopathCheckBox->setObjectName("customGopathCheckBox");

        horizontalLayout->addWidget(customGopathCheckBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        customGopathBrowserButton = new QPushButton(useCustomGopathGroupBox);
        customGopathBrowserButton->setObjectName("customGopathBrowserButton");

        horizontalLayout->addWidget(customGopathBrowserButton);

        customGopathClear = new QPushButton(useCustomGopathGroupBox);
        customGopathClear->setObjectName("customGopathClear");

        horizontalLayout->addWidget(customGopathClear);


        verticalLayout_5->addLayout(horizontalLayout);

        customGopathEdit = new QPlainTextEdit(useCustomGopathGroupBox);
        customGopathEdit->setObjectName("customGopathEdit");

        verticalLayout_5->addWidget(customGopathEdit);


        verticalLayout_6->addWidget(useCustomGopathGroupBox);

        tabWidget->addTab(tab_gopath, QString());
        tab_liteide = new QWidget();
        tab_liteide->setObjectName("tab_liteide");
        verticalLayout_3 = new QVBoxLayout(tab_liteide);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(2, 2, 2, 2);
        liteideTableView = new QTableView(tab_liteide);
        liteideTableView->setObjectName("liteideTableView");

        verticalLayout_3->addWidget(liteideTableView);

        tabWidget->addTab(tab_liteide, QString());
        tab_config = new QWidget();
        tab_config->setObjectName("tab_config");
        verticalLayout_2 = new QVBoxLayout(tab_config);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(2, 2, 2, 2);
        configTableView = new QTableView(tab_config);
        configTableView->setObjectName("configTableView");

        verticalLayout_2->addWidget(configTableView);

        tabWidget->addTab(tab_config, QString());
        tab_action = new QWidget();
        tab_action->setObjectName("tab_action");
        verticalLayout_7 = new QVBoxLayout(tab_action);
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalLayout_7->setContentsMargins(2, 2, 2, 2);
        actionTableView = new QTableView(tab_action);
        actionTableView->setObjectName("actionTableView");

        verticalLayout_7->addWidget(actionTableView);

        tabWidget->addTab(tab_action, QString());
        tab_custom = new QWidget();
        tab_custom->setObjectName("tab_custom");
        verticalLayout = new QVBoxLayout(tab_custom);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(2, 2, 2, 2);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        customResetAllButton = new QPushButton(tab_custom);
        customResetAllButton->setObjectName("customResetAllButton");

        horizontalLayout_2->addWidget(customResetAllButton);


        verticalLayout->addLayout(horizontalLayout_2);

        customTableView = new QTableView(tab_custom);
        customTableView->setObjectName("customTableView");

        verticalLayout->addWidget(customTableView);

        tabWidget->addTab(tab_custom, QString());

        verticalLayout_4->addWidget(tabWidget);

        buttonBox = new QDialogButtonBox(BuildConfigDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_4->addWidget(buttonBox);


        retranslateUi(BuildConfigDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, BuildConfigDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, BuildConfigDialog, qOverload<>(&QDialog::reject));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(BuildConfigDialog);
    } // setupUi

    void retranslateUi(QDialog *BuildConfigDialog)
    {
        BuildConfigDialog->setWindowTitle(QCoreApplication::translate("BuildConfigDialog", "Build Configuration", nullptr));
        groupBox->setTitle(QString());
        buildFileLabel->setText(QString());
        label_3->setText(QCoreApplication::translate("BuildConfigDialog", "Build Path", nullptr));
        buildIdLabel->setText(QString());
        label->setText(QCoreApplication::translate("BuildConfigDialog", "Build ID", nullptr));
        gopathInfoGroupBox->setTitle(QCoreApplication::translate("BuildConfigDialog", "GOPATH information", nullptr));
        gopathInfoHeadLabel->setText(QString());
        gopathInfoLabel->setText(QString());
        useCustomGopathGroupBox->setTitle(QCoreApplication::translate("BuildConfigDialog", "Use Custom GOPATH for Build Path", nullptr));
        inheritSysGopathCheckBox->setText(QCoreApplication::translate("BuildConfigDialog", "Inherit System GOPATH", nullptr));
        sysGopathLabel->setText(QString());
        inheritLiteGopathCheckBox->setText(QCoreApplication::translate("BuildConfigDialog", "Inherit LiteIDE GOPATH", nullptr));
        liteGopathLabel->setText(QString());
        customGopathCheckBox->setText(QCoreApplication::translate("BuildConfigDialog", "Custom GOPATH (one per line)", nullptr));
        customGopathBrowserButton->setText(QCoreApplication::translate("BuildConfigDialog", "Add Directory...", nullptr));
        customGopathClear->setText(QCoreApplication::translate("BuildConfigDialog", "Clear", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_gopath), QCoreApplication::translate("BuildConfigDialog", "GOPATH", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_liteide), QCoreApplication::translate("BuildConfigDialog", "LiteIDE", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_config), QCoreApplication::translate("BuildConfigDialog", "Config", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_action), QCoreApplication::translate("BuildConfigDialog", "Action", nullptr));
        customResetAllButton->setText(QCoreApplication::translate("BuildConfigDialog", "Reset all to initial value", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_custom), QCoreApplication::translate("BuildConfigDialog", "Custom", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BuildConfigDialog: public Ui_BuildConfigDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUILDCONFIGDIALOG_H
