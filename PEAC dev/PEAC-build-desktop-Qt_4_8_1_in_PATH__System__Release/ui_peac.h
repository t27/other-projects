/********************************************************************************
** Form generated from reading UI file 'peac.ui'
**
** Created: Wed Jun 27 15:03:45 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PEAC_H
#define UI_PEAC_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpinBox>
#include <QtGui/QStatusBar>
#include <QtGui/QTextEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PEAC
{
public:
    QWidget *centralWidget;
    QTextEdit *textEdit_2;
    QLabel *label_2;
    QLabel *label;
    QSpinBox *spinBox;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *PEAC)
    {
        if (PEAC->objectName().isEmpty())
            PEAC->setObjectName(QString::fromUtf8("PEAC"));
        PEAC->resize(398, 264);
        centralWidget = new QWidget(PEAC);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        textEdit_2 = new QTextEdit(centralWidget);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));
        textEdit_2->setGeometry(QRect(150, 80, 231, 31));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 90, 101, 21));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 50, 116, 31));
        spinBox = new QSpinBox(centralWidget);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(149, 50, 71, 27));
        spinBox->setMinimum(1);
        spinBox->setMaximum(390);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 160, 121, 31));
        label_3->setWordWrap(true);
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(130, 160, 251, 31));
        label_4->setWordWrap(true);
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 10, 361, 31));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(13, 120, 371, 29));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        horizontalLayout->addWidget(pushButton_3);

        PEAC->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(PEAC);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 398, 25));
        PEAC->setMenuBar(menuBar);
        statusBar = new QStatusBar(PEAC);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        PEAC->setStatusBar(statusBar);

        retranslateUi(PEAC);

        QMetaObject::connectSlotsByName(PEAC);
    } // setupUi

    void retranslateUi(QMainWindow *PEAC)
    {
        PEAC->setWindowTitle(QApplication::translate("PEAC", "PEAC", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("PEAC", "Your Answer", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("PEAC", "Problem Number", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("PEAC", "Answers Unavailable for:", 0, QApplication::UnicodeUTF8));
        label_4->setText(QString());
        label_5->setText(QApplication::translate("PEAC", "PEAC- Project Euler Answer Checker", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("PEAC", "Check", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("PEAC", "Load Ans File", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("PEAC", "About", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PEAC: public Ui_PEAC {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PEAC_H
