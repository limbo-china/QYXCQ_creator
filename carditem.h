#ifndef CARDITEM_H
#define CARDITEM_H

#include "QtHeader.h"
#include "card.h"

class CardItem : public QGraphicsObject
{

    Q_OBJECT

public:
    CardItem(Card* c, QGraphicsItem* parent = Q_NULLPTR);

    QRectF boundingRect() const;
    void paint(QPainter* painter,const QStyleOptionGraphicsItem *option, QWidget * widget = 0);

protected:

    virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);
    virtual void mousePressEvent(QGraphicsSceneMouseEvent *event);
    virtual void hoverEnterEvent(QGraphicsSceneHoverEvent *event);
    virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent *event);

private:

    Card* m_card;
    bool isHovered;
    QImage m_image;

private slots:

    void on_clicked();

signals:

    void clicked();


};

#endif // CARDITEM_H
