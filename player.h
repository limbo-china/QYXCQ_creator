#ifndef PLAYER_H
#define PLAYER_H

#include "QtHeader.h"
#include "Card.h"


class Player :public QObject{

	Q_OBJECT

public:

	Player(int n/*QString character*/);

	//ui
	QListWidget* m_cardcontainer;
	QPushButton* okbutton;
	QPushButton* cancelbutton;
	QLabel* bloodlabel;
	QLabel* cardnumlabel;
	int getBlood(){ return m_blood; }
	int getCardsNum() { return m_cards.length(); }
	void getOneCard(Card*);
	void playOutOneCard(int r);

private:

	//Genenal m_general;
	QList<Card* > m_cards;
	int m_blood;

	private slots:
	void itemSelectChange();
	void on_okbutton_clicked();

	

};

#endif