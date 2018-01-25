#include "generalitem.h"

GeneralItem::GeneralItem(Player* p, QGraphicsItem* parent):QGraphicsObject(parent), m_player(p)
{
    if(p){
        QString name = p->getGeneral()->getEngName();
        m_image.load( "./general/"+name+".png" );
        update();
    }
}
QRectF GeneralItem::boundingRect() const{

    qreal width = 170;
    qreal height = 220;

    return QRectF(-width/2, -height/2, width, height);
}
void GeneralItem::paint(QPainter* painter, const QStyleOptionGraphicsItem *option, QWidget * widget ){

    painter->drawImage(QRectF(boundingRect().x()+2,boundingRect().y()+2,
                              boundingRect().width()-4,boundingRect().height()-4), m_image);

}
void GeneralItem::setPlayer(Player* p){

    m_player = p;
    QString name = p->getGeneral()->getEngName();
    m_image.load( "./general/"+name+".png" );
    update();
}
