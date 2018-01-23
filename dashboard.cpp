#include "dashboard.h"


DashBoard::DashBoard(){

    okButton = new CustomButton("ok_lighted", this);
    okButton->setPos(-boundingRect().x()-okButton->boundingRect().width()*0.5,-okButton->boundingRect().height()*0.5-10);
    cancelButton = new CustomButton("cancel_lighted", this);
    cancelButton->setPos(-boundingRect().x()-cancelButton->boundingRect().width()*0.5,cancelButton->boundingRect().height()*0.5+10);

    bloodLabel = new CustomLabel("0",this);
    bloodLabel->setPos(-boundingRect().x()-bloodLabel->boundingRect().width()*0.5-okButton->boundingRect().width(),-bloodLabel->boundingRect().height()*0.5-10);
    cardnumLabel = new CustomLabel("0",this);
    cardnumLabel->setPos(-boundingRect().x()-cardnumLabel->boundingRect().width()*0.5-okButton->boundingRect().width(),cardnumLabel->boundingRect().height()*0.5+10);

    connect(okButton, SIGNAL(clicked()), this, SLOT(on_okButton_clicked()));

}

QRectF DashBoard::boundingRect() const{

    qreal width = 1920;
    qreal height = 220;

    return QRectF(-width/2, -height/2, width, height);
}
void DashBoard::paint(QPainter* painter, const QStyleOptionGraphicsItem *option, QWidget * widget ){

    painter->fillRect(boundingRect() ,Qt::GlobalColor::yellow);
}
void DashBoard::addOneCardItem(Card* c){

    CardItem* ci = new CardItem(c, this);
    QRectF rt = boundingRect();
    ci->setPos(rt.x()+ci->boundingRect().width()*(0.5+m_carditems.length()),0);
    m_carditems << ci;
    cardnumLabel->setText(QString::number(m_carditems.length()));

}
void DashBoard::removeACardItem(int i){

    scene()->removeItem(m_carditems[i]);
    m_carditems.removeAt(i);

    cardnumLabel->setText(QString::number(m_carditems.length()));
}
void DashBoard::playCardOut(){

    foreach(CardItem* ci, m_carditems)
        qDebug() << ci->isSelected();
    for(int i=0;i<m_carditems.length();i++)
        if(m_carditems[i]->isSelected()){
            m_player->playOutOneCard(i);
            i--;
        }

    //adjust position
    for(int i=0;i<m_carditems.length();i++)
         m_carditems[i]->setPos(boundingRect().x()+m_carditems[i]->boundingRect().width()*(0.5+i),0);

    static_cast<GameScene*>(scene())->updateDiscardedLabel();
    update();
}

void DashBoard::on_okButton_clicked(){

     playCardOut();
}
