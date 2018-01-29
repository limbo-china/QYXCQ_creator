#include "clickableitem.h"

ClickableItem::ClickableItem(QString name,QGraphicsItem* parent): QGraphicsObject(parent){

    setAcceptHoverEvents(true);

    m_name = name;
    m_enabled = false;
    m_hovered = false;

}
void ClickableItem::enable(){
    m_enabled = true;
    update();
}
void ClickableItem::disable(){
    m_enabled = false;
    update();
}
void ClickableItem::paint(QPainter* painter,const QStyleOptionGraphicsItem *option, QWidget * widget){

    if(m_enabled)
        painter->drawImage(QRectF(boundingRect().x()+2,boundingRect().y()+2,
                          boundingRect().width()-4,boundingRect().height()-4), m_lighted_image);
    else
        painter->drawImage(QRectF(boundingRect().x()+2,boundingRect().y()+2,
                          boundingRect().width()-4,boundingRect().height()-4), m_grey_image);
    if(m_hovered){
        painter->setOpacity(1);
        painter->setPen(QPen(Qt::red, 5));
        painter->drawRoundedRect(boundingRect(),15,15);
    }
}
void ClickableItem::mouseReleaseEvent(QGraphicsSceneMouseEvent *event){

    if(m_enabled)
        emit clicked();
}
void ClickableItem::mousePressEvent(QGraphicsSceneMouseEvent *event){

}
void ClickableItem::hoverEnterEvent(QGraphicsSceneHoverEvent *event){

    if(m_enabled){
        m_hovered = true;
        setCursor(Qt::PointingHandCursor);
        update();
    }

}
void ClickableItem::hoverLeaveEvent(QGraphicsSceneHoverEvent *event){

        m_hovered = false;
        setCursor(Qt::ArrowCursor);
        update();
}
