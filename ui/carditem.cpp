#include "carditem.h"

CardItem::CardItem(Card* c, QGraphicsItem* parent):QGraphicsObject(parent), m_card(c)
{
        setAcceptHoverEvents(true);
        isHovered = false;
        selected = false;

        QString name = m_card->getName()+"_"+m_card->getSuit()+m_card->getPoint();
        m_image.load( "./image/"+name+".png" );

        connect(this, SIGNAL(clicked()), this, SLOT(on_clicked()));
}

QRectF CardItem::boundingRect() const{

    qreal width = 170;
    qreal height = 220;

    return QRectF(-width/2, -height/2, width, height);
}
void CardItem::paint(QPainter* painter, const QStyleOptionGraphicsItem *option, QWidget * widget ){

    painter->drawImage(QRectF(boundingRect().x()+2,boundingRect().y()+2,
                              boundingRect().width()-4,boundingRect().height()-4), m_image);

    if(isHovered){
        painter->setOpacity(1);
        painter->setPen(QPen(Qt::red, 5));
        painter->drawRoundedRect(boundingRect(),15,15);
    }


}

void CardItem::mouseReleaseEvent(QGraphicsSceneMouseEvent *event){

    emit clicked();

}
void CardItem::mousePressEvent(QGraphicsSceneMouseEvent *event){

}
void CardItem::hoverEnterEvent(QGraphicsSceneHoverEvent *event){

    isHovered = true;
    setCursor(Qt::PointingHandCursor);
    update();
}
void CardItem::hoverLeaveEvent(QGraphicsSceneHoverEvent *event){

    isHovered = false;
    update();
}

void CardItem::on_clicked(){

    if(selected)
        setPos(pos().x(), pos().y()+40);
    else
        setPos(pos().x(), pos().y()-40);

    selected = !selected;
    emit selectChange();

}
