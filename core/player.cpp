#include "player.h"
#include "QYXCQ.h"

#include "audio.h"

Player::Player(int n): m_blood(4){


}
void Player::getOneCard(Card* c){

	m_cards << c;
    emit aCardIn(c);

}
void Player::playOutOneCard(int r){

    QList<Card* >& discard = QYXCQWindow->gamescene->gamecore->discardedcards;

//    Audio audio;
//    QString filename;
//    if(m_cards[r]->getType() == tr("equip"))
//        filename = "equip";
//    else
//        filename = m_cards[r]->getEngName();
//    audio.playSound(filename);

    discard << m_cards[r];
    m_cards.removeAt(r);

    emit aCardOut(r);

    getOneCard(QYXCQWindow->gamescene->gamecore->getTopCardFromRemain());

}
