#ifndef CARDOVERVIEWDIALOG_H
#define CARDOVERVIEWDIALOG_H

#include "core/QtHeader.h"
#include "ui_cardOverView.h"
#include "package/package.h"

class CardOverViewDialog : public QDialog{

	Q_OBJECT

public:
	CardOverViewDialog(QWidget * parent = Q_NULLPTR);
	~CardOverViewDialog();

private:
	Ui::cardOverViewDialog ui;
};

#endif
