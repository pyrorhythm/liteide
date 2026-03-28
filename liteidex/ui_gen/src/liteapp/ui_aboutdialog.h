/********************************************************************************
** Form generated from reading UI file 'aboutdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTDIALOG_H
#define UI_ABOUTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AboutDialog
{
public:
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_5;
    QLabel *label_9;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_11;
    QLabel *label_31;
    QLabel *label_27;
    QLabel *label_32;
    QTabWidget *tabWidget;
    QWidget *tab_5;
    QVBoxLayout *verticalLayout_7;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_4;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_4;
    QLabel *label_8;
    QLabel *label_13;
    QLabel *label_18;
    QLabel *label_12;
    QLabel *qtVerLabel;
    QLabel *label_15;
    QLabel *label_14;
    QLabel *label_39;
    QLabel *label_17;
    QLabel *verLabel;
    QLabel *label_40;
    QLabel *label_41;
    QSpacerItem *verticalSpacer_2;
    QWidget *tab_6;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label_6;
    QLabel *label_19;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QLabel *label_22;
    QLabel *label_21;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_3;
    QLabel *label_24;
    QLabel *label_25;
    QLabel *label_28;
    QLabel *label_29;
    QSpacerItem *verticalSpacer_3;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_9;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout_5;
    QLabel *label_10;
    QLabel *label_33;
    QLabel *label_34;
    QLabel *label_35;
    QLabel *label_36;
    QLabel *label_37;
    QLabel *label_3;
    QLabel *label_20;
    QLabel *label_23;
    QLabel *label_26;
    QLabel *label_16;
    QLabel *label_38;
    QLabel *label_30;
    QLabel *label_42;
    QLabel *label_43;
    QLabel *labelTranslator_cl0ne;
    QSpacerItem *verticalSpacer_5;
    QWidget *tab;
    QVBoxLayout *verticalLayout_3;
    QTextBrowser *textBrowser;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_10;
    QTextBrowser *textBrowser_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *closeButton;

    void setupUi(QDialog *AboutDialog)
    {
        if (AboutDialog->objectName().isEmpty())
            AboutDialog->setObjectName("AboutDialog");
        AboutDialog->resize(552, 468);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AboutDialog->sizePolicy().hasHeightForWidth());
        AboutDialog->setSizePolicy(sizePolicy);
        verticalLayout_8 = new QVBoxLayout(AboutDialog);
        verticalLayout_8->setObjectName("verticalLayout_8");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(AboutDialog);
        label_2->setObjectName("label_2");
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/images/liteide-logo64.png")));
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(AboutDialog);
        label->setObjectName("label");
        label->setText(QString::fromUtf8("<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:24pt; font-weight:600; font-style:italic;\">LiteIDE X</span></p></body></html>"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        label_5 = new QLabel(AboutDialog);
        label_5->setObjectName("label_5");
        label_5->setText(QString::fromUtf8("Simple Cross Platform Open Source IDE"));
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_5);

        label_9 = new QLabel(AboutDialog);
        label_9->setObjectName("label_9");
        label_9->setText(QString::fromUtf8("<html><head/><body><p>2011-2023 (c) visualfc &lt;visualfc@gmail.com&gt;</p></body></html>"));
        label_9->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_9);

        verticalLayout->setStretch(0, 3);
        verticalLayout->setStretch(1, 1);
        verticalLayout->setStretch(2, 1);

        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setSizeConstraint(QLayout::SetMinimumSize);
        label_11 = new QLabel(AboutDialog);
        label_11->setObjectName("label_11");
        sizePolicy.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy);
        label_11->setPixmap(QPixmap(QString::fromUtf8(":/images/logo/space.png")));

        verticalLayout_6->addWidget(label_11);

        label_31 = new QLabel(AboutDialog);
        label_31->setObjectName("label_31");
        label_31->setPixmap(QPixmap(QString::fromUtf8(":/images/logo/li.png")));
        label_31->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        verticalLayout_6->addWidget(label_31);

        label_27 = new QLabel(AboutDialog);
        label_27->setObjectName("label_27");
        label_27->setPixmap(QPixmap(QString::fromUtf8(":/images/logo/dui.png")));
        label_27->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        verticalLayout_6->addWidget(label_27);

        label_32 = new QLabel(AboutDialog);
        label_32->setObjectName("label_32");
        label_32->setPixmap(QPixmap(QString::fromUtf8(":/images/logo/space.png")));

        verticalLayout_6->addWidget(label_32);


        horizontalLayout_2->addLayout(verticalLayout_6);

        horizontalLayout_2->setStretch(1, 1);

        verticalLayout_8->addLayout(horizontalLayout_2);

        tabWidget = new QTabWidget(AboutDialog);
        tabWidget->setObjectName("tabWidget");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy1);
        tab_5 = new QWidget();
        tab_5->setObjectName("tab_5");
        verticalLayout_7 = new QVBoxLayout(tab_5);
        verticalLayout_7->setObjectName("verticalLayout_7");
        groupBox_4 = new QGroupBox(tab_5);
        groupBox_4->setObjectName("groupBox_4");
        verticalLayout_2 = new QVBoxLayout(groupBox_4);
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_4 = new QLabel(groupBox_4);
        label_4->setObjectName("label_4");

        verticalLayout_2->addWidget(label_4);


        verticalLayout_7->addWidget(groupBox_4);

        groupBox_5 = new QGroupBox(tab_5);
        groupBox_5->setObjectName("groupBox_5");
        gridLayout_4 = new QGridLayout(groupBox_5);
        gridLayout_4->setObjectName("gridLayout_4");
        label_8 = new QLabel(groupBox_5);
        label_8->setObjectName("label_8");
        label_8->setText(QString::fromUtf8("LiteIDE X"));

        gridLayout_4->addWidget(label_8, 0, 1, 1, 1);

        label_13 = new QLabel(groupBox_5);
        label_13->setObjectName("label_13");

        gridLayout_4->addWidget(label_13, 4, 0, 1, 1);

        label_18 = new QLabel(groupBox_5);
        label_18->setObjectName("label_18");
        label_18->setText(QString::fromUtf8("<html><head/><body><p><a href=\"https://github.com/visualfc/liteide\"><span style=\" text-decoration: underline; color:#0000ff;\">https://github.com/visualfc/liteide</span></a></p></body></html>"));
        label_18->setOpenExternalLinks(true);

        gridLayout_4->addWidget(label_18, 5, 1, 1, 1);

        label_12 = new QLabel(groupBox_5);
        label_12->setObjectName("label_12");

        gridLayout_4->addWidget(label_12, 0, 0, 1, 1);

        qtVerLabel = new QLabel(groupBox_5);
        qtVerLabel->setObjectName("qtVerLabel");

        gridLayout_4->addWidget(qtVerLabel, 3, 1, 1, 1);

        label_15 = new QLabel(groupBox_5);
        label_15->setObjectName("label_15");

        gridLayout_4->addWidget(label_15, 2, 0, 1, 1);

        label_14 = new QLabel(groupBox_5);
        label_14->setObjectName("label_14");
        label_14->setText(QString::fromUtf8("visualfc@gmail.com"));
        label_14->setTextFormat(Qt::AutoText);
        label_14->setOpenExternalLinks(false);

        gridLayout_4->addWidget(label_14, 4, 1, 1, 1);

        label_39 = new QLabel(groupBox_5);
        label_39->setObjectName("label_39");

        gridLayout_4->addWidget(label_39, 3, 0, 1, 1);

        label_17 = new QLabel(groupBox_5);
        label_17->setObjectName("label_17");

        gridLayout_4->addWidget(label_17, 5, 0, 1, 1);

        verLabel = new QLabel(groupBox_5);
        verLabel->setObjectName("verLabel");
        verLabel->setText(QString::fromUtf8("X64"));

        gridLayout_4->addWidget(verLabel, 2, 1, 1, 1);

        label_40 = new QLabel(groupBox_5);
        label_40->setObjectName("label_40");

        gridLayout_4->addWidget(label_40, 6, 0, 1, 1);

        label_41 = new QLabel(groupBox_5);
        label_41->setObjectName("label_41");
        label_41->setText(QString::fromUtf8("<html><head/><body><p><a href=\"http://visualfc.github.com/support\"><span style=\" text-decoration: underline; color:#0000ff;\">https://visualfc.github.com/support</span></a></p></body></html>"));
        label_41->setOpenExternalLinks(true);

        gridLayout_4->addWidget(label_41, 6, 1, 1, 1);


        verticalLayout_7->addWidget(groupBox_5);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_2);

        tabWidget->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName("tab_6");
        verticalLayout_5 = new QVBoxLayout(tab_6);
        verticalLayout_5->setObjectName("verticalLayout_5");
        groupBox = new QGroupBox(tab_6);
        groupBox->setObjectName("groupBox");
        groupBox->setTitle(QString::fromUtf8("LiteIDE X"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName("gridLayout");
        label_6 = new QLabel(groupBox);
        label_6->setObjectName("label_6");
        label_6->setText(QString::fromUtf8("Developer"));

        gridLayout->addWidget(label_6, 0, 0, 1, 1);

        label_19 = new QLabel(groupBox);
        label_19->setObjectName("label_19");
        label_19->setText(QString::fromUtf8("visualfc <visualfc@gmail.com>"));

        gridLayout->addWidget(label_19, 0, 1, 1, 1);


        verticalLayout_5->addWidget(groupBox);

        groupBox_2 = new QGroupBox(tab_6);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setTitle(QString::fromUtf8("LiteIDE 0.1.2-0.2.1"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName("gridLayout_2");
        label_22 = new QLabel(groupBox_2);
        label_22->setObjectName("label_22");
        label_22->setText(QString::fromUtf8("visualfc <visualfc@gmail.com>"));

        gridLayout_2->addWidget(label_22, 0, 1, 1, 1);

        label_21 = new QLabel(groupBox_2);
        label_21->setObjectName("label_21");
        label_21->setText(QString::fromUtf8("Developer"));

        gridLayout_2->addWidget(label_21, 0, 0, 1, 1);


        verticalLayout_5->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(tab_6);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setTitle(QString::fromUtf8("LiteIDE 0.1"));
        gridLayout_3 = new QGridLayout(groupBox_3);
        gridLayout_3->setObjectName("gridLayout_3");
        label_24 = new QLabel(groupBox_3);
        label_24->setObjectName("label_24");
        label_24->setText(QString::fromUtf8("Developer"));

        gridLayout_3->addWidget(label_24, 0, 0, 1, 1);

        label_25 = new QLabel(groupBox_3);
        label_25->setObjectName("label_25");
        label_25->setText(QString::fromUtf8("visualfc <visualfc@gmail.com>"));

        gridLayout_3->addWidget(label_25, 0, 1, 1, 1);

        label_28 = new QLabel(groupBox_3);
        label_28->setObjectName("label_28");
        label_28->setText(QString::fromUtf8("Developer"));

        gridLayout_3->addWidget(label_28, 1, 0, 1, 1);

        label_29 = new QLabel(groupBox_3);
        label_29->setObjectName("label_29");
        label_29->setText(QString::fromUtf8("xushiwei <xushiweizh@gmail.com>"));

        gridLayout_3->addWidget(label_29, 1, 1, 1, 1);


        verticalLayout_5->addWidget(groupBox_3);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_3);

        tabWidget->addTab(tab_6, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        verticalLayout_9 = new QVBoxLayout(tab_3);
        verticalLayout_9->setObjectName("verticalLayout_9");
        groupBox_6 = new QGroupBox(tab_3);
        groupBox_6->setObjectName("groupBox_6");
        groupBox_6->setTitle(QString::fromUtf8("LiteIDE X"));
        gridLayout_5 = new QGridLayout(groupBox_6);
        gridLayout_5->setObjectName("gridLayout_5");
        label_10 = new QLabel(groupBox_6);
        label_10->setObjectName("label_10");

        gridLayout_5->addWidget(label_10, 0, 0, 1, 1);

        label_33 = new QLabel(groupBox_6);
        label_33->setObjectName("label_33");
        label_33->setText(QString::fromUtf8("visualfc <visualfc@gmail.com>"));

        gridLayout_5->addWidget(label_33, 0, 1, 1, 1);

        label_34 = new QLabel(groupBox_6);
        label_34->setObjectName("label_34");

        gridLayout_5->addWidget(label_34, 2, 0, 1, 1);

        label_35 = new QLabel(groupBox_6);
        label_35->setObjectName("label_35");
        label_35->setText(QString::fromUtf8("mattn <mattn.jp@gmail.com>"));

        gridLayout_5->addWidget(label_35, 2, 1, 1, 1);

        label_36 = new QLabel(groupBox_6);
        label_36->setObjectName("label_36");

        gridLayout_5->addWidget(label_36, 3, 0, 1, 1);

        label_37 = new QLabel(groupBox_6);
        label_37->setObjectName("label_37");
        label_37->setText(QString::fromUtf8("Lockals <lockalsash@gmail.com>"));

        gridLayout_5->addWidget(label_37, 3, 1, 1, 1);

        label_3 = new QLabel(groupBox_6);
        label_3->setObjectName("label_3");

        gridLayout_5->addWidget(label_3, 4, 0, 1, 1);

        label_20 = new QLabel(groupBox_6);
        label_20->setObjectName("label_20");
        label_20->setText(QString::fromUtf8("TomBoss <tomboss@gmx.com>"));

        gridLayout_5->addWidget(label_20, 4, 1, 1, 1);

        label_23 = new QLabel(groupBox_6);
        label_23->setObjectName("label_23");

        gridLayout_5->addWidget(label_23, 1, 0, 1, 1);

        label_26 = new QLabel(groupBox_6);
        label_26->setObjectName("label_26");
        label_26->setText(QString::fromUtf8("Timothy Lin <zh9102@gmail.com>"));

        gridLayout_5->addWidget(label_26, 1, 1, 1, 1);

        label_16 = new QLabel(groupBox_6);
        label_16->setObjectName("label_16");

        gridLayout_5->addWidget(label_16, 5, 0, 1, 1);

        label_38 = new QLabel(groupBox_6);
        label_38->setObjectName("label_38");
        label_38->setText(QString::fromUtf8("Helge Plaschke <github.com/HelgePlaschke>"));
        label_38->setTextFormat(Qt::AutoText);

        gridLayout_5->addWidget(label_38, 5, 1, 1, 1);

        label_30 = new QLabel(groupBox_6);
        label_30->setObjectName("label_30");
        label_30->setText(QString::fromUtf8("Michael <github.com/michael-k>"));

        gridLayout_5->addWidget(label_30, 6, 1, 1, 1);

        label_42 = new QLabel(groupBox_6);
        label_42->setObjectName("label_42");
        label_42->setText(QString::fromUtf8("Roman Shmelev <rshmelev@gmail.com>"));

        gridLayout_5->addWidget(label_42, 7, 1, 1, 1);

        label_43 = new QLabel(groupBox_6);
        label_43->setObjectName("label_43");

        gridLayout_5->addWidget(label_43, 7, 0, 1, 1);

        labelTranslator_cl0ne = new QLabel(groupBox_6);
        labelTranslator_cl0ne->setObjectName("labelTranslator_cl0ne");
        labelTranslator_cl0ne->setText(QString::fromUtf8("Vladislav Glinsky <cl0ne@mithril.org.ua>"));

        gridLayout_5->addWidget(labelTranslator_cl0ne, 8, 1, 1, 1);


        verticalLayout_9->addWidget(groupBox_6);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_9->addItem(verticalSpacer_5);

        tabWidget->addTab(tab_3, QString());
        tab = new QWidget();
        tab->setObjectName("tab");
        verticalLayout_3 = new QVBoxLayout(tab);
        verticalLayout_3->setObjectName("verticalLayout_3");
        textBrowser = new QTextBrowser(tab);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setHtml(QString::fromUtf8("<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'.SF NS Text'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">All contributors that provided patches.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">The Go Project &lt;http://golang.org&gt;</p>\n"
"<p style=\" margin-to"
                        "p:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">The Qt Project &lt;https://qt-project.org&gt;</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">The QtCreator Project &lt;https://qt-project.org&gt;</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">The Kate Project &lt;http://kate-editor.org&gt;</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">The GNU Software Foundation &lt;https://www.gnu.org&gt;</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">The CommonMark cmark library &lt;https://github.com/commonmark/cmark&gt;</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">The "
                        "Sundown project &lt;https://github.com/vmg/sundown&gt;</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">The Markdown CSS files from Mou &lt;http://mouapp.com&gt;</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">The Gocode tool &lt;https://github.com/nsf/gocode&gt;</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">The libvterm project &lt;https://github.com/neovim/libvterm&gt;</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">The ptyqt project &lt;https://github.com/kafeg/ptyqt&gt;</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">The LiteIDE logo designed by BESD &lt;http://www.besdlab.cn&gt;</p>\n"
"<p style=\"-qt-parag"
                        "raph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Last, but not least, the open-source community.</p></body></html>"));

        verticalLayout_3->addWidget(textBrowser);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        verticalLayout_10 = new QVBoxLayout(tab_2);
        verticalLayout_10->setObjectName("verticalLayout_10");
        textBrowser_2 = new QTextBrowser(tab_2);
        textBrowser_2->setObjectName("textBrowser_2");
        textBrowser_2->setHtml(QString::fromUtf8("<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'.SF NS Text'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Copyright (c) 2011-2022 LiteIDE. All rights reserved.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">This library is free software; you can redistribute it a"
                        "nd/or modify it under the terms of the GNU Lesser General Public License as published by the Free Software Foundation; either version 2.1 of the License, or (at your option) any later version.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">This library is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public License for more details.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">In addition"
                        ", as a special exception, that plugins developed for LiteIDE, are allowed to remain closed sourced and can be distributed under any license .These rights are included in the file LGPL_EXCEPTION.txt in this package.</p></body></html>"));

        verticalLayout_10->addWidget(textBrowser_2);

        tabWidget->addTab(tab_2, QString());

        verticalLayout_8->addWidget(tabWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        closeButton = new QPushButton(AboutDialog);
        closeButton->setObjectName("closeButton");

        horizontalLayout->addWidget(closeButton);


        verticalLayout_8->addLayout(horizontalLayout);


        retranslateUi(AboutDialog);
        QObject::connect(closeButton, &QPushButton::clicked, AboutDialog, qOverload<>(&QDialog::accept));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(AboutDialog);
    } // setupUi

    void retranslateUi(QDialog *AboutDialog)
    {
        AboutDialog->setWindowTitle(QCoreApplication::translate("AboutDialog", "About LiteIDE", nullptr));
        label_2->setText(QString());
        label_11->setText(QString());
        label_31->setText(QString());
        label_27->setText(QString());
        label_32->setText(QString());
        groupBox_4->setTitle(QCoreApplication::translate("AboutDialog", "Welcome:", nullptr));
        label_4->setText(QCoreApplication::translate("AboutDialog", "Welcome to LiteIDE X! LiteIDE is a simple, open source, cross-platform IDE.", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("AboutDialog", "Project:", nullptr));
        label_13->setText(QCoreApplication::translate("AboutDialog", "Author:", nullptr));
        label_12->setText(QCoreApplication::translate("AboutDialog", "Name:", nullptr));
        qtVerLabel->setText(QCoreApplication::translate("AboutDialog", "Based on Qt", nullptr));
        label_15->setText(QCoreApplication::translate("AboutDialog", "Version:", nullptr));
        label_39->setText(QCoreApplication::translate("AboutDialog", "Build:", nullptr));
        label_17->setText(QCoreApplication::translate("AboutDialog", "Source Code:", nullptr));
        label_40->setText(QCoreApplication::translate("AboutDialog", "Support LiteIDE:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QCoreApplication::translate("AboutDialog", "Information", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QCoreApplication::translate("AboutDialog", "Developers", nullptr));
        label_10->setText(QCoreApplication::translate("AboutDialog", "Chinese", nullptr));
        label_34->setText(QCoreApplication::translate("AboutDialog", "Japanese", nullptr));
        label_36->setText(QCoreApplication::translate("AboutDialog", "Russian", nullptr));
        label_3->setText(QCoreApplication::translate("AboutDialog", "French", nullptr));
        label_23->setText(QCoreApplication::translate("AboutDialog", "Traditional Chinese", nullptr));
        label_16->setText(QCoreApplication::translate("AboutDialog", "German", nullptr));
        label_43->setText(QCoreApplication::translate("AboutDialog", "Ukrainian", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("AboutDialog", "Translations", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("AboutDialog", "Thanks to...", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("AboutDialog", "License", nullptr));
        closeButton->setText(QCoreApplication::translate("AboutDialog", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AboutDialog: public Ui_AboutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTDIALOG_H
