#include "carditem.h"

CardItem::CardItem(Card* c, QGraphicsItem* parent):QGraphicsObject(parent), m_card(c)
{

        isselect =false;
        connect(this, SIGNAL(clicked()), this, SLOT(on_clicked()));
}

QRectF CardItem::boundingRect() const{

    qreal width = 170;
    qreal height = 220;

    return QRectF(-width/2, -height/2, width, height);
}
void CardItem::paint(QPainter* painter, const QStyleOptionGraphicsItem *option, QWidget * widget ){

    //painter->fillRect(boundingRect() ,Qt::GlobalColor::red);

    QImage image;
    QString name = m_card->getName()+"_"+m_card->getSuit()+m_card->getPoint();
    image.load( "./image/"+name+".png" );

    painter->drawImage(boundingRect(), image);
}

void CardItem::mouseReleaseEvent(QGraphicsSceneMouseEvent *event){

    emit clicked();
    isselect = !isselect;
}
void CardItem::mousePressEvent(QGraphicsSceneMouseEvent *event){

}

void CardItem::on_clicked(){

    if(isselect)
        setPos(pos().x(), pos().y()+40);
    else
        setPos(pos().x(), pos().y()-40);
}
