#ifndef CARDITEM_H
#define CARDITEM_H

#include "QtHeader.h"
#include "card.h"

class CardItem : public QGraphicsItem
{

        Q_OBJECT
public:
    CardItem(Card* c, QGraphicsItem* parent = Q_NULLPTR);

    QRectF boundingRect() const;
    void paint(QPainter* painter,const QStyleOptionGraphicsItem *option, QWidget * widget = 0);

protected:

    virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);

private slots:

    void on_clicked();

private:

    Card* m_card;

signals:

    void clicked();


};

#endif // CARDITEM_H
