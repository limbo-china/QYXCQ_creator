#include "dashboard.h"


DashBoard::DashBoard(){

}

QRectF DashBoard::boundingRect() const{

    qreal width = 1920*0.9;
    qreal height = 200;

    return QRectF(-width/2, -height/2, width, height);
}
void DashBoard::paint(QPainter* painter, const QStyleOptionGraphicsItem *option, QWidget * widget ){

    painter->fillRect(boundingRect() ,Qt::GlobalColor::black);
}
