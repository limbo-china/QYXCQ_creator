#ifndef CARDITEM_H
#define CARDITEM_H

#include "core/QtHeader.h"
#include "package/card.h"
#include "selectableitem.h"

class CardItem : public SelectableItem
{

    Q_OBJECT

public:

    CardItem(Card* c, QGraphicsItem* parent = Q_NULLPTR);
    QRectF boundingRect() const;
    void loadImage();

private:

    Card* m_card;

private slots:

    void on_clicked();

signals:

    void selectChange();


};

#endif // CARDITEM_H
