#ifndef SELECTABLEITEM_H
#define SELECTABLEITEM_H

#include "clickableitem.h"

class SelectableItem : public ClickableItem
{
    Q_OBJECT
public:
    SelectableItem(QString name = "", QGraphicsItem* parent = Q_NULLPTR);

    void paint(QPainter* painter,const QStyleOptionGraphicsItem *option, QWidget * widget = 0);
    bool isSelected(){return m_selected;}
    void setSelected(bool s);

private:
    bool m_selected;
};

#endif // SELECTABLEITEM_H
