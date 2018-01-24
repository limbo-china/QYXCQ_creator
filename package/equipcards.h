#ifndef EQUIPCARDS_H
#define EQUIPCARDS_H

#include "card.h"


class Hufu : public EquipCard
{
    Q_OBJECT
public:
    Hufu(QString suit, QString p);
};
class Yuruyi : public EquipCard
{
    Q_OBJECT
public:
    Yuruyi(QString suit, QString p);
};
class Jingong : public EquipCard
{
    Q_OBJECT
public:
    Jingong(QString suit, QString p);
};
class Fangyu : public EquipCard
{
    Q_OBJECT
public:
    Fangyu(QString suit, QString p);
};
class Yuchangjian : public EquipCard
{
    Q_OBJECT
public:
    Yuchangjian(QString suit, QString p);
};
class Bolangchui : public EquipCard
{
    Q_OBJECT
public:
    Bolangchui(QString suit, QString p);
};
class Bawanggong : public EquipCard
{
    Q_OBJECT
public:
    Bawanggong(QString suit, QString p);
};
class Langyabang : public EquipCard
{
    Q_OBJECT
public:
    Langyabang(QString suit, QString p);
};
class Panlonggun : public EquipCard
{
    Q_OBJECT
public:
    Panlonggun(QString suit, QString p);
};
class Luyeqiang : public EquipCard
{
    Q_OBJECT
public:
    Luyeqiang(QString suit, QString p);
};
class Longlindao : public EquipCard
{
    Q_OBJECT
public:
    Longlindao(QString suit, QString p);
};

#endif // EQUIPCARDS_H
