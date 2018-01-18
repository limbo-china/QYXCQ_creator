/********************************************************************************
** Form generated from reading UI file 'QYXCQ.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QYXCQ_H
#define UI_QYXCQ_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QYXCQClass
{
public:
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QYXCQClass)
    {
        if (QYXCQClass->objectName().isEmpty())
            QYXCQClass->setObjectName(QStringLiteral("QYXCQClass"));
        QYXCQClass->resize(824, 733);
        centralWidget = new QWidget(QYXCQClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        QYXCQClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QYXCQClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 824, 26));
        QYXCQClass->setMenuBar(menuBar);
        statusBar = new QStatusBar(QYXCQClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QYXCQClass->setStatusBar(statusBar);

        retranslateUi(QYXCQClass);

        QMetaObject::connectSlotsByName(QYXCQClass);
    } // setupUi

    void retranslateUi(QMainWindow *QYXCQClass)
    {
        QYXCQClass->setWindowTitle(QApplication::translate("QYXCQClass", "QYXCQ", 0));
    } // retranslateUi

};

namespace Ui {
    class QYXCQClass: public Ui_QYXCQClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QYXCQ_H
