#ifndef GENERALITEM_H
#define GENERALITEM_H

#include "core/QtHeader.h"
#include "package/general.h"
#include "core/player.h"
#include "selectableitem.h"

class GeneralItem : public SelectableItem
{
    Q_OBJECT
public:
    GeneralItem(Player* p = NULL, QGraphicsItem* parent = Q_NULLPTR);

    QRectF boundingRect() const;
    void loadImage();
    void setPlayer(Player* p);

private slots:

    void on_clicked();

private:
    Player* m_player;
};

#endif // GENERALITEM_H
