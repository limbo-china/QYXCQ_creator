#include "gamecore.h"
#include "QYXCQ.h"
#include "gamescene.h"
#include <iostream>
using namespace std;


GameCore::GameCore(int players){

    setParent(QYXCQWindow->gamescene);
	CardPackage* cardpackage = new CardPackage();

    foreach(Card* c, cardpackage->cards)
        discardedcards << c;
//	for (int i = 0; i < cardpackage->cards.length()-95; i++){
//		discardedcards << cardpackage->cards[i];
//	}

	playernum = players;

}
void GameCore::startGameCore(QString character){

	for (int i = 0; i < playernum; i++)
	{
		Player* player = new Player(i+1/*character*/);
		players << player;
	}

    shuffleCards();
    dealCards();

}

void GameCore::shuffleCards(){

	shuffleDiscarded(discardedcards);

	while (!discardedcards.isEmpty()){
		remaincards << discardedcards.first();
		discardedcards.pop_front();
	}
	
}
void GameCore::dealCards(){
	
	for (int i = 0; i < playernum; i++)
		for (int j = 0; j < 5; j++)
			players[i]->getOneCard(getTopCardFromRemain());

}


Card* GameCore::getTopCardFromRemain(){
	
	if (remaincards.isEmpty())
		shuffleCards();
	Card* c = remaincards.first();
	remaincards.pop_front();

    static_cast<GameScene*>(parent())->updateRemainLabel();

	return c;
}
void GameCore::shuffleDiscarded(QList<Card* >& discarded){

	qsrand(QTime(0, 0, 0).secsTo(QTime::currentTime()));

	for (int i = 0; i < discarded.length(); i++){
		int j = qrand() % discarded.length();
		discarded.swap(i, j);
	}
}
