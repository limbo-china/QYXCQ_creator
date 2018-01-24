#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "QtHeader.h"
#include "ui_QYXCQ.h"
#include "dialog/startdialog.h"
#include "dialog/cardoverviewdialog.h"
#include "dashboard.h"
#include "player.h"
#include "ui/customlabel.h"
#include "gamescene.h"

class QYXCQ : public QMainWindow
{
	Q_OBJECT

public:
	QYXCQ(QWidget *parent = Q_NULLPTR);
	~QYXCQ();

        GameScene* gamescene;

        void gameSceneInit();
	Ui::QYXCQClass getUi(){ return ui; }
	

private:
	Ui::QYXCQClass ui;
	StartDialog* startDialog;
	CardOverViewDialog* cardOverViewDialog;

	QToolBar* gameToolbar;
	QToolBar* helpToolbar;

	QMenu* gameMenu;
	QAction* startAction;

	QMenu* helpMenu;
	QAction* cardOverViewAction;

	QGraphicsView* gameview;

private slots:

        void startGame(QString character);
        void tri_startAction();
        void tri_cardOverViewAction();

};

extern QYXCQ* QYXCQWindow;

#endif
