/********************************************************************************
** Form generated from reading UI file 'startDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STARTDIALOG_H
#define UI_STARTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_startDialog
{
public:
    QLabel *selectCharacterLabel;
    QPushButton *char1Button;
    QPushButton *char2Button;

    void setupUi(QDialog *startDialog)
    {
        if (startDialog->objectName().isEmpty())
            startDialog->setObjectName(QStringLiteral("startDialog"));
        startDialog->setWindowModality(Qt::WindowModal);
        startDialog->resize(400, 300);
        startDialog->setModal(false);
        selectCharacterLabel = new QLabel(startDialog);
        selectCharacterLabel->setObjectName(QStringLiteral("selectCharacterLabel"));
        selectCharacterLabel->setGeometry(QRect(110, 40, 171, 41));
        QFont font;
        font.setPointSize(10);
        selectCharacterLabel->setFont(font);
        char1Button = new QPushButton(startDialog);
        char1Button->setObjectName(QStringLiteral("char1Button"));
        char1Button->setGeometry(QRect(70, 140, 93, 28));
        char2Button = new QPushButton(startDialog);
        char2Button->setObjectName(QStringLiteral("char2Button"));
        char2Button->setGeometry(QRect(220, 140, 93, 28));

        retranslateUi(startDialog);

        QMetaObject::connectSlotsByName(startDialog);
    } // setupUi

    void retranslateUi(QDialog *startDialog)
    {
        startDialog->setWindowTitle(QApplication::translate("startDialog", "StartGame", 0));
        selectCharacterLabel->setText(QApplication::translate("startDialog", "select your character", 0));
        char1Button->setText(QApplication::translate("startDialog", "\350\231\236\345\247\254", 0));
        char2Button->setText(QApplication::translate("startDialog", "\351\241\271\347\276\275", 0));
    } // retranslateUi

};

namespace Ui {
    class startDialog: public Ui_startDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STARTDIALOG_H
