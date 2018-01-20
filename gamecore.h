#ifndef GAMECORE_H
#define GAMECORE_H

#include "QtHeader.h"
#include "player.h"
#include "package.h"

class GameCore :public QObject{

	Q_OBJECT

public:

	GameCore(int players = 2);
	void startGame(QString character);
	void generatePlayerBoard(QList<Player* >*);
	void boardInit(QList<Player* >&);
	void shuffleCards();
	void dealCards();

	QList<Card* > remaincards;
	QList<Card* > discardedcards;
	Card* getTopCardFromRemain();

private:

	void shuffleDiscarded(QList<Card* >&);

	int playernum;
	QList<Player* > players;
	


};



#endif