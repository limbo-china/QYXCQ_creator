#include "player.h"
#include "QYXCQ.h"


Player::Player(int n): m_blood(4){


}
void Player::getOneCard(Card* c){

	m_cards << c;
    emit aCardIn(c);

}
void Player::playOutOneCard(int r){

    QList<Card* >& discard = QYXCQWindow->gamescene->gamecore->discardedcards;

    discard << m_cards[r];
    m_cards.removeAt(r);

    emit aCardOut(r);

    getOneCard(QYXCQWindow->gamescene->gamecore->getTopCardFromRemain());

}
