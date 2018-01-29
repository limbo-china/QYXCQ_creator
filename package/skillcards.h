#ifndef SKILLCARDS_H
#define SKILLCARDS_H

#include "card.h"

class Juedou : public SkillCard
{
    Q_OBJECT
public:
    Juedou(QString suit, QString p);
};
class Fudi : public SkillCard
{
    Q_OBJECT
public:
    Fudi(QString suit, QString p);
};
class Tannang : public SkillCard
{
    Q_OBJECT
public:
    Tannang(QString suit, QString p);
};
class Wuzhong : public SkillCard
{
    Q_OBJECT
public:
    Wuzhong(QString suit, QString p);

    //void onUse(Player* );
};
class Jiedao : public SkillCard
{
    Q_OBJECT
public:
    Jiedao(QString suit, QString p);
};
class Wuxie : public SkillCard
{
    Q_OBJECT
public:
    Wuxie(QString suit, QString p);
};
class Wugu : public SkillCard
{
    Q_OBJECT
public:
    Wugu(QString suit, QString p);
};
class Xiuyang : public SkillCard
{
    Q_OBJECT
public:
    Xiuyang(QString suit, QString p);
};
class Fenghuo : public SkillCard
{
    Q_OBJECT
public:
    Fenghuo(QString suit, QString p);
};
class Wanjian : public SkillCard
{
    Q_OBJECT
public:
    Wanjian(QString suit, QString p);
};
class Huadi : public SkillCard
{
    Q_OBJECT
public:
    Huadi(QString suit, QString p);
};
class Shoupenglei : public SkillCard
{
    Q_OBJECT
public:
    Shoupenglei(QString suit, QString p);
};


#endif // SKILLCARDS_H
