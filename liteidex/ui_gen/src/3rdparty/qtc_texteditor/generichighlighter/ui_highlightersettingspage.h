/********************************************************************************
** Form generated from reading UI file 'highlightersettingspage.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HIGHLIGHTERSETTINGSPAGE_H
#define UI_HIGHLIGHTERSETTINGSPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <utils/pathchooser.h>

QT_BEGIN_NAMESPACE

class Ui_HighlighterSettingsPage
{
public:
    QVBoxLayout *verticalLayout_4;
    QLabel *definitionsInfolabel;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *definitionFilesGroupBox;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *locationLabel;
    Utils::PathChooser *definitionFilesPath;
    QVBoxLayout *verticalLayout;
    QCheckBox *useFallbackLocation;
    Utils::PathChooser *fallbackDefinitionFilesPath;
    QGroupBox *behaviorGroupBox;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *alertWhenNoDefinition;
    QHBoxLayout *horizontalLayout_2;
    QLabel *ignoreLabel;
    QLineEdit *ignoreEdit;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *HighlighterSettingsPage)
    {
        if (HighlighterSettingsPage->objectName().isEmpty())
            HighlighterSettingsPage->setObjectName("HighlighterSettingsPage");
        HighlighterSettingsPage->resize(521, 332);
        verticalLayout_4 = new QVBoxLayout(HighlighterSettingsPage);
        verticalLayout_4->setObjectName("verticalLayout_4");
        definitionsInfolabel = new QLabel(HighlighterSettingsPage);
        definitionsInfolabel->setObjectName("definitionsInfolabel");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(definitionsInfolabel->sizePolicy().hasHeightForWidth());
        definitionsInfolabel->setSizePolicy(sizePolicy);
        definitionsInfolabel->setTextFormat(Qt::RichText);
        definitionsInfolabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        definitionsInfolabel->setWordWrap(true);
        definitionsInfolabel->setOpenExternalLinks(true);

        verticalLayout_4->addWidget(definitionsInfolabel);

        verticalSpacer_2 = new QSpacerItem(20, 3, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_4->addItem(verticalSpacer_2);

        definitionFilesGroupBox = new QGroupBox(HighlighterSettingsPage);
        definitionFilesGroupBox->setObjectName("definitionFilesGroupBox");
        verticalLayout_3 = new QVBoxLayout(definitionFilesGroupBox);
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        locationLabel = new QLabel(definitionFilesGroupBox);
        locationLabel->setObjectName("locationLabel");

        horizontalLayout->addWidget(locationLabel);

        definitionFilesPath = new Utils::PathChooser(definitionFilesGroupBox);
        definitionFilesPath->setObjectName("definitionFilesPath");

        horizontalLayout->addWidget(definitionFilesPath);


        horizontalLayout_3->addLayout(horizontalLayout);


        verticalLayout_3->addLayout(horizontalLayout_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        useFallbackLocation = new QCheckBox(definitionFilesGroupBox);
        useFallbackLocation->setObjectName("useFallbackLocation");

        verticalLayout->addWidget(useFallbackLocation);

        fallbackDefinitionFilesPath = new Utils::PathChooser(definitionFilesGroupBox);
        fallbackDefinitionFilesPath->setObjectName("fallbackDefinitionFilesPath");

        verticalLayout->addWidget(fallbackDefinitionFilesPath);


        verticalLayout_3->addLayout(verticalLayout);


        verticalLayout_4->addWidget(definitionFilesGroupBox);

        behaviorGroupBox = new QGroupBox(HighlighterSettingsPage);
        behaviorGroupBox->setObjectName("behaviorGroupBox");
        verticalLayout_2 = new QVBoxLayout(behaviorGroupBox);
        verticalLayout_2->setObjectName("verticalLayout_2");
        alertWhenNoDefinition = new QCheckBox(behaviorGroupBox);
        alertWhenNoDefinition->setObjectName("alertWhenNoDefinition");

        verticalLayout_2->addWidget(alertWhenNoDefinition);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        ignoreLabel = new QLabel(behaviorGroupBox);
        ignoreLabel->setObjectName("ignoreLabel");

        horizontalLayout_2->addWidget(ignoreLabel);

        ignoreEdit = new QLineEdit(behaviorGroupBox);
        ignoreEdit->setObjectName("ignoreEdit");

        horizontalLayout_2->addWidget(ignoreEdit);


        verticalLayout_2->addLayout(horizontalLayout_2);


        verticalLayout_4->addWidget(behaviorGroupBox);

        verticalSpacer = new QSpacerItem(20, 117, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        QWidget::setTabOrder(alertWhenNoDefinition, ignoreEdit);

        retranslateUi(HighlighterSettingsPage);

        QMetaObject::connectSlotsByName(HighlighterSettingsPage);
    } // setupUi

    void retranslateUi(QWidget *HighlighterSettingsPage)
    {
        HighlighterSettingsPage->setWindowTitle(QCoreApplication::translate("HighlighterSettingsPage", "Form", nullptr));
        definitionsInfolabel->setText(QCoreApplication::translate("HighlighterSettingsPage", "<html><head/><body>\n"
"<p>Highlight definitions are provided by the <a href=\"http://kate-editor.org/\">Kate Text Editor</a>.</p></body></html>", nullptr));
        definitionFilesGroupBox->setTitle(QCoreApplication::translate("HighlighterSettingsPage", "Syntax Highlight Definition Files", nullptr));
        locationLabel->setText(QCoreApplication::translate("HighlighterSettingsPage", "Location:", nullptr));
        useFallbackLocation->setText(QCoreApplication::translate("HighlighterSettingsPage", "Use fallback location", nullptr));
        behaviorGroupBox->setTitle(QCoreApplication::translate("HighlighterSettingsPage", "Behavior", nullptr));
        alertWhenNoDefinition->setText(QCoreApplication::translate("HighlighterSettingsPage", "Alert when a highlight definition is not found", nullptr));
        ignoreLabel->setText(QCoreApplication::translate("HighlighterSettingsPage", "Ignored file patterns:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HighlighterSettingsPage: public Ui_HighlighterSettingsPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HIGHLIGHTERSETTINGSPAGE_H
