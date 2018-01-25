#ifndef GAMECORE_H
#define GAMECORE_H

#include "QtHeader.h"
#include "player.h"
#include "package/package.h"
#include "gamescene.h"
#include "package/general.h"

class GameScene;

class GameCore :public QObject{

	Q_OBJECT

public:

    GameCore(GameScene*, QString, int players = 2);
    void startGameCore();
	void shuffleCards();
	void dealCards();
    QList<Player* >& getPlayers(){return players;}

	QList<Card* > remaincards;
	QList<Card* > discardedcards;
	Card* getTopCardFromRemain();

private:

	void shuffleDiscarded(QList<Card* >&);

	int playernum;
	QList<Player* > players;
	
};



#endif
