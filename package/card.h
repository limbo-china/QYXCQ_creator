#ifndef CARD_H
#define CARD_H
#include "core/QtHeader.h"
//#include "core/player.h"
//#include "core/QYXCQ.h"

//static QList<QString> cards;
//static QList<QString> suits;

class Card : public QObject{

	Q_OBJECT

public:

	/*enum Suit{
		spade, club, heart, diamond
	};*/

	/*enum Color{
		Red, Black
	};*/
	/*enum Type{
		basic, skill, equip
	};*/

	Card();
	Card(QString suit, QString type, QString p);
	//void setSuit(Suit s);
	//void setColor(Color c);
	//void setType(Type t);
	QString getSuit();
	QString getType();
    QString getEngType(){return m_engtype;}
	QString getName();
    QString getEngName();
	QString getPoint();
    void setNumber(int n){ m_number = n;}
    int getNumber(){ return m_number; }

    //void onUse(Player* ) ;
protected:
    QString m_engtype;
private:

	QString m_suit;
	QString  m_type;
	QString m_point;
    int m_number;
};

//class CardInfo: public QObject{
//
//	Q_OBJECT
//public:
//
//	static void init();
//	static QString getNameByCard(Card* c);
//	static int getTypeByCard(Card* c);
//	static int getTypeByName(QString s);
//	//int getCardNumber(Card* c);
//	static QList<QString> cards;
//	static QList<QString> suits;
//};

class SkillCard : public Card{

	Q_OBJECT

public:
	/*enum Skill{
		juedou, shoupenglei, wuxie, huadi, jiedao, wugu, wuzhong, xiuyang, fenghuo, wanjian, tannang, fudi
	};*/

	SkillCard(QString skill, QString sui, QString p);

	//void setSkill(Skill s);
	QString getSkill();
    QString getEngSkill(){return m_engskill;}

private:

	QString m_skill;
protected:
    QString m_engskill;

};

class BasicCard : public Card{

	Q_OBJECT

public:

	/*enum Basic{
		slash, parry, supplement
	};*/
	BasicCard(QString b, QString suit, QString p);

	//void setBasic(Basic b);
	QString getBasic();
    QString getEngBasic(){return m_engbasic;}

private:

	QString m_basic;
protected:
    QString m_engbasic;

};

class EquipCard : public Card{

	Q_OBJECT

public:

	/*enum Equip{
		jingong, fangyu, yuchangjian, bolangchui, bawanggong, yuruyu, langyabang, panlonggun, luyeqiang, hufu, longlindao
	};*/
	EquipCard(QString e, QString suit, QString p);

	//void setEquip(Equip e);
	QString getEquip();
    QString getEngEquip(){return m_engequip;}

private:

	QString m_equip;
protected:
    QString m_engequip;
};


#endif
