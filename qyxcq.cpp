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

	debuglabel = new QLabel;
	debuglabel->setMinimumSize(debuglabel->sizeHint());
	statusBar()->addWidget(debuglabel);

	gamescene = NULL;

	startAction = new QAction(tr("Start"),this);
    connect(startAction, SIGNAL(triggered()), this, SLOT(tri_startAction()));
	gameMenu = menuBar()->addMenu(tr("Game"));
	gameMenu->addAction(startAction);

	
	cardOverViewAction = new QAction(tr("Card OverView"),this);
    connect(cardOverViewAction, SIGNAL(triggered()), this, SLOT(tri_cardOverViewAction()));
	helpMenu = menuBar()->addMenu(tr("Help"));
	helpMenu->addAction(cardOverViewAction);

    gameview = new QGraphicsView();

    qreal width = 1920*0.9;
    qreal height = 1080*0.9;

    gameview->setSceneRect(-width/2,-height/2,width,height);

    gamescene = new QGraphicsScene();

    //gamescene->setSceneRect(0,0,width-100,height-100);

    gameview->setScene(gamescene);

    setCentralWidget(gameview);

    //qDebug() <<rt;
    dashboard = new DashBoard();


    //dashboard->setPos(0,rt.height()-dashboard->boundingRect().height());

    dashboard->setPos(0,(height-200)/2);

    gamescene->addItem(dashboard);


    CardPackage* package = new CardPackage();
    CardItem* carditem = new CardItem(package->cards[1],dashboard);





	
//    connect(ui.startButton, SIGNAL(clicked()), startDialog, SLOT(exec()));
//    connect(ui.cardViewButton, SIGNAL(clicked()), cardOverViewDialog, SLOT(exec()));
}
QYXCQ::~QYXCQ()
{

}

void QYXCQ::tri_startAction(){

	startDialog = new StartDialog(this);
	startDialog->exec();
}
void QYXCQ::tri_cardOverViewAction(){

	cardOverViewDialog = new CardOverViewDialog(this);
	cardOverViewDialog->exec();
}
