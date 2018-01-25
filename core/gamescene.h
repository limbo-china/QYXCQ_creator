#ifndef GAMESCENE_H
#define GAMESCENE_H

#include "ui/customlabel.h"
#include "dashboard.h"
#include "gamecore.h"
#include "ui/generalitem.h"

class DashBoard;
class GameCore;
class GameScene : public QGraphicsScene
{
    Q_OBJECT
public:
    GameScene();
    void addPlayersToBoard(QList<Player* >&);
    void updateRemainLabel();
    void updateDiscardedLabel();
    DashBoard* dashboard1;
    DashBoard* dashboard2;

    GeneralItem* gi1;
    GeneralItem* gi2;

    CustomLabel* remainlabel;
    CustomLabel* discardedlabel;

    GameCore* gamecore;
signals:
    void rightClicked();
protected:
    //virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent *contextMenuEvent);
};

#endif // GAMESCENE_H
