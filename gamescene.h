#ifndef GAMESCENE_H
#define GAMESCENE_H

#include "customlabel.h"
#include "dashboard.h"
#include "gamecore.h"

class DashBoard;
class GameScene : public QGraphicsScene
{
public:
    GameScene();
    void cardInit();
    void addPlayersToBoard(QList<Player* >&);
    void updateRemainLabel();
    void updateDiscardedLabel();
    DashBoard* dashboard1;
    DashBoard* dashboard2;

    CustomLabel* remainlabel;
    CustomLabel* discardedlabel;

    GameCore* gamecore;
};

#endif // GAMESCENE_H
