#include "gamescene.h"

GameScene::GameScene()
{
    qreal height = 1080*0.9;

    dashboard1 = new DashBoard();
    dashboard2 = new DashBoard();
    //dashboard->setPos(0,rt.height()-dashboard->boundingRect().height());
    dashboard1->setPos(0,(height-220)/2);
    dashboard2->setPos(0,(220-height)/2);
    addItem(dashboard1);
    addItem(dashboard2);

    remainlabel = new CustomLabel("0");
    remainlabel->setPos(0,-remainlabel->boundingRect().height()-10);
    discardedlabel = new CustomLabel("0");
    discardedlabel->setPos(0,discardedlabel->boundingRect().height()+10);
    addItem(remainlabel);
    addItem(discardedlabel);
}
void GameScene::addPlayersToBoard(QList<Player* >& players){

    dashboard1->setPlayer(players[0]);
    dashboard2->setPlayer(players[1]);
}

void GameScene::cardInit(){

    foreach(Card* c, dashboard1->player()->m_cards)
        dashboard1->addOneCardItem(c);
    foreach(Card* c, dashboard2->player()->m_cards)
        dashboard2->addOneCardItem(c);
}
void GameScene::updateRemainLabel(){

    remainlabel->setText(QString::number(gamecore->remaincards.length()));
}

void GameScene::updateDiscardedLabel(){
    discardedlabel->setText(QString::number(gamecore->discardedcards.length()));
}
