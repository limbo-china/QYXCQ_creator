#include "dashboard.h"


DashBoard::DashBoard():carditemnum(0){

    okButton = new CustomButton("ok_lighted", this);
    okButton->setPos(-boundingRect().x()-okButton->boundingRect().width()*0.5,-okButton->boundingRect().height()*0.5-10);
    cancelButton = new CustomButton("cancel_lighted", this);
    cancelButton->setPos(-boundingRect().x()-cancelButton->boundingRect().width()*0.5,cancelButton->boundingRect().height()*0.5+10);

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
    ci->setPos(rt.x()+ci->boundingRect().width()*(0.5+carditemnum),0);
    carditemnum++;
}
void DashBoard::on_okButton_clicked(){

    QList<QGraphicsItem* > chi = childItems();

    for(int i=2;i<chi.length();i++)
        if(chi[i]->isSelected()){
            m_player->playOutOneCard(i-2);
            scene()->removeItem(chi[i]);
        }
}
