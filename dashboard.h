#ifndef DASHBOARD_H
#define DASHBOARD_H

#include "QtHeader.h"
#include "card.h"
#include "carditem.h"
#include "player.h"
#include "custombutton.h"
#include "customlabel.h"
#include "gamescene.h"

class DashBoard : public QGraphicsObject{

    Q_OBJECT

public:

    DashBoard();
    QRectF boundingRect() const;

    Player* player(){ return m_player;}
    void setPlayer(Player* p){ m_player = p;}
    void playCardOut();


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
};

#endif // DASHBOARD_H
