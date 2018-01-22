#include "customlabel.h"

CustomLabel::CustomLabel(QString l, QGraphicsItem* parent):QGraphicsObject(parent), m_label(l)
{

}
QRectF CustomLabel::boundingRect() const{

    qreal width = 200;
    qreal height = 100;

    return QRectF(-width/2, -height/2, width, height);
}
void CustomLabel::paint(QPainter* painter, const QStyleOptionGraphicsItem *option, QWidget * widget ){

    QFont font;
    font.setPixelSize(30);
    painter->setFont(font);
    painter->drawText(boundingRect(), m_label);
}
void CustomLabel::setText(QString s){

    m_label = s;
    update(boundingRect());
}
