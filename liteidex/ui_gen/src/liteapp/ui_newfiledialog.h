/********************************************************************************
** Form generated from reading UI file 'newfiledialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWFILEDIALOG_H
#define UI_NEWFILEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_NewFileDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_4;
    QTreeView *pathTreeView;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QTreeView *templateTreeView;
    QHBoxLayout *horizontalLayout_4;
    QLabel *typeLabel;
    QLabel *infoLabel;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *nameLineEdit;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QLabel *label_7;
    QLineEdit *locationLineEdit;
    QToolButton *locationBrowseButton;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *NewFileDialog)
    {
        if (NewFileDialog->objectName().isEmpty())
            NewFileDialog->setObjectName("NewFileDialog");
        NewFileDialog->resize(552, 403);
        verticalLayout = new QVBoxLayout(NewFileDialog);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_4 = new QLabel(NewFileDialog);
        label_4->setObjectName("label_4");

        verticalLayout_3->addWidget(label_4);

        pathTreeView = new QTreeView(NewFileDialog);
        pathTreeView->setObjectName("pathTreeView");

        verticalLayout_3->addWidget(pathTreeView);


        horizontalLayout_3->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_2 = new QLabel(NewFileDialog);
        label_2->setObjectName("label_2");

        verticalLayout_2->addWidget(label_2);

        templateTreeView = new QTreeView(NewFileDialog);
        templateTreeView->setObjectName("templateTreeView");

        verticalLayout_2->addWidget(templateTreeView);


        horizontalLayout_3->addLayout(verticalLayout_2);

        horizontalLayout_3->setStretch(0, 1);
        horizontalLayout_3->setStretch(1, 3);

        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        typeLabel = new QLabel(NewFileDialog);
        typeLabel->setObjectName("typeLabel");

        horizontalLayout_4->addWidget(typeLabel);

        infoLabel = new QLabel(NewFileDialog);
        infoLabel->setObjectName("infoLabel");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(infoLabel->sizePolicy().hasHeightForWidth());
        infoLabel->setSizePolicy(sizePolicy);
        infoLabel->setFrameShape(QFrame::Panel);
        infoLabel->setFrameShadow(QFrame::Sunken);
        infoLabel->setWordWrap(true);

        horizontalLayout_4->addWidget(infoLabel);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_3 = new QLabel(NewFileDialog);
        label_3->setObjectName("label_3");

        horizontalLayout_2->addWidget(label_3);

        nameLineEdit = new QLineEdit(NewFileDialog);
        nameLineEdit->setObjectName("nameLineEdit");

        horizontalLayout_2->addWidget(nameLineEdit);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_7 = new QLabel(NewFileDialog);
        label_7->setObjectName("label_7");

        horizontalLayout->addWidget(label_7);

        locationLineEdit = new QLineEdit(NewFileDialog);
        locationLineEdit->setObjectName("locationLineEdit");

        horizontalLayout->addWidget(locationLineEdit);

        locationBrowseButton = new QToolButton(NewFileDialog);
        locationBrowseButton->setObjectName("locationBrowseButton");

        horizontalLayout->addWidget(locationBrowseButton);


        verticalLayout->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(NewFileDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

        buttonBox->raise();
        infoLabel->raise();
        typeLabel->raise();

        retranslateUi(NewFileDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, NewFileDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, NewFileDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(NewFileDialog);
    } // setupUi

    void retranslateUi(QDialog *NewFileDialog)
    {
        NewFileDialog->setWindowTitle(QCoreApplication::translate("NewFileDialog", "New Project or File", nullptr));
        label_4->setText(QCoreApplication::translate("NewFileDialog", "GOPATH:", nullptr));
        label_2->setText(QCoreApplication::translate("NewFileDialog", "Template:", nullptr));
        typeLabel->setText(QCoreApplication::translate("NewFileDialog", "Type", nullptr));
        infoLabel->setText(QCoreApplication::translate("NewFileDialog", "Information", nullptr));
        label_3->setText(QCoreApplication::translate("NewFileDialog", "Name:", nullptr));
        label_7->setText(QCoreApplication::translate("NewFileDialog", "Location:", nullptr));
        locationBrowseButton->setText(QCoreApplication::translate("NewFileDialog", "Browse...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NewFileDialog: public Ui_NewFileDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWFILEDIALOG_H
