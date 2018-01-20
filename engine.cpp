#include "engine.h"
#include "QYXCQ.h"

Engine* QYXCQEngine = NULL;

Engine::Engine()
{
	cardpack = new CardPackage();
	gamecore = new GameCore();
}
Engine::~Engine()
{

}
void Engine::updateRemainDiscard(){

	/*QYXCQWindow->getUi().remainNumLabel->setText(QString::number(gamecore->remaincards.length()));
	QYXCQWindow->getUi().discardNumLabel->setText(QString::number(gamecore->discardedcards.length()));*/
}
void Engine::startGameCore(QString character){

	//QYXCQWindow->getUi().menuGroupBox->setVisible(false);
	gamecore->startGame(character);
}
CardPackage* Engine::getCardPack(){
	return cardpack;
}