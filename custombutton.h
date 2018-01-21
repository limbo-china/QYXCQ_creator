#ifndef CUSTOMBUTTON_H
#define CUSTOMBUTTON_H

#include "QtHeader.h"


class CustomButton : public QGraphicsObject
{

     Q_OBJECT

public:
    CustomButton(QString, QGraphicsItem* parent = Q_NULLPTR);

    QRectF boundingRect() const;
    void paint(QPainter* painter,const QStyleOptionGraphicsItem *option, QWidget * widget = 0);

protected:

    virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);
    virtual void mousePressEvent(QGraphicsSceneMouseEvent *event);

private:

    QImage m_image;

signals:

    void clicked();
};

#endif // CUSTOMBUTTON_H
