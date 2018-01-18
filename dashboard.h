#ifndef DASHBOARD_H
#define DASHBOARD_H

#include "QtHeader.h"


class DashBoard : public QGraphicsItem{

public:

    DashBoard();
    QRectF boundingRect() const;

protected:

    void paint(QPainter* painter,const QStyleOptionGraphicsItem *option, QWidget * widget = 0);
};

#endif // DASHBOARD_H
