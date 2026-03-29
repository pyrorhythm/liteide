/********************************************************************************
** Form generated from reading UI file 'liteeditoroption.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LITEEDITOROPTION_H
#define UI_LITEEDITOROPTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LiteEditorOption
{
public:
    QVBoxLayout *verticalLayout_6;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_10;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QFontComboBox *fontComboBox;
    QCheckBox *monospaceFontCheckBox;
    QSpacerItem *horizontalSpacer_7;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label;
    QComboBox *sizeComboBox;
    QLabel *label_6;
    QSpinBox *fontZoomSpinBox;
    QCheckBox *antialiasCheckBox;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *restoreDefaultFontButton;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QComboBox *styleComboBox;
    QPushButton *editPushButton;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;
    QWidget *tab_4;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox_6;
    QHBoxLayout *horizontalLayout_5;
    QCheckBox *autoBraces0CheckBox;
    QCheckBox *autoBraces1CheckBox;
    QCheckBox *autoBraces2CheckBox;
    QCheckBox *autoBraces3CheckBox;
    QCheckBox *autoBraces4CheckBox;
    QCheckBox *autoBraces5CheckBox;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *autoIndentCheckBox;
    QCheckBox *completerFuzzyCheckBox;
    QCheckBox *completerCaseSensitiveCheckBox;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLineEdit *preMinLineEdit;
    QSpacerItem *horizontalSpacer_3;
    QCheckBox *cleanCompleterCacheCheckBox;
    QCheckBox *cleanWhitespaceOnSaveCheckBox;
    QCheckBox *wheelZoomingCheckBox;
    QCheckBox *enableCopyToHtmlCheckBox;
    QCheckBox *allowVscrollLastLineCheckBox;
    QSpacerItem *verticalSpacer_2;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_7;
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout;
    QCheckBox *noprintCheckBox;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_8;
    QCheckBox *codeFoldVisibleCheckBox;
    QCheckBox *visualizeWhitespaceCheckBox;
    QCheckBox *eofVisibleCheckBox;
    QCheckBox *defaultWordWrapCheckBox;
    QCheckBox *lineNumberVisibleCheckBox;
    QCheckBox *indentLineCheckBox;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *rightLineVisibleCheckBox;
    QSpinBox *rightLineWidthSpinBox;
    QSpacerItem *horizontalSpacer_4;
    QCheckBox *offsetCheckBox;
    QSpacerItem *verticalSpacer_3;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_5;
    QTreeView *mimeTreeView;

    void setupUi(QWidget *LiteEditorOption)
    {
        if (LiteEditorOption->objectName().isEmpty())
            LiteEditorOption->setObjectName("LiteEditorOption");
        LiteEditorOption->resize(630, 390);
        verticalLayout_6 = new QVBoxLayout(LiteEditorOption);
        verticalLayout_6->setObjectName("verticalLayout_6");
        tabWidget = new QTabWidget(LiteEditorOption);
        tabWidget->setObjectName("tabWidget");
        tab = new QWidget();
        tab->setObjectName("tab");
        verticalLayout_3 = new QVBoxLayout(tab);
        verticalLayout_3->setObjectName("verticalLayout_3");
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName("groupBox");
        verticalLayout_10 = new QVBoxLayout(groupBox);
        verticalLayout_10->setObjectName("verticalLayout_10");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        horizontalLayout->addWidget(label_2);

        fontComboBox = new QFontComboBox(groupBox);
        fontComboBox->setObjectName("fontComboBox");

        horizontalLayout->addWidget(fontComboBox);

        monospaceFontCheckBox = new QCheckBox(groupBox);
        monospaceFontCheckBox->setObjectName("monospaceFontCheckBox");

        horizontalLayout->addWidget(monospaceFontCheckBox);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_7);


        verticalLayout_10->addLayout(horizontalLayout);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label = new QLabel(groupBox);
        label->setObjectName("label");

        horizontalLayout_7->addWidget(label);

        sizeComboBox = new QComboBox(groupBox);
        sizeComboBox->setObjectName("sizeComboBox");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(sizeComboBox->sizePolicy().hasHeightForWidth());
        sizeComboBox->setSizePolicy(sizePolicy);
        sizeComboBox->setEditable(false);

        horizontalLayout_7->addWidget(sizeComboBox);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName("label_6");

        horizontalLayout_7->addWidget(label_6);

        fontZoomSpinBox = new QSpinBox(groupBox);
        fontZoomSpinBox->setObjectName("fontZoomSpinBox");
        fontZoomSpinBox->setMinimum(10);
        fontZoomSpinBox->setMaximum(1000);
        fontZoomSpinBox->setSingleStep(10);
        fontZoomSpinBox->setValue(100);

        horizontalLayout_7->addWidget(fontZoomSpinBox);

        antialiasCheckBox = new QCheckBox(groupBox);
        antialiasCheckBox->setObjectName("antialiasCheckBox");

        horizontalLayout_7->addWidget(antialiasCheckBox);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_6);

        restoreDefaultFontButton = new QPushButton(groupBox);
        restoreDefaultFontButton->setObjectName("restoreDefaultFontButton");

        horizontalLayout_7->addWidget(restoreDefaultFontButton);


        verticalLayout_10->addLayout(horizontalLayout_7);


        verticalLayout_3->addWidget(groupBox);

        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName("groupBox_2");
        verticalLayout_9 = new QVBoxLayout(groupBox_2);
        verticalLayout_9->setObjectName("verticalLayout_9");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName("label_3");

        horizontalLayout_2->addWidget(label_3);

        styleComboBox = new QComboBox(groupBox_2);
        styleComboBox->setObjectName("styleComboBox");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(styleComboBox->sizePolicy().hasHeightForWidth());
        styleComboBox->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(styleComboBox);

        editPushButton = new QPushButton(groupBox_2);
        editPushButton->setObjectName("editPushButton");

        horizontalLayout_2->addWidget(editPushButton);

        horizontalSpacer_2 = new QSpacerItem(37, 17, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_9->addLayout(horizontalLayout_2);


        verticalLayout_3->addWidget(groupBox_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        tabWidget->addTab(tab, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName("tab_4");
        verticalLayout_4 = new QVBoxLayout(tab_4);
        verticalLayout_4->setObjectName("verticalLayout_4");
        groupBox_6 = new QGroupBox(tab_4);
        groupBox_6->setObjectName("groupBox_6");
        horizontalLayout_5 = new QHBoxLayout(groupBox_6);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        autoBraces0CheckBox = new QCheckBox(groupBox_6);
        autoBraces0CheckBox->setObjectName("autoBraces0CheckBox");
#if QT_CONFIG(tooltip)
        autoBraces0CheckBox->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
        autoBraces0CheckBox->setText(QString::fromUtf8("{}"));

        horizontalLayout_5->addWidget(autoBraces0CheckBox);

        autoBraces1CheckBox = new QCheckBox(groupBox_6);
        autoBraces1CheckBox->setObjectName("autoBraces1CheckBox");
#if QT_CONFIG(tooltip)
        autoBraces1CheckBox->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
        autoBraces1CheckBox->setText(QString::fromUtf8(" ()"));

        horizontalLayout_5->addWidget(autoBraces1CheckBox);

        autoBraces2CheckBox = new QCheckBox(groupBox_6);
        autoBraces2CheckBox->setObjectName("autoBraces2CheckBox");
#if QT_CONFIG(tooltip)
        autoBraces2CheckBox->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
        autoBraces2CheckBox->setText(QString::fromUtf8("[]"));

        horizontalLayout_5->addWidget(autoBraces2CheckBox);

        autoBraces3CheckBox = new QCheckBox(groupBox_6);
        autoBraces3CheckBox->setObjectName("autoBraces3CheckBox");
#if QT_CONFIG(tooltip)
        autoBraces3CheckBox->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
        autoBraces3CheckBox->setText(QString::fromUtf8("''"));

        horizontalLayout_5->addWidget(autoBraces3CheckBox);

        autoBraces4CheckBox = new QCheckBox(groupBox_6);
        autoBraces4CheckBox->setObjectName("autoBraces4CheckBox");
#if QT_CONFIG(tooltip)
        autoBraces4CheckBox->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
        autoBraces4CheckBox->setText(QString::fromUtf8("\"\""));

        horizontalLayout_5->addWidget(autoBraces4CheckBox);

        autoBraces5CheckBox = new QCheckBox(groupBox_6);
        autoBraces5CheckBox->setObjectName("autoBraces5CheckBox");
        autoBraces5CheckBox->setText(QString::fromUtf8("``"));

        horizontalLayout_5->addWidget(autoBraces5CheckBox);


        verticalLayout_4->addWidget(groupBox_6);

        groupBox_3 = new QGroupBox(tab_4);
        groupBox_3->setObjectName("groupBox_3");
        verticalLayout_2 = new QVBoxLayout(groupBox_3);
        verticalLayout_2->setObjectName("verticalLayout_2");
        autoIndentCheckBox = new QCheckBox(groupBox_3);
        autoIndentCheckBox->setObjectName("autoIndentCheckBox");

        verticalLayout_2->addWidget(autoIndentCheckBox);

        completerFuzzyCheckBox = new QCheckBox(groupBox_3);
        completerFuzzyCheckBox->setObjectName("completerFuzzyCheckBox");

        verticalLayout_2->addWidget(completerFuzzyCheckBox);

        completerCaseSensitiveCheckBox = new QCheckBox(groupBox_3);
        completerCaseSensitiveCheckBox->setObjectName("completerCaseSensitiveCheckBox");

        verticalLayout_2->addWidget(completerCaseSensitiveCheckBox);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName("label_4");

        horizontalLayout_3->addWidget(label_4);

        preMinLineEdit = new QLineEdit(groupBox_3);
        preMinLineEdit->setObjectName("preMinLineEdit");
        sizePolicy.setHeightForWidth(preMinLineEdit->sizePolicy().hasHeightForWidth());
        preMinLineEdit->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(preMinLineEdit);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        horizontalLayout_3->setStretch(0, 1);
        horizontalLayout_3->setStretch(1, 1);
        horizontalLayout_3->setStretch(2, 6);

        verticalLayout_2->addLayout(horizontalLayout_3);

        cleanCompleterCacheCheckBox = new QCheckBox(groupBox_3);
        cleanCompleterCacheCheckBox->setObjectName("cleanCompleterCacheCheckBox");

        verticalLayout_2->addWidget(cleanCompleterCacheCheckBox);

        cleanWhitespaceOnSaveCheckBox = new QCheckBox(groupBox_3);
        cleanWhitespaceOnSaveCheckBox->setObjectName("cleanWhitespaceOnSaveCheckBox");

        verticalLayout_2->addWidget(cleanWhitespaceOnSaveCheckBox);

        wheelZoomingCheckBox = new QCheckBox(groupBox_3);
        wheelZoomingCheckBox->setObjectName("wheelZoomingCheckBox");

        verticalLayout_2->addWidget(wheelZoomingCheckBox);

        enableCopyToHtmlCheckBox = new QCheckBox(groupBox_3);
        enableCopyToHtmlCheckBox->setObjectName("enableCopyToHtmlCheckBox");

        verticalLayout_2->addWidget(enableCopyToHtmlCheckBox);

        allowVscrollLastLineCheckBox = new QCheckBox(groupBox_3);
        allowVscrollLastLineCheckBox->setObjectName("allowVscrollLastLineCheckBox");

        verticalLayout_2->addWidget(allowVscrollLastLineCheckBox);


        verticalLayout_4->addWidget(groupBox_3);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_2);

        tabWidget->addTab(tab_4, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        verticalLayout_7 = new QVBoxLayout(tab_3);
        verticalLayout_7->setObjectName("verticalLayout_7");
        groupBox_5 = new QGroupBox(tab_3);
        groupBox_5->setObjectName("groupBox_5");
        verticalLayout = new QVBoxLayout(groupBox_5);
        verticalLayout->setObjectName("verticalLayout");
        noprintCheckBox = new QCheckBox(groupBox_5);
        noprintCheckBox->setObjectName("noprintCheckBox");

        verticalLayout->addWidget(noprintCheckBox);


        verticalLayout_7->addWidget(groupBox_5);

        groupBox_4 = new QGroupBox(tab_3);
        groupBox_4->setObjectName("groupBox_4");
        verticalLayout_8 = new QVBoxLayout(groupBox_4);
        verticalLayout_8->setObjectName("verticalLayout_8");
        codeFoldVisibleCheckBox = new QCheckBox(groupBox_4);
        codeFoldVisibleCheckBox->setObjectName("codeFoldVisibleCheckBox");

        verticalLayout_8->addWidget(codeFoldVisibleCheckBox);

        visualizeWhitespaceCheckBox = new QCheckBox(groupBox_4);
        visualizeWhitespaceCheckBox->setObjectName("visualizeWhitespaceCheckBox");

        verticalLayout_8->addWidget(visualizeWhitespaceCheckBox);

        eofVisibleCheckBox = new QCheckBox(groupBox_4);
        eofVisibleCheckBox->setObjectName("eofVisibleCheckBox");

        verticalLayout_8->addWidget(eofVisibleCheckBox);

        defaultWordWrapCheckBox = new QCheckBox(groupBox_4);
        defaultWordWrapCheckBox->setObjectName("defaultWordWrapCheckBox");

        verticalLayout_8->addWidget(defaultWordWrapCheckBox);

        lineNumberVisibleCheckBox = new QCheckBox(groupBox_4);
        lineNumberVisibleCheckBox->setObjectName("lineNumberVisibleCheckBox");

        verticalLayout_8->addWidget(lineNumberVisibleCheckBox);

        indentLineCheckBox = new QCheckBox(groupBox_4);
        indentLineCheckBox->setObjectName("indentLineCheckBox");

        verticalLayout_8->addWidget(indentLineCheckBox);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        rightLineVisibleCheckBox = new QCheckBox(groupBox_4);
        rightLineVisibleCheckBox->setObjectName("rightLineVisibleCheckBox");

        horizontalLayout_4->addWidget(rightLineVisibleCheckBox);

        rightLineWidthSpinBox = new QSpinBox(groupBox_4);
        rightLineWidthSpinBox->setObjectName("rightLineWidthSpinBox");
        rightLineWidthSpinBox->setMinimum(1);
        rightLineWidthSpinBox->setMaximum(1024);
        rightLineWidthSpinBox->setValue(80);

        horizontalLayout_4->addWidget(rightLineWidthSpinBox);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);


        verticalLayout_8->addLayout(horizontalLayout_4);

        offsetCheckBox = new QCheckBox(groupBox_4);
        offsetCheckBox->setObjectName("offsetCheckBox");

        verticalLayout_8->addWidget(offsetCheckBox);


        verticalLayout_7->addWidget(groupBox_4);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_3);

        tabWidget->addTab(tab_3, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        verticalLayout_5 = new QVBoxLayout(tab_2);
        verticalLayout_5->setObjectName("verticalLayout_5");
        mimeTreeView = new QTreeView(tab_2);
        mimeTreeView->setObjectName("mimeTreeView");

        verticalLayout_5->addWidget(mimeTreeView);

        tabWidget->addTab(tab_2, QString());

        verticalLayout_6->addWidget(tabWidget);


        retranslateUi(LiteEditorOption);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(LiteEditorOption);
    } // setupUi

    void retranslateUi(QWidget *LiteEditorOption)
    {
        LiteEditorOption->setWindowTitle(QCoreApplication::translate("LiteEditorOption", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("LiteEditorOption", "Font", nullptr));
        label_2->setText(QCoreApplication::translate("LiteEditorOption", "Family:", nullptr));
        monospaceFontCheckBox->setText(QCoreApplication::translate("LiteEditorOption", "Show Monospace Font", nullptr));
        label->setText(QCoreApplication::translate("LiteEditorOption", "Size:", nullptr));
        label_6->setText(QCoreApplication::translate("LiteEditorOption", "Zoom:", nullptr));
        fontZoomSpinBox->setSuffix(QCoreApplication::translate("LiteEditorOption", "%", nullptr));
        antialiasCheckBox->setText(QCoreApplication::translate("LiteEditorOption", "Antialias", nullptr));
        restoreDefaultFontButton->setText(QCoreApplication::translate("LiteEditorOption", "Restore Default Font", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("LiteEditorOption", "Editor Color Scheme", nullptr));
        label_3->setText(QCoreApplication::translate("LiteEditorOption", "File:", nullptr));
        editPushButton->setText(QCoreApplication::translate("LiteEditorOption", "Edit", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("LiteEditorOption", "Font && Colors", nullptr));
        groupBox_6->setTitle(QCoreApplication::translate("LiteEditorOption", "Syntax Auto-completion", nullptr));
#if QT_CONFIG(tooltip)
        autoBraces5CheckBox->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        groupBox_3->setTitle(QCoreApplication::translate("LiteEditorOption", "Behavior", nullptr));
        autoIndentCheckBox->setText(QCoreApplication::translate("LiteEditorOption", "Automatic indentation", nullptr));
        completerFuzzyCheckBox->setText(QCoreApplication::translate("LiteEditorOption", "Fuzzy code completion", nullptr));
        completerCaseSensitiveCheckBox->setText(QCoreApplication::translate("LiteEditorOption", "Case sensitive code completion", nullptr));
        label_4->setText(QCoreApplication::translate("LiteEditorOption", "Code completion prefix length:", nullptr));
        cleanCompleterCacheCheckBox->setText(QCoreApplication::translate("LiteEditorOption", "Clean completion cache when saving files", nullptr));
        cleanWhitespaceOnSaveCheckBox->setText(QCoreApplication::translate("LiteEditorOption", "Clean whitespace when saving files", nullptr));
        wheelZoomingCheckBox->setText(QCoreApplication::translate("LiteEditorOption", "Enable scroll wheel zooming", nullptr));
        enableCopyToHtmlCheckBox->setText(QCoreApplication::translate("LiteEditorOption", "Add copied text into the clipboard as HTML", nullptr));
        allowVscrollLastLineCheckBox->setText(QCoreApplication::translate("LiteEditorOption", "Allow vertical scrolling to the last line [*]", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("LiteEditorOption", "Behavior", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("LiteEditorOption", "Load File", nullptr));
        noprintCheckBox->setText(QCoreApplication::translate("LiteEditorOption", "Check and convert no printable char to '.'", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("LiteEditorOption", "Display", nullptr));
        codeFoldVisibleCheckBox->setText(QCoreApplication::translate("LiteEditorOption", "Display code fold", nullptr));
        visualizeWhitespaceCheckBox->setText(QCoreApplication::translate("LiteEditorOption", "Display VisualizeWhitespace", nullptr));
        eofVisibleCheckBox->setText(QCoreApplication::translate("LiteEditorOption", "Display EOF", nullptr));
        defaultWordWrapCheckBox->setText(QCoreApplication::translate("LiteEditorOption", "Word wrap by default", nullptr));
        lineNumberVisibleCheckBox->setText(QCoreApplication::translate("LiteEditorOption", "Display line numbers", nullptr));
        indentLineCheckBox->setText(QCoreApplication::translate("LiteEditorOption", "Display indent guide", nullptr));
        rightLineVisibleCheckBox->setText(QCoreApplication::translate("LiteEditorOption", "Display right margin at column", nullptr));
        offsetCheckBox->setText(QCoreApplication::translate("LiteEditorOption", "Display offset position", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("LiteEditorOption", "Display", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("LiteEditorOption", "File Types", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LiteEditorOption: public Ui_LiteEditorOption {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LITEEDITOROPTION_H
