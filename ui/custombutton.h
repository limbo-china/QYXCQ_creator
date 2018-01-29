#ifndef CUSTOMBUTTON_H
#define CUSTOMBUTTON_H

#include "core/QtHeader.h"
#include "clickableitem.h"


class CustomButton : public ClickableItem
{

     Q_OBJECT

public:
    CustomButton(QString name = "", QGraphicsItem* parent = Q_NULLPTR);

    void loadImage();

    QRectF boundingRect() const;

};

#endif // CUSTOMBUTTON_H
