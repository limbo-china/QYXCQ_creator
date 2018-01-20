#include "package.h"

CardPackage::CardPackage() : Package(cardtype){

	cards
		//slash
        << new BasicCard(tr("slash"), tr("spade"), tr("2"))
        << new BasicCard(tr("slash"), tr("spade"), tr("3"))
        << new BasicCard(tr("slash"), tr("spade"), tr("4"))
        << new BasicCard(tr("slash"), tr("spade"), tr("5"))
        << new BasicCard(tr("slash"), tr("spade"), tr("6"))
        << new BasicCard(tr("slash"), tr("spade"), tr("7"))
        << new BasicCard(tr("slash"), tr("spade"), tr("8"))
        << new BasicCard(tr("slash"), tr("spade"), tr("8"))
        << new BasicCard(tr("slash"), tr("spade"), tr("9"))
        << new BasicCard(tr("slash"), tr("spade"), tr("9"))
        << new BasicCard(tr("slash"), tr("spade"), tr("10"))
        << new BasicCard(tr("slash"), tr("spade"), tr("10"))
        << new BasicCard(tr("slash"), tr("spade"), tr("11"))
        << new BasicCard(tr("slash"), tr("spade"), tr("11"))
        << new BasicCard(tr("slash"), tr("heart"), tr("6"))
        << new BasicCard(tr("slash"), tr("heart"), tr("10"))
        << new BasicCard(tr("slash"), tr("heart"), tr("10"))
        << new BasicCard(tr("slash"), tr("heart"), tr("11"))
        << new BasicCard(tr("slash"), tr("club"), tr("7"))
        << new BasicCard(tr("slash"), tr("club"), tr("8"))
        << new BasicCard(tr("slash"), tr("club"), tr("8"))
        << new BasicCard(tr("slash"), tr("club"), tr("9"))
        << new BasicCard(tr("slash"), tr("club"), tr("9"))
        << new BasicCard(tr("slash"), tr("club"), tr("10"))
        << new BasicCard(tr("slash"), tr("club"), tr("10"))
        << new BasicCard(tr("slash"), tr("diamond"), tr("7"))
        << new BasicCard(tr("slash"), tr("diamond"), tr("8"))
        << new BasicCard(tr("slash"), tr("diamond"), tr("9"))
        << new BasicCard(tr("slash"), tr("diamond"), tr("10"))
        << new BasicCard(tr("slash"), tr("diamond"), tr("13"))

		//parry
        << new BasicCard(tr("parry"), tr("heart"), tr("2"))
        << new BasicCard(tr("parry"), tr("heart"), tr("2"))
        << new BasicCard(tr("parry"), tr("heart"), tr("13"))
        << new BasicCard(tr("parry"), tr("diamond"), tr("2"))
        << new BasicCard(tr("parry"), tr("diamond"), tr("2"))
        << new BasicCard(tr("parry"), tr("diamond"), tr("3"))
        << new BasicCard(tr("parry"), tr("diamond"), tr("4"))
        << new BasicCard(tr("parry"), tr("diamond"), tr("5"))
        << new BasicCard(tr("parry"), tr("diamond"), tr("6"))
        << new BasicCard(tr("parry"), tr("diamond"), tr("7"))
        << new BasicCard(tr("parry"), tr("diamond"), tr("8"))
        << new BasicCard(tr("parry"), tr("diamond"), tr("9"))
        << new BasicCard(tr("parry"), tr("diamond"), tr("10"))
        << new BasicCard(tr("parry"), tr("diamond"), tr("11"))
        << new BasicCard(tr("parry"), tr("diamond"), tr("11"))

		//supplement
        << new BasicCard(tr("supplement"), tr("heart"), tr("3"))
        << new BasicCard(tr("supplement"), tr("heart"), tr("4"))
        << new BasicCard(tr("supplement"), tr("heart"), tr("6"))
        << new BasicCard(tr("supplement"), tr("heart"), tr("7"))
        << new BasicCard(tr("supplement"), tr("heart"), tr("8"))
        << new BasicCard(tr("supplement"), tr("heart"), tr("9"))
        << new BasicCard(tr("supplement"), tr("heart"), tr("12"))
        << new BasicCard(tr("supplement"), tr("diamond"), tr("12"))

		//skill
        << new SkillCard(tr("juedou"), tr("spade"), tr("1"))
        << new SkillCard(tr("juedou"), tr("heart"), tr("1"))
        << new SkillCard(tr("juedou"), tr("club"), tr("1"))
        << new SkillCard(tr("fudi"), tr("spade"), tr("3"))
        << new SkillCard(tr("fudi"), tr("spade"), tr("4"))
        << new SkillCard(tr("fudi"), tr("club"), tr("3"))
        << new SkillCard(tr("fudi"), tr("club"), tr("4"))
        << new SkillCard(tr("fudi"), tr("club"), tr("12"))
        << new SkillCard(tr("fudi"), tr("diamond"), tr("12"))
        << new SkillCard(tr("tannang"), tr("heart"), tr("3"))
        << new SkillCard(tr("tannang"), tr("heart"), tr("4"))
        << new SkillCard(tr("tannang"), tr("club"), tr("3"))
        << new SkillCard(tr("tannang"), tr("club"), tr("4"))
        << new SkillCard(tr("tannang"), tr("club"), tr("11"))
        << new SkillCard(tr("wuzhong"), tr("heart"), tr("7"))
        << new SkillCard(tr("wuzhong"), tr("heart"), tr("8"))
        << new SkillCard(tr("wuzhong"), tr("heart"), tr("9"))
        << new SkillCard(tr("wuzhong"), tr("heart"), tr("11"))
        << new SkillCard(tr("jiedao"), tr("spade"), tr("12"))
        << new SkillCard(tr("jiedao"), tr("spade"), tr("13"))
        << new SkillCard(tr("wuxie"), tr("spade"), tr("12"))
        << new SkillCard(tr("wuxie"), tr("spade"), tr("13"))
        << new SkillCard(tr("wuxie"), tr("heart"), tr("12"))
        << new SkillCard(tr("wuxie"), tr("club"), tr("11"))
        << new SkillCard(tr("wugu"), tr("diamond"), tr("3"))
        << new SkillCard(tr("wugu"), tr("diamond"), tr("4"))
        << new SkillCard(tr("xiuyang"), tr("diamond"), tr("1"))
        << new SkillCard(tr("fenghuo"), tr("spade"), tr("7"))
        << new SkillCard(tr("fenghuo"), tr("club"), tr("7"))
        << new SkillCard(tr("fenghuo"), tr("club"), tr("13"))
        << new SkillCard(tr("wanjian"), tr("diamond"), tr("1"))
        << new SkillCard(tr("huadi"), tr("spade"), tr("6"))
        << new SkillCard(tr("huadi"), tr("club"), tr("6"))
        << new SkillCard(tr("huadi"), tr("diamond"), tr("6"))
        << new SkillCard(tr("shoupenglei"), tr("club"), tr("1"))
        << new SkillCard(tr("shoupenglei"), tr("diamond"), tr("12"))

		//equip
        << new EquipCard(tr("hufu"), tr("spade"), tr("1"))
        << new EquipCard(tr("hufu"), tr("heart"), tr("1"))
        << new EquipCard(tr("yuruyu"), tr("spade"), tr("2"))
        << new EquipCard(tr("yuruyu"), tr("club"), tr("2"))
        << new EquipCard(tr("jingong"), tr("heart"), tr("13"))
        << new EquipCard(tr("jingong"), tr("club"), tr("13"))
        << new EquipCard(tr("jingong"), tr("diamond"), tr("13"))
        << new EquipCard(tr("fangyu"), tr("spade"), tr("5"))
        << new EquipCard(tr("fangyu"), tr("heart"), tr("5"))
        << new EquipCard(tr("fangyu"), tr("club"), tr("5"))
        << new EquipCard(tr("yuchangjian"), tr("club"), tr("6"))
        << new EquipCard(tr("bolangchui"), tr("diamond"), tr("5"))
        << new EquipCard(tr("bawanggong"), tr("heart"), tr("5"))
        << new EquipCard(tr("langyabang"), tr("heart"), tr("12"))
        << new EquipCard(tr("panlonggun"), tr("club"), tr("5"))
        << new EquipCard(tr("luyeqiang"), tr("club"), tr("12"))
        << new EquipCard(tr("longlindao"), tr("club"), tr("2"));

		for (int i = 0; i < cards.length(); i++)
			cards[i]->setNumber(i);

}

int CardPackage::getAllCount(){

	return cards.length();

}
Card* CardPackage::getCardByN(int n){

	return cards[n];
}
