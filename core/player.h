#ifndef PLAYER_H
#define PLAYER_H

#include "QtHeader.h"
#include "package/card.h"
#include "audio.h"
#include "package/general.h"


class Player :public QObject{

	Q_OBJECT

public:

    Player(General*);

	int getCardsNum() { return m_cards.length(); }
    void getOneCard(Card*);
	void playOutOneCard(int r);
    QList<Card* > m_cards;
    General* getGeneral(){return m_general;}
    int getBlood(){return m_blood;}

signals:
    void aCardOut(int);
    void aCardIn(Card*);

private:

      int m_blood;
      General* m_general;

//    private slots:
//    void itemSelectChange();
//    void on_okbutton_clicked();



	

};

#endif
