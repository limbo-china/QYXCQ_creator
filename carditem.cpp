#include "carditem.h"

CardItem::CardItem(Card* c, QGraphicsItem* parent):QGraphicsItem(parent), m_card(c)
{
        QRectF rt = parent->boundingRect();
        setPos(rt.x()+boundingRect().width()/2,0);
}

QRectF CardItem::boundingRect() const{

    qreal width = 192;
    qreal height = 200;

    return QRectF(-width/2, -height/2, width, height);
}
void CardItem::paint(QPainter* painter, const QStyleOptionGraphicsItem *option, QWidget * widget ){

    //painter->fillRect(boundingRect() ,Qt::GlobalColor::red);

    QImage image;
    image.load( "./image/hufu_heart1.png" );

    painter->drawImage(boundingRect(), image);
}

void CardItem::mouseReleaseEvent(QGraphicsSceneMouseEvent *event){

    emit clicked();
}

void CardItem::on_clicked(){

    setPos(pos().x(), pos().y()+20);
}
