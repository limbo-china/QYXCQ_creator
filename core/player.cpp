#include "player.h"
#include "QYXCQ.h"

Player::Player(General* g):m_general(g){

    m_blood = g->getBlood();
}
void Player::getOneCard(Card* c){

	m_cards << c;
    c->setParent(this);
    emit aCardIn(c);

}
void Player::playOutOneCard(int r){

    QList<Card* >& discard = QYXCQWindow->gamescene->gamecore->discardedcards;

    QString filename;
    if(m_cards[r]->getType() == tr("equip"))
        filename = "equip";
    else
        filename = m_cards[r]->getEngName();

    g_audio->play("./sound/"+filename+".ogg",true);

    discard << m_cards[r];
    m_cards.removeAt(r);

    emit aCardOut(r);

    getOneCard(QYXCQWindow->gamescene->gamecore->getTopCardFromRemain());

}
