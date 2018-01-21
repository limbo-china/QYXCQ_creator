#include "custombutton.h"

CustomButton::CustomButton(QString filename, QGraphicsItem* parent):QGraphicsObject(parent)
{
    m_image.load( "./button/"+filename+".png" );

}
QRectF CustomButton::boundingRect() const{

    qreal width = 200;
    qreal height = 100;

    return QRectF(-width/2, -height/2, width, height);
}
void CustomButton::paint(QPainter* painter, const QStyleOptionGraphicsItem *option, QWidget * widget ){

    painter->drawImage(boundingRect(), m_image);
}

void CustomButton::mouseReleaseEvent(QGraphicsSceneMouseEvent *event){

    emit clicked();
}
void CustomButton::mousePressEvent(QGraphicsSceneMouseEvent *event){

}

