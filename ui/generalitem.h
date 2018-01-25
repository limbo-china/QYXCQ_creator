#ifndef GENERALITEM_H
#define GENERALITEM_H

#include "core/QtHeader.h"
#include "package/general.h"
#include "core/player.h"

class GeneralItem : public QGraphicsObject
{
public:
    GeneralItem(Player* p = NULL, QGraphicsItem* parent = Q_NULLPTR);

    QRectF boundingRect() const;
    void paint(QPainter* painter,const QStyleOptionGraphicsItem *option, QWidget * widget = 0);
    void setPlayer(Player* p);

private:
    QImage m_image;
    Player* m_player;
};

#endif // GENERALITEM_H
