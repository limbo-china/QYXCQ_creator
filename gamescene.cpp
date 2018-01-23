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

    connect(this, SIGNAL(rightClicked()), this, SLOT(on_rightClicked()));
}
void GameScene::addPlayersToBoard(QList<Player* >& players){

    dashboard1->setPlayer(players[0]);
    connect(players[0],SIGNAL(aCardIn(Card*)), dashboard1, SLOT(addOneCardItem(Card*)));
    connect(players[0],SIGNAL(aCardOut(int)), dashboard1, SLOT(removeACardItem(int)));
    dashboard2->setPlayer(players[1]);
    connect(players[1],SIGNAL(aCardIn(Card*)), dashboard2, SLOT(addOneCardItem(Card*)));
    connect(players[1],SIGNAL(aCardOut(int)), dashboard2, SLOT(removeACardItem(int)));
}
void GameScene::contextMenuEvent(QGraphicsSceneContextMenuEvent *contextMenuEvent){

    //emit rightClicked();
}

void GameScene::updateRemainLabel(){

    remainlabel->setText(QString::number(gamecore->remaincards.length()));
}

void GameScene::updateDiscardedLabel(){
    discardedlabel->setText(QString::number(gamecore->discardedcards.length()));
}
void GameScene::on_rightClicked(){

    qDebug() << 1;
    //dashboard1->playCardOut();
    QList<QGraphicsItem *> si = selectedItems();
    foreach(QGraphicsItem* ci, si)
        qDebug() << ci->isSelected();
}
