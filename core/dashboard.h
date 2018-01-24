#ifndef DASHBOARD_H
#define DASHBOARD_H

#include "QtHeader.h"
#include "package/card.h"
#include "ui/carditem.h"
#include "player.h"
#include "ui/custombutton.h"
#include "ui/customlabel.h"
#include "gamescene.h"

class DashBoard : public QGraphicsObject{

    Q_OBJECT

public:

    DashBoard();
    QRectF boundingRect() const;

    Player* player(){ return m_player;}
    void setPlayer(Player* p){ m_player = p;}

    void paint(QPainter* painter,const QStyleOptionGraphicsItem *option, QWidget * widget = 0);

private:

    Player* m_player;
    QList<CardItem* > m_carditems;
    CustomButton* okButton;
    CustomButton* cancelButton;
    CustomLabel* bloodLabel;
    CustomLabel* cardnumLabel;

public slots:
    void addOneCardItem(Card*);
    void removeACardItem(int);

    void on_okButton_clicked();
    void on_selectChange();
};

#endif // DASHBOARD_H
