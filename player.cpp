#include "player.h"
#include "QYXCQ.h"
#include "Engine.h"


Player::Player(int n): m_blood(4){

	/*if (n == 1){
		okbutton = QYXCQWindow->getUi().player1OkButton;
		cancelbutton = QYXCQWindow->getUi().player1CancelButton;
		bloodlabel = QYXCQWindow->getUi().player1BloodLabel;
		cardnumlabel = QYXCQWindow->getUi().player1CardLabel;
		m_cardcontainer = QYXCQWindow->getUi().player1CardContainer;
	
	}
	if (n == 2){
		okbutton = QYXCQWindow->getUi().player2OkButton;
		cancelbutton = QYXCQWindow->getUi().player2CancelButton;
		bloodlabel = QYXCQWindow->getUi().player2BloodLabel;
		cardnumlabel = QYXCQWindow->getUi().player2CardLabel;
		m_cardcontainer = QYXCQWindow->getUi().player2CardContainer;

	}
	connect(okbutton, SIGNAL(clicked()), this, SLOT(on_okbutton_clicked()));
	connect(m_cardcontainer, SIGNAL(itemSelectionChanged()), this, SLOT(itemSelectChange()));*/

};
void Player::getOneCard(Card* c){

	m_cards << c;
	
	QString s1 = c->getName();
	QString s = c->getName() + " " +c->getPoint();

	QIcon spade("./icon/spade.png");
	QIcon heart("./icon/heart.png");
	QIcon club("./icon/club.png");
	QIcon diamond("./icon/diamond.png");

	QListWidgetItem* item;
	if (c->getSuit() == tr("spade"))
		item = new QListWidgetItem(spade, s);
	else if (c->getSuit() == tr("heart"))
		item = new QListWidgetItem(heart, s);
	else if (c->getSuit() == tr("club"))
		item = new QListWidgetItem(club, s);
	else
		item = new QListWidgetItem(diamond, s);

	m_cardcontainer->addItem(item);
	cardnumlabel->setText(QString::number(m_cards.length()));
}

void Player::itemSelectChange(){

	QList<QListWidgetItem* > wl = m_cardcontainer->selectedItems();
	if (wl.isEmpty())
		okbutton->setEnabled(false);
	else
		okbutton->setEnabled(true);

}
void Player::on_okbutton_clicked(){

	QList<QListWidgetItem* > wl = m_cardcontainer->selectedItems();

	foreach(QListWidgetItem* w, wl){
		int r = m_cardcontainer->row(w);
		playOutOneCard(r);
		m_cardcontainer->takeItem(r);
	}

	QYXCQEngine->updateRemainDiscard();

}
void Player::playOutOneCard(int r){

	QList<Card* >& discard = QYXCQEngine->gamecore->discardedcards;

	discard << m_cards[r];
	m_cards.removeAt(r);

	//调试用,出一张牌自动拿一张牌
	getOneCard(QYXCQEngine->gamecore->getTopCardFromRemain());


	cardnumlabel->setText(QString::number(m_cards.length()));
}