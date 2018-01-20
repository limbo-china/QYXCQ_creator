#ifndef PLAYER_H
#define PLAYER_H

#include "QtHeader.h"
#include "card.h"


class Player :public QObject{

	Q_OBJECT

public:

	Player(int n/*QString character*/);

	//ui
//	QListWidget* m_cardcontainer;
//	QPushButton* okbutton;
//	QPushButton* cancelbutton;

	int getBlood(){ return m_blood; }
	int getCardsNum() { return m_cards.length(); }
	void getOneCard(Card*);
	void playOutOneCard(int r);
    QList<Card* > m_cards;

private:

	//Genenal m_general;
	int m_blood;

//    private slots:
//    void itemSelectChange();
//    void on_okbutton_clicked();

	

};

#endif
