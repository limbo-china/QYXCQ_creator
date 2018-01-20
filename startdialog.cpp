#include "startdialog.h"
#include "engine.h"


StartDialog::StartDialog(QWidget *parent)
: QDialog(parent)
{
	ui.setupUi(this);

	QSignalMapper *mapper = new QSignalMapper(this);

	QList<QPushButton* > buttons;
	buttons << ui.char1Button << ui.char2Button;

	for (int i = 0; i < buttons.length(); i++)
	{
		mapper->setMapping(buttons[i], QString::number(i));
		connect(buttons[i], SIGNAL(clicked()), mapper, SLOT(map()));
		connect(buttons[i], SIGNAL(clicked()), this, SLOT(accept()));
	}

	connect(mapper, SIGNAL(mapped(QString)), QYXCQEngine, SLOT(startGameCore(QString)));
}
StartDialog::~StartDialog()
{

}