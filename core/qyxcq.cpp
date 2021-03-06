#include "QYXCQ.h"

#include "ui/carditem.h"
#include "package/package.h"
#include "gamescene.h"
#include "audio.h"

QYXCQ* QYXCQWindow = NULL;

QYXCQ::QYXCQ(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	//ui.playBoard->setVisible(false);

	setWindowTitle(tr("yingxiongchuanqi") + " " + "V1.1");

	startAction = new QAction(tr("Start"),this);
    connect(startAction, SIGNAL(triggered()), this, SLOT(tri_startAction()));
	gameMenu = menuBar()->addMenu(tr("Game"));
	gameMenu->addAction(startAction);

	
	cardOverViewAction = new QAction(tr("Card OverView"),this);
    connect(cardOverViewAction, SIGNAL(triggered()), this, SLOT(tri_cardOverViewAction()));
	helpMenu = menuBar()->addMenu(tr("Help"));
	helpMenu->addAction(cardOverViewAction);

    g_audio = new Audio();
    g_audio->init();

}
QYXCQ::~QYXCQ()
{

}
void QYXCQ::gameSceneInit(){

    g_audio->playBGM("./sound/background.ogg");
    gameview = new QGraphicsView();

    qreal width = 1920*0.9;
    qreal height = 1080*0.9;

    gameview->setSceneRect(-width/2,-height/2,width,height);
    gamescene = new GameScene();
    gameview->setScene(gamescene);
    setCentralWidget(gameview);

}
void QYXCQ::startGame(QString character){

    gameSceneInit();

    gamescene->gamecore = new GameCore(gamescene,character);
    gamescene->addPlayersToBoard(gamescene->gamecore->getPlayers());

    gamescene->gamecore->startGameCore();
}
void QYXCQ::tri_startAction(){

	startDialog = new StartDialog(this);
	startDialog->exec();
}
void QYXCQ::tri_cardOverViewAction(){

	cardOverViewDialog = new CardOverViewDialog(this);
	cardOverViewDialog->exec();
}
