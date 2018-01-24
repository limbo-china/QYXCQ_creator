#ifndef CARDITEM_H
#define CARDITEM_H

#include "core/QtHeader.h"
#include "package/card.h"

class CardItem : public QGraphicsObject
{

    Q_OBJECT

public:
    CardItem(Card* c, QGraphicsItem* parent = Q_NULLPTR);

    QRectF boundingRect() const;
    void paint(QPainter* painter,const QStyleOptionGraphicsItem *option, QWidget * widget = 0);
    bool isSelected(){return selected;}
    void setSelected(bool sel){selected = sel;}

protected:

    virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);
    virtual void mousePressEvent(QGraphicsSceneMouseEvent *event);
    virtual void hoverEnterEvent(QGraphicsSceneHoverEvent *event);
    virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent *event);

private:

    Card* m_card;
    bool isHovered;
    bool selected;
    QImage m_image;

private slots:

    void on_clicked();

signals:

    void clicked();
    void selectChange();


};

#endif // CARDITEM_H
