#ifndef CUSTOMBUTTON_H
#define CUSTOMBUTTON_H

#include "core/QtHeader.h"


class CustomButton : public QGraphicsObject
{

     Q_OBJECT

public:
    CustomButton(QString, QGraphicsItem* parent = Q_NULLPTR);

    void enable();
    void disable();
    bool isEnabled(){return _enabled;}

    QRectF boundingRect() const;
    void paint(QPainter* painter,const QStyleOptionGraphicsItem *option, QWidget * widget = 0);

protected:

    virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);
    virtual void mousePressEvent(QGraphicsSceneMouseEvent *event);
    virtual void hoverEnterEvent(QGraphicsSceneHoverEvent *event);
    virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent *event);

private:

    QImage m_image;
    bool isHovered;
    bool _enabled;
    QString m_name;

signals:

    void clicked();
};

#endif // CUSTOMBUTTON_H
