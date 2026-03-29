/********************************************************************************
** Form generated from reading UI file 'markdownbatchwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MARKDOWNBATCHWIDGET_H
#define UI_MARKDOWNBATCHWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MarkdownBatchWidget
{
public:
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox_4;
    QHBoxLayout *horizontalLayout_4;
    QTreeView *filesTreeView;
    QVBoxLayout *verticalLayout;
    QPushButton *importFolderPushButton;
    QPushButton *addFilesPushButton;
    QPushButton *moveUpPushButton;
    QPushButton *moveDownPushButton;
    QPushButton *removePushButton;
    QPushButton *removeAllPushButton;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *exportFolderLineEdit;
    QPushButton *browserExportFolderPushButton;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *useCssCheckBox;
    QComboBox *cssComboBox;
    QCheckBox *mergeHrCheckBox;
    QCheckBox *mergePageBreakCheckBox;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *splitHtmlPushButton;
    QPushButton *splitPdfPushButton;
    QPushButton *mergetHtmlPushButton;
    QPushButton *mergePdfPushButton;
    QPushButton *mergePrintPreviwPushButton;
    QPushButton *mergetPrintPushButton;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_2;
    QPlainTextEdit *logPlainTextEdit;

    void setupUi(QWidget *MarkdownBatchWidget)
    {
        if (MarkdownBatchWidget->objectName().isEmpty())
            MarkdownBatchWidget->setObjectName("MarkdownBatchWidget");
        MarkdownBatchWidget->resize(601, 487);
        verticalLayout_3 = new QVBoxLayout(MarkdownBatchWidget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        groupBox_4 = new QGroupBox(MarkdownBatchWidget);
        groupBox_4->setObjectName("groupBox_4");
        horizontalLayout_4 = new QHBoxLayout(groupBox_4);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        filesTreeView = new QTreeView(groupBox_4);
        filesTreeView->setObjectName("filesTreeView");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(filesTreeView->sizePolicy().hasHeightForWidth());
        filesTreeView->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(filesTreeView);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        importFolderPushButton = new QPushButton(groupBox_4);
        importFolderPushButton->setObjectName("importFolderPushButton");

        verticalLayout->addWidget(importFolderPushButton);

        addFilesPushButton = new QPushButton(groupBox_4);
        addFilesPushButton->setObjectName("addFilesPushButton");

        verticalLayout->addWidget(addFilesPushButton);

        moveUpPushButton = new QPushButton(groupBox_4);
        moveUpPushButton->setObjectName("moveUpPushButton");

        verticalLayout->addWidget(moveUpPushButton);

        moveDownPushButton = new QPushButton(groupBox_4);
        moveDownPushButton->setObjectName("moveDownPushButton");

        verticalLayout->addWidget(moveDownPushButton);

        removePushButton = new QPushButton(groupBox_4);
        removePushButton->setObjectName("removePushButton");

        verticalLayout->addWidget(removePushButton);

        removeAllPushButton = new QPushButton(groupBox_4);
        removeAllPushButton->setObjectName("removeAllPushButton");

        verticalLayout->addWidget(removeAllPushButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout_4->addLayout(verticalLayout);


        verticalLayout_3->addWidget(groupBox_4);

        groupBox_2 = new QGroupBox(MarkdownBatchWidget);
        groupBox_2->setObjectName("groupBox_2");
        verticalLayout_4 = new QVBoxLayout(groupBox_2);
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(groupBox_2);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        exportFolderLineEdit = new QLineEdit(groupBox_2);
        exportFolderLineEdit->setObjectName("exportFolderLineEdit");

        horizontalLayout->addWidget(exportFolderLineEdit);

        browserExportFolderPushButton = new QPushButton(groupBox_2);
        browserExportFolderPushButton->setObjectName("browserExportFolderPushButton");

        horizontalLayout->addWidget(browserExportFolderPushButton);


        verticalLayout_4->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        useCssCheckBox = new QCheckBox(groupBox_2);
        useCssCheckBox->setObjectName("useCssCheckBox");

        horizontalLayout_3->addWidget(useCssCheckBox);

        cssComboBox = new QComboBox(groupBox_2);
        cssComboBox->setObjectName("cssComboBox");

        horizontalLayout_3->addWidget(cssComboBox);

        mergeHrCheckBox = new QCheckBox(groupBox_2);
        mergeHrCheckBox->setObjectName("mergeHrCheckBox");

        horizontalLayout_3->addWidget(mergeHrCheckBox);

        mergePageBreakCheckBox = new QCheckBox(groupBox_2);
        mergePageBreakCheckBox->setObjectName("mergePageBreakCheckBox");

        horizontalLayout_3->addWidget(mergePageBreakCheckBox);

        horizontalSpacer = new QSpacerItem(37, 17, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        verticalLayout_4->addLayout(horizontalLayout_3);


        verticalLayout_3->addWidget(groupBox_2);

        groupBox = new QGroupBox(MarkdownBatchWidget);
        groupBox->setObjectName("groupBox");
        horizontalLayout_2 = new QHBoxLayout(groupBox);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        splitHtmlPushButton = new QPushButton(groupBox);
        splitHtmlPushButton->setObjectName("splitHtmlPushButton");

        horizontalLayout_2->addWidget(splitHtmlPushButton);

        splitPdfPushButton = new QPushButton(groupBox);
        splitPdfPushButton->setObjectName("splitPdfPushButton");

        horizontalLayout_2->addWidget(splitPdfPushButton);

        mergetHtmlPushButton = new QPushButton(groupBox);
        mergetHtmlPushButton->setObjectName("mergetHtmlPushButton");

        horizontalLayout_2->addWidget(mergetHtmlPushButton);

        mergePdfPushButton = new QPushButton(groupBox);
        mergePdfPushButton->setObjectName("mergePdfPushButton");

        horizontalLayout_2->addWidget(mergePdfPushButton);

        mergePrintPreviwPushButton = new QPushButton(groupBox);
        mergePrintPreviwPushButton->setObjectName("mergePrintPreviwPushButton");

        horizontalLayout_2->addWidget(mergePrintPreviwPushButton);

        mergetPrintPushButton = new QPushButton(groupBox);
        mergetPrintPushButton->setObjectName("mergetPrintPushButton");

        horizontalLayout_2->addWidget(mergetPrintPushButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_3->addWidget(groupBox);

        groupBox_3 = new QGroupBox(MarkdownBatchWidget);
        groupBox_3->setObjectName("groupBox_3");
        verticalLayout_2 = new QVBoxLayout(groupBox_3);
        verticalLayout_2->setObjectName("verticalLayout_2");
        logPlainTextEdit = new QPlainTextEdit(groupBox_3);
        logPlainTextEdit->setObjectName("logPlainTextEdit");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(logPlainTextEdit->sizePolicy().hasHeightForWidth());
        logPlainTextEdit->setSizePolicy(sizePolicy1);
        logPlainTextEdit->setBaseSize(QSize(0, 0));

        verticalLayout_2->addWidget(logPlainTextEdit);


        verticalLayout_3->addWidget(groupBox_3);

        verticalLayout_3->setStretch(3, 1);
        groupBox->raise();
        groupBox_2->raise();
        groupBox_3->raise();
        groupBox_4->raise();
        QWidget::setTabOrder(filesTreeView, importFolderPushButton);
        QWidget::setTabOrder(importFolderPushButton, addFilesPushButton);
        QWidget::setTabOrder(addFilesPushButton, removeAllPushButton);
        QWidget::setTabOrder(removeAllPushButton, useCssCheckBox);
        QWidget::setTabOrder(useCssCheckBox, cssComboBox);
        QWidget::setTabOrder(cssComboBox, exportFolderLineEdit);
        QWidget::setTabOrder(exportFolderLineEdit, browserExportFolderPushButton);
        QWidget::setTabOrder(browserExportFolderPushButton, splitHtmlPushButton);
        QWidget::setTabOrder(splitHtmlPushButton, splitPdfPushButton);
        QWidget::setTabOrder(splitPdfPushButton, mergetHtmlPushButton);
        QWidget::setTabOrder(mergetHtmlPushButton, mergePdfPushButton);
        QWidget::setTabOrder(mergePdfPushButton, mergePrintPreviwPushButton);
        QWidget::setTabOrder(mergePrintPreviwPushButton, mergetPrintPushButton);
        QWidget::setTabOrder(mergetPrintPushButton, logPlainTextEdit);

        retranslateUi(MarkdownBatchWidget);

        QMetaObject::connectSlotsByName(MarkdownBatchWidget);
    } // setupUi

    void retranslateUi(QWidget *MarkdownBatchWidget)
    {
        MarkdownBatchWidget->setWindowTitle(QCoreApplication::translate("MarkdownBatchWidget", "Form", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("MarkdownBatchWidget", "Markdown Source Files", nullptr));
        importFolderPushButton->setText(QCoreApplication::translate("MarkdownBatchWidget", "Import Folder...", nullptr));
        addFilesPushButton->setText(QCoreApplication::translate("MarkdownBatchWidget", "Add Files...", nullptr));
        moveUpPushButton->setText(QCoreApplication::translate("MarkdownBatchWidget", "Move Up", nullptr));
        moveDownPushButton->setText(QCoreApplication::translate("MarkdownBatchWidget", "Move Down", nullptr));
        removePushButton->setText(QCoreApplication::translate("MarkdownBatchWidget", "Remove", nullptr));
        removeAllPushButton->setText(QCoreApplication::translate("MarkdownBatchWidget", "Remove All", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MarkdownBatchWidget", "Options", nullptr));
        label->setText(QCoreApplication::translate("MarkdownBatchWidget", "Export Folder:", nullptr));
        browserExportFolderPushButton->setText(QCoreApplication::translate("MarkdownBatchWidget", "Browse...", nullptr));
        useCssCheckBox->setText(QCoreApplication::translate("MarkdownBatchWidget", "Use CSS", nullptr));
        mergeHrCheckBox->setText(QCoreApplication::translate("MarkdownBatchWidget", "Insert horizontal line between merged files", nullptr));
        mergePageBreakCheckBox->setText(QCoreApplication::translate("MarkdownBatchWidget", "Insert page break between merged files", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MarkdownBatchWidget", "Export", nullptr));
        splitHtmlPushButton->setText(QCoreApplication::translate("MarkdownBatchWidget", "Export Separated HTML", nullptr));
        splitPdfPushButton->setText(QCoreApplication::translate("MarkdownBatchWidget", "Export Separated PDF", nullptr));
        mergetHtmlPushButton->setText(QCoreApplication::translate("MarkdownBatchWidget", "Export Merged HTML...", nullptr));
        mergePdfPushButton->setText(QCoreApplication::translate("MarkdownBatchWidget", "Export Merged PDF...", nullptr));
        mergePrintPreviwPushButton->setText(QCoreApplication::translate("MarkdownBatchWidget", "Print Preview Merged...", nullptr));
        mergetPrintPushButton->setText(QCoreApplication::translate("MarkdownBatchWidget", "Print Merged", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MarkdownBatchWidget", "Log", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MarkdownBatchWidget: public Ui_MarkdownBatchWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MARKDOWNBATCHWIDGET_H
