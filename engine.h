#ifndef ENGINE_H
#define ENGINE_H

#include "package.h"
#include "QtHeader.h"
#include "gamecore.h"

class Engine : public QObject
{
	Q_OBJECT

public:
	Engine();
	~Engine();

	CardPackage* getCardPack();
	GameCore* gamecore;
	void updateRemainDiscard();

private:

	CardPackage *cardpack;
	

private slots:
	
	void startGameCore(QString character);

};

extern Engine* QYXCQEngine;

#endif // !ENGINE_H
