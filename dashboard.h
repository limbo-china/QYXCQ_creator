#ifndef DASHBOARD_H
#define DASHBOARD_H

#include "QtHeader.h"
#include "card.h"
#include "carditem.h"
#include "player.h"
#include "custombutton.h"

class DashBoard : public QGraphicsObject{

    Q_OBJECT

public:

    DashBoard();
    QRectF boundingRect() const;
    void addOneCardItem(Card* c);
    Player* player(){ return m_player;}
    void setPlayer(Player* p){ m_player = p;}

    void paint(QPainter* painter,const QStyleOptionGraphicsItem *option, QWidget * widget = 0);

private:

    int carditemnum;
    Player* m_player;
    CustomButton* okButton;
    CustomButton* cancelButton;

private slots:

    void on_okButton_clicked();
};

#endif // DASHBOARD_H
