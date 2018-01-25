#include "dashboard.h"

DashBoard::DashBoard(){

    okButton = new CustomButton("ok", this);
    okButton->setPos(-boundingRect().x()-200-okButton->boundingRect().width()*0.5,-okButton->boundingRect().height()*0.5-10);
    cancelButton = new CustomButton("cancel", this);
    cancelButton->setPos(-boundingRect().x()-200-cancelButton->boundingRect().width()*0.5,cancelButton->boundingRect().height()*0.5+10);

    bloodLabel = new CustomLabel("0",this);
    bloodLabel->setPos(-boundingRect().x()-200-bloodLabel->boundingRect().width()*0.5-okButton->boundingRect().width(),-bloodLabel->boundingRect().height()*0.5-10);
    cardnumLabel = new CustomLabel("0",this);
    cardnumLabel->setPos(-boundingRect().x()-200-cardnumLabel->boundingRect().width()*0.5-okButton->boundingRect().width(),cardnumLabel->boundingRect().height()*0.5+10);

    connect(okButton, SIGNAL(clicked()), this, SLOT(on_okButton_clicked()));

}

QRectF DashBoard::boundingRect() const{

    qreal width = 1920;
    qreal height = 220;

    return QRectF(-width/2, -height/2, width, height);
}
void DashBoard::paint(QPainter* painter, const QStyleOptionGraphicsItem *option, QWidget * widget ){

    QImage image;
    image.load("./background/dashboard.png");
    painter->drawImage(boundingRect() , image);

}
void DashBoard::setPlayer(Player* p){

    m_player = p;
    updateBloodLabel();

    connect(m_player,SIGNAL(aCardIn(Card*)), this, SLOT(addOneCardItem(Card*)));
    connect(m_player,SIGNAL(aCardOut(int)), this, SLOT(removeACardItem(int)));
}
void DashBoard::updateCardNumLabel(){

    cardnumLabel->setText(QString::number(m_carditems.length()));
}

void DashBoard::updateBloodLabel(){

    bloodLabel->setText(QString::number(m_player->getBlood()));
}

void DashBoard::addOneCardItem(Card* c){

    CardItem* ci = new CardItem(c, this);
    QRectF rt = boundingRect();
    ci->setPos(rt.x()+ci->boundingRect().width()*(0.5+m_carditems.length()),0);
    m_carditems << ci;
    updateCardNumLabel();

    connect(ci, SIGNAL(selectChange()), this, SLOT(on_selectChange()));

}
void DashBoard::removeACardItem(int i){

    scene()->removeItem(m_carditems[i]);
    //m_carditems[i]->setP
    m_carditems.removeAt(i);

    updateCardNumLabel();
}

void DashBoard::on_okButton_clicked(){

    for(int i=0;i<m_carditems.length();i++)
        if(m_carditems[i]->isSelected()){
            m_player->playOutOneCard(i);
            i--;
        }

    //adjust position
    for(int i=0;i<m_carditems.length();i++)
         m_carditems[i]->setPos(boundingRect().x()+m_carditems[i]->boundingRect().width()*(0.5+i),0);

    static_cast<GameScene*>(scene())->updateDiscardedLabel();
    okButton->disable();
    update();
}
void DashBoard::on_selectChange(){

    int count = 0 ;
    foreach(CardItem* ci, m_carditems)
        if(ci->isSelected())
            count++;

    if(count == 1)
        okButton->enable();
    else
        okButton->disable();

}
