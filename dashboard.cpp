#include "dashboard.h"


DashBoard::DashBoard():carditemnum(0){

}

QRectF DashBoard::boundingRect() const{

    qreal width = 1920;
    qreal height = 220;

    return QRectF(-width/2, -height/2, width, height);
}
void DashBoard::paint(QPainter* painter, const QStyleOptionGraphicsItem *option, QWidget * widget ){

    painter->fillRect(boundingRect() ,Qt::GlobalColor::yellow);
}
void DashBoard::addOneCardItem(Card* c){

    CardItem* ci = new CardItem(c, this);
    QRectF rt = boundingRect();
    ci->setPos(rt.x()+ci->boundingRect().width()*(0.5+carditemnum),0);
    carditemnum++;
}
