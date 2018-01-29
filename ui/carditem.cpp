#include "carditem.h"

CardItem::CardItem(Card* c, QGraphicsItem* parent):SelectableItem(c->getEngName(), parent), m_card(c)
{
    enable();
    loadImage();
    connect(this, SIGNAL(clicked()), this, SLOT(on_clicked()));
}
void CardItem::loadImage(){

    QString name = m_card->getName()+"_"+m_card->getSuit()+m_card->getPoint();
    m_lighted_image.load("./image/"+name+".png");
}

QRectF CardItem::boundingRect() const{

    qreal width = 170;
    qreal height = 220;

    return QRectF(-width/2, -height/2, width, height);
}

void CardItem::on_clicked(){

    if(isSelected())
        setPos(pos().x(), pos().y()+40);
    else
        setPos(pos().x(), pos().y()-40);

    setSelected(!isSelected());

    emit selectChange();

}
