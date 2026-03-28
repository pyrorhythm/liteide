/********************************************************************************
** Form generated from reading UI file 'qsqleditor.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QSQLEDITOR_H
#define UI_QSQLEDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QSqlEditor
{
public:
    QHBoxLayout *horizontalLayout;
    QTreeView *dbTreeView;
    QTabWidget *tabWidget;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_2;
    QPlainTextEdit *sqlTextEdit;
    QTableView *sqlTableView;

    void setupUi(QWidget *QSqlEditor)
    {
        if (QSqlEditor->objectName().isEmpty())
            QSqlEditor->setObjectName("QSqlEditor");
        QSqlEditor->resize(585, 354);
        horizontalLayout = new QHBoxLayout(QSqlEditor);
        horizontalLayout->setObjectName("horizontalLayout");
        dbTreeView = new QTreeView(QSqlEditor);
        dbTreeView->setObjectName("dbTreeView");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(dbTreeView->sizePolicy().hasHeightForWidth());
        dbTreeView->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(dbTreeView);

        tabWidget = new QTabWidget(QSqlEditor);
        tabWidget->setObjectName("tabWidget");
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        verticalLayout_2 = new QVBoxLayout(tab_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        sqlTextEdit = new QPlainTextEdit(tab_2);
        sqlTextEdit->setObjectName("sqlTextEdit");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(sqlTextEdit->sizePolicy().hasHeightForWidth());
        sqlTextEdit->setSizePolicy(sizePolicy1);

        verticalLayout_2->addWidget(sqlTextEdit);

        sqlTableView = new QTableView(tab_2);
        sqlTableView->setObjectName("sqlTableView");

        verticalLayout_2->addWidget(sqlTableView);

        tabWidget->addTab(tab_2, QString());

        horizontalLayout->addWidget(tabWidget);


        retranslateUi(QSqlEditor);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QSqlEditor);
    } // setupUi

    void retranslateUi(QWidget *QSqlEditor)
    {
        QSqlEditor->setWindowTitle(QCoreApplication::translate("QSqlEditor", "Form", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("QSqlEditor", "SQL ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QSqlEditor: public Ui_QSqlEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QSQLEDITOR_H
