#include "gamescene.h"

GameScene::GameScene()
{
    qreal height = 1080*0.9;
    qreal width = 1880;

    dashboard1 = new DashBoard();
    dashboard2 = new DashBoard();
    //dashboard->setPos(0,rt.height()-dashboard->boundingRect().height());
    dashboard1->setPos(200,(height-220)/2);
    dashboard2->setPos(200,(220-height)/2);
    addItem(dashboard1);
    addItem(dashboard2);

    //add general item
    gi1 = new GeneralItem();
    gi2 = new GeneralItem();
    gi1->setPos(-width/2+gi1->boundingRect().width()/2, (height-220)/2);
    gi2->setPos(-width/2+gi2->boundingRect().width()/2, (220-height)/2);
    addItem(gi1);
    addItem(gi2);

    remainlabel = new CustomLabel("0");
    remainlabel->setPos(0,-remainlabel->boundingRect().height()-10);
    discardedlabel = new CustomLabel("0");
    discardedlabel->setPos(0,discardedlabel->boundingRect().height()+10);
    addItem(remainlabel);
    addItem(discardedlabel);

    connect(this, SIGNAL(rightClicked()), dashboard1, SLOT(on_okButton_clicked()));
}
void GameScene::addPlayersToBoard(QList<Player* >& players){

    dashboard1->setPlayer(players[0]);
    dashboard2->setPlayer(players[1]);

}
//void GameScene::contextMenuEvent(QGraphicsSceneContextMenuEvent *contextMenuEvent){

//    if(dashboard1->getOKButton()->isEnabled()){
//        QTransform tf;
//        QGraphicsItem* ci =itemAt(contextMenuEvent->scenePos(),tf);

//        if(dynamic_cast<CardItem*>(ci))
//            dynamic_cast<CardItem*>(ci)->setSelected(!dynamic_cast<CardItem*>(ci)->isSelected());

//        emit rightClicked();
//    }
//}

void GameScene::updateRemainLabel(){

    remainlabel->setText(QString::number(gamecore->remaincards.length()));
}

void GameScene::updateDiscardedLabel(){
    discardedlabel->setText(QString::number(gamecore->discardedcards.length()));
}

