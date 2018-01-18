/********************************************************************************
** Form generated from reading UI file 'cardOverView.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CARDOVERVIEW_H
#define UI_CARDOVERVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_cardOverViewDialog
{
public:
    QTableWidget *tableWidget;

    void setupUi(QDialog *cardOverViewDialog)
    {
        if (cardOverViewDialog->objectName().isEmpty())
            cardOverViewDialog->setObjectName(QStringLiteral("cardOverViewDialog"));
        cardOverViewDialog->resize(788, 641);
        tableWidget = new QTableWidget(cardOverViewDialog);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(50, 60, 611, 501));
        tableWidget->setShowGrid(true);
        tableWidget->setColumnCount(4);

        retranslateUi(cardOverViewDialog);

        QMetaObject::connectSlotsByName(cardOverViewDialog);
    } // setupUi

    void retranslateUi(QDialog *cardOverViewDialog)
    {
        cardOverViewDialog->setWindowTitle(QApplication::translate("cardOverViewDialog", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class cardOverViewDialog: public Ui_cardOverViewDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CARDOVERVIEW_H
