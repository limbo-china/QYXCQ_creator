#include "custombutton.h"

CustomButton::CustomButton(QString name, QGraphicsItem* parent):ClickableItem(name, parent)
{
    loadImage();
}
QRectF CustomButton::boundingRect() const{

    qreal width = 200;
    qreal height = 100;

    return QRectF(-width/2, -height/2, width, height);
}

void CustomButton::loadImage(){

    m_grey_image.load("./button/"+m_name+"_grey.png");
    m_lighted_image.load("./button/"+m_name+"_lighted.png");
}
