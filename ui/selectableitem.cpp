#include "selectableitem.h"

SelectableItem::SelectableItem(QString name, QGraphicsItem* parent):ClickableItem(name, parent)
{
    m_selected = false;
}
void SelectableItem::paint(QPainter* painter,const QStyleOptionGraphicsItem *option, QWidget * widget){

    ClickableItem::paint(painter, option, widget);

    if(m_selected){
        painter->setOpacity(1);
        painter->setPen(QPen(Qt::green, 5));
        painter->drawEllipse(QPointF(-boundingRect().x()-20,boundingRect().y()+20), 10,10);
    }

}
void SelectableItem::setSelected(bool s)
{
    m_selected = s;
    update();
}
