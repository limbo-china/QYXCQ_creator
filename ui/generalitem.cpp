#include "generalitem.h"

GeneralItem::GeneralItem(Player* p, QGraphicsItem* parent):SelectableItem("",parent), m_player(p)
{
    enable();
    if(p){
        loadImage();
    }
    connect(this, SIGNAL(clicked()), this, SLOT(on_clicked()));
}
void GeneralItem::loadImage(){

    m_name = m_player->getGeneral()->getEngName();
    m_lighted_image.load( "./general/"+m_name+".png" );
    m_grey_image.load( "./general/"+m_name+".png" );
}

QRectF GeneralItem::boundingRect() const{

    qreal width = 170;
    qreal height = 220;

    return QRectF(-width/2, -height/2, width, height);
}
void GeneralItem::setPlayer(Player* p){

    m_player = p;
    loadImage();
    update();
}
void GeneralItem::on_clicked(){

    setSelected(!isSelected());
}
