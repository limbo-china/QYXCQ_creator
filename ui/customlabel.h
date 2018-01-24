#ifndef CUSTOMLABEL_H
#define CUSTOMLABEL_H

#include "core/QtHeader.h"


class CustomLabel : public QGraphicsObject
{
public:
    CustomLabel(QString label, QGraphicsItem* parent = Q_NULLPTR);

    QRectF boundingRect() const;
    void paint(QPainter* painter,const QStyleOptionGraphicsItem *option, QWidget * widget = 0);

    void setText(QString);

private:

    QString m_label;
};

#endif // CUSTOMLABEL_H
