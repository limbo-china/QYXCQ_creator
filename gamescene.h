#ifndef GAMESCENE_H
#define GAMESCENE_H

#include "customlabel.h"
#include "dashboard.h"
#include "gamecore.h"

class DashBoard;
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

    CustomLabel* remainlabel;
    CustomLabel* discardedlabel;

    GameCore* gamecore;
signals:
    void rightClicked();
protected:
    virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent *contextMenuEvent);
private slots:
    void on_rightClicked();
};

#endif // GAMESCENE_H
