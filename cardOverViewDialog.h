#ifndef CARDOVERVIEWDIALOG_H
#define CARDOVERVIEWDIALOG_H

#include "QtHeader.h"
#include "ui_cardOverView.h"

class CardOverViewDialog : public QDialog{

	Q_OBJECT

public:
	CardOverViewDialog(QWidget * parent = Q_NULLPTR);
	~CardOverViewDialog();

private:
	Ui::cardOverViewDialog ui;
};

#endif