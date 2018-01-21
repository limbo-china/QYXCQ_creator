#include "QYXCQ.h"
#include "engine.h"

#include "carditem.h"
#include "package.h"

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


}
QYXCQ::~QYXCQ()
{

}
void QYXCQ::gameSceneInit(){

    gameview = new QGraphicsView();

    qreal width = 1920*0.9;
    qreal height = 1080*0.9;

    gameview->setSceneRect(-width/2,-height/2,width,height);
    gamescene = new QGraphicsScene();
    gameview->setScene(gamescene);
    setCentralWidget(gameview);
    dashboard1 = new DashBoard();
    dashboard2 = new DashBoard();
    //dashboard->setPos(0,rt.height()-dashboard->boundingRect().height());
    dashboard1->setPos(0,(height-220)/2);
    dashboard2->setPos(0,(220-height)/2);
    gamescene->addItem(dashboard1);
    gamescene->addItem(dashboard2);

}
void QYXCQ::addPlayersToBoard(QList<Player* >& players){

    dashboard1->setPlayer(players[0]);
    dashboard2->setPlayer(players[1]);
}

void QYXCQ::dealCardInit(){

    foreach(Card* c, dashboard1->player()->m_cards)
        dashboard1->addOneCardItem(c);
    foreach(Card* c, dashboard2->player()->m_cards)
        dashboard2->addOneCardItem(c);
}

void QYXCQ::tri_startAction(){

	startDialog = new StartDialog(this);
	startDialog->exec();
}
void QYXCQ::tri_cardOverViewAction(){

	cardOverViewDialog = new CardOverViewDialog(this);
	cardOverViewDialog->exec();
}
