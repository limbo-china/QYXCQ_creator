#include "custombutton.h"

CustomButton::CustomButton(QString name, QGraphicsItem* parent):QGraphicsObject(parent)
{
    setAcceptHoverEvents(true);

    isHovered = false;
    isEnabled = false;
    m_name = name;
    m_image.load( "./button/"+m_name+"_gray.png" );

}
QRectF CustomButton::boundingRect() const{

    qreal width = 200;
    qreal height = 100;

    return QRectF(-width/2, -height/2, width, height);
}
void CustomButton::paint(QPainter* painter, const QStyleOptionGraphicsItem *option, QWidget * widget ){

    painter->drawImage(QRectF(boundingRect().x()+2,boundingRect().y()+2,
                              boundingRect().width()-4,boundingRect().height()-4), m_image);

    if(isHovered){
        painter->setOpacity(1);
        painter->setPen(QPen(Qt::red, 5));
        painter->drawRoundedRect(boundingRect(),15,15);
    }

}

void CustomButton::mouseReleaseEvent(QGraphicsSceneMouseEvent *event){

    if(isEnabled)
        emit clicked();
}
void CustomButton::mousePressEvent(QGraphicsSceneMouseEvent *event){

}
void CustomButton::hoverEnterEvent(QGraphicsSceneHoverEvent *event){

    if(isEnabled){
        isHovered = true;
        setCursor(Qt::PointingHandCursor);
        update();
    }

}
void CustomButton::hoverLeaveEvent(QGraphicsSceneHoverEvent *event){

    if(isEnabled){
        isHovered = false;
        setCursor(Qt::ArrowCursor);
        update();
    }
}
void CustomButton::enable(){

    isEnabled = true;
     m_image.load( "./button/"+m_name+"_lighted.png" );
     update();
}
void CustomButton::disable(){

    isEnabled = false;
     m_image.load( "./button/"+m_name+"_gray.png" );
     update();
}

