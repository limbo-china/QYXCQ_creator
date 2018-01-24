#ifndef BASICCARDS_H
#define BASICCARDS_H

#include "card.h"

class Slash : public BasicCard
{
    Q_OBJECT
public:
    Slash(QString suit, QString p);
};

class Parry : public BasicCard{

    Q_OBJECT
public:
    Parry(QString suit, QString p);
};
class Supplement : public BasicCard{
    Q_OBJECT
public:
    Supplement(QString suit, QString p);
};

#endif // BASICCARDS_H
