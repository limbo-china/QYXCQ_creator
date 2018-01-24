#include "card.h"

Card::Card(){}
Card::Card(QString suit, QString type, QString p)
: m_suit(suit), m_type(type), m_point(p)
{
}

QString Card::getSuit(){ return m_suit; }
QString Card::getType(){ return m_type; }
QString Card::getPoint(){ return m_point; }

QString Card::getName(){
	if (m_type == QCoreApplication::translate("Card", "basic")/*tr("basic")*/)
		return static_cast<BasicCard*>(this)->getBasic();
	else if (m_type == QCoreApplication::translate("Card", "skill")/*tr("skill")*/)
		return static_cast<SkillCard*>(this)->getSkill();
	else if (m_type == QCoreApplication::translate("Card", "equip")/*tr("equip")*/)
		return static_cast<EquipCard*>(this)->getEquip();
	else
		return "";
}
QString Card::getEngName(){
    if (m_type == QCoreApplication::translate("Card", "basic")/*tr("basic")*/)
        return static_cast<BasicCard*>(this)->getEngBasic();
    else if (m_type == QCoreApplication::translate("Card", "skill")/*tr("skill")*/)
        return static_cast<SkillCard*>(this)->getEngSkill();
    else if (m_type == QCoreApplication::translate("Card", "equip")/*tr("equip")*/)
        return static_cast<EquipCard*>(this)->getEngEquip();
    else
        return "";
}

//void CardInfo::init(){
//
//	suits << tr("spade") << tr("heart") << tr("club") << tr("diamond");
//	cards << tr("basic")<< tr("slash") << tr("parry")<< tr("supplement")<<tr("skill")<< tr("juedou")<< tr("shoupenglei")<< tr("wuxie")<<
//		tr("huadi")<< tr("jiedao")<< tr("wugu")<< tr("wuzhong")<< tr("xiuyang")<< tr("fenghuo")<< tr("wanjian")<< tr("tannang")<<
//		tr("fudi")<<tr("equip")<< tr("jingong")<< tr("fangyu")<< tr("yuchangjian")<< tr("bolangchui")<< tr("bawanggong")<< tr("yuruyu")<< tr("langyabang")<<
//		tr("panlonggun")<< tr("luyeqiang")<< tr("hufu")<< tr("longlindao");
//
//}
//int CardInfo::getCardNumber(Card* c){
//
//	switch (c->getType()){
//	case Card::basic:
//		switch (static_cast<BasicCard*>(c)->getBasic())
//		{
//		case BasicCard::slash:
//			return 0; break;
//		case BasicCard::parry:
//			return 1; break;
//		case BasicCard::supplement:
//			return 2; break;
//		}
//	case Card::skill:
//		switch (static_cast<SkillCard* >(c)->getSkill())
//		{
//		case SkillCard::juedou:
//			return 3; break;
//		case SkillCard::shoupenglei:
//			return 4; break;
//		case SkillCard::wuxie:
//			return 5; break;
//		case SkillCard::huadi:
//			return 6; break;
//		case SkillCard::jiedao:
//			return 7; break;
//		case SkillCard::wugu:
//			return 8; break;
//		case SkillCard::wuzhong:
//			return 9; break;
//		case SkillCard::xiuyang:
//			return 10; break;
//		case SkillCard::fenghuo:
//			return 11; break;
//		case SkillCard::wanjian:
//			return 12; break;
//		case SkillCard::tannang:
//			return 13; break;
//		case SkillCard::fudi:
//			return 14; break;
//		}
//	case Card::equip:
//		switch (static_cast<EquipCard* >(c)->getEquip())
//		{
//		case EquipCard::jingong:
//			return 15; break;
//		case EquipCard::fangyu:
//			return 16; break;
//		case EquipCard::yuchangjian:
//			return 17; break;
//		case EquipCard::bolangchui:
//			return 18; break;
//		case EquipCard::bawanggong:
//			return 19; break;
//		case EquipCard::yuruyu:
//			return 20; break;
//		case EquipCard::langyabang:
//			return 21; break;
//		case EquipCard::panlonggun:
//			return 22; break;
//		case EquipCard::luyeqiang:
//			return 23; break;
//		case EquipCard::hufu:
//			return 24; break;
//		case EquipCard::longlindao:
//			return 25; break;
//		}
//		}
//	}
//int CardInfo::getTypeByName(QString s){
//
//	for (int i = 0; i < cards.length(); i++){
//		if (cards[i] == s)
//			return i;
//	}
//	return -1;
//}
//QString CardInfo::getNameByCard(Card* c){
//
//	return cards[getTypeByCard(c)];
//}

SkillCard::SkillCard(QString skill, QString suit, QString p) : Card(suit, tr("skill"), p), m_skill(skill)
{
    m_engtype = "skill";
}

QString SkillCard::getSkill(){ return m_skill; }

BasicCard::BasicCard(QString basic, QString suit, QString p) : Card(suit, tr("basic"), p), m_basic(basic)
{
    m_engtype = "basic";
}

QString BasicCard::getBasic(){ return m_basic; }

EquipCard::EquipCard(QString equip, QString suit, QString p) : Card(suit, tr("equip"), p), m_equip(equip)
{

    m_engtype = "equip";
}

QString EquipCard::getEquip(){ return m_equip; }

