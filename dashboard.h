#ifndef DASHBOARD_H
#define DASHBOARD_H

#include "QtHeader.h"
#include "card.h"
#include "carditem.h"

class DashBoard : public QGraphicsItem{

public:

    DashBoard();
    QRectF boundingRect() const;
    void addOneCardItem(Card* c);

    void paint(QPainter* painter,const QStyleOptionGraphicsItem *option, QWidget * widget = 0);

private:

    int carditemnum;
};

#endif // DASHBOARD_H
