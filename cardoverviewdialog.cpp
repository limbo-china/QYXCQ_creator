#include "cardoverviewdialog.h"
#include "engine.h"

CardOverViewDialog::CardOverViewDialog(QWidget * parent)
: QDialog(parent){

	ui.setupUi(this);

	CardPackage* cp = QYXCQEngine->getCardPack();
	int cardcount = cp->getAllCount();
	ui.tableWidget->setRowCount(cardcount);
	QStringList columns;
	columns << tr("Name") << tr("Suit") << tr("Point") << tr("Type");
	ui.tableWidget->setHorizontalHeaderLabels(columns);
	ui.tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);

	for (int i = 0; i < cardcount; i++){
		QTableWidgetItem* name = new QTableWidgetItem(cp->cards[i]->getName());
		QTableWidgetItem* suit = new QTableWidgetItem(cp->cards[i]->getSuit());
		QTableWidgetItem* point = new QTableWidgetItem(cp->cards[i]->getPoint());
		QTableWidgetItem* type = new QTableWidgetItem(cp->cards[i]->getType());

		QIcon spade("./icon/spade.png");
		QIcon heart("./icon/heart.png");
		QIcon club("./icon/club.png");
		QIcon diamond("./icon/diamond.png");

		if (cp->cards[i]->getSuit() == QCoreApplication::translate("CardOverViewDialog","spade"))
			suit->setIcon(spade);
		else if (cp->cards[i]->getSuit() == QCoreApplication::translate("CardOverViewDialog","heart"))
			suit->setIcon(heart);
		else if (cp->cards[i]->getSuit() == QCoreApplication::translate("CardOverViewDialog","club"))
			suit->setIcon(club);
		else
			suit->setIcon(diamond);
        ui.tableWidget->setItem(i, 0, name);
        ui.tableWidget->setItem(i, 1, suit);
        ui.tableWidget->setItem(i, 2, point);
        ui.tableWidget->setItem(i, 3, type);
	}

}
CardOverViewDialog::~CardOverViewDialog(){

}
