#include "player.h"
#include "QYXCQ.h"
#include "Engine.h"


Player::Player(int n): m_blood(4){


};
void Player::getOneCard(Card* c){

	m_cards << c;

}

//void Player::itemSelectChange(){

//	QList<QListWidgetItem* > wl = m_cardcontainer->selectedItems();
//	if (wl.isEmpty())
//		okbutton->setEnabled(false);
//	else
//		okbutton->setEnabled(true);

//}
//void Player::on_okbutton_clicked(){

//	QList<QListWidgetItem* > wl = m_cardcontainer->selectedItems();

//	foreach(QListWidgetItem* w, wl){
//		int r = m_cardcontainer->row(w);
//		playOutOneCard(r);
//		m_cardcontainer->takeItem(r);
//	}

//	QYXCQEngine->updateRemainDiscard();

//}
//void Player::playOutOneCard(int r){

//	QList<Card* >& discard = QYXCQEngine->gamecore->discardedcards;

//	discard << m_cards[r];
//	m_cards.removeAt(r);

//	//调试用,出一张牌自动拿一张牌
//	getOneCard(QYXCQEngine->gamecore->getTopCardFromRemain());


//	cardnumlabel->setText(QString::number(m_cards.length()));
//}
