#ifndef CLICKABLEITEM_H
#define CLICKABLEITEM_H

#include "core/QtHeader.h"
class ClickableItem : public QGraphicsObject
{
    Q_OBJECT
public:
    ClickableItem(QString name = "", QGraphicsItem* parent = Q_NULLPTR);

    void enable();
    void disable();
    virtual void loadImage() = 0;
    bool isEnabled(){return m_enabled;}
    bool isHovered(){return m_hovered;}

    virtual QRectF boundingRect() const = 0;
    void paint(QPainter* painter,const QStyleOptionGraphicsItem *option, QWidget * widget = 0);

protected:

    virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);
    virtual void mousePressEvent(QGraphicsSceneMouseEvent *event);
    virtual void hoverEnterEvent(QGraphicsSceneHoverEvent *event);
    virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent *event);


protected:

    QImage m_grey_image;
    QImage m_lighted_image;
    QString m_name;

private:
    bool m_hovered;
    bool m_enabled;

signals:

    void clicked();
};

#endif // CLICKABLEITEM_H
