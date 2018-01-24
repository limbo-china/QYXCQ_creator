#ifndef STARTDIALOG_H
#define STARTDIALOG_H

#include "core/QtHeader.h"
#include "ui_startDialog.h"


class StartDialog : public QDialog{

	Q_OBJECT

public:
	StartDialog(QWidget *parent = Q_NULLPTR);
	~StartDialog();

private:
	Ui::startDialog ui;

};
#endif // STARTDIALOG_H
