#include "package.h"
#include "basiccards.h"
#include "skillcards.h"
#include "equipcards.h"

CardPackage::CardPackage() : Package(cardtype){

	cards
		//slash
        << new Slash(tr("spade"), tr("2"))
        << new Slash(tr("spade"), tr("3"))
        << new Slash(tr("spade"), tr("4"))
        << new Slash(tr("spade"), tr("5"))
        << new Slash(tr("spade"), tr("6"))
        << new Slash(tr("spade"), tr("7"))
        << new Slash(tr("spade"), tr("8"))
        << new Slash(tr("spade"), tr("8"))
        << new Slash(tr("spade"), tr("9"))
        << new Slash(tr("spade"), tr("9"))
        << new Slash(tr("spade"), tr("10"))
        << new Slash(tr("spade"), tr("10"))
        << new Slash(tr("spade"), tr("11"))
        << new Slash(tr("spade"), tr("11"))
        << new Slash(tr("heart"), tr("6"))
        << new Slash(tr("heart"), tr("10"))
        << new Slash(tr("heart"), tr("10"))
        << new Slash(tr("heart"), tr("11"))
        << new Slash(tr("club"), tr("7"))
        << new Slash(tr("club"), tr("8"))
        << new Slash(tr("club"), tr("8"))
        << new Slash(tr("club"), tr("9"))
        << new Slash(tr("club"), tr("9"))
        << new Slash(tr("club"), tr("10"))
        << new Slash(tr("club"), tr("10"))
        << new Slash(tr("diamond"), tr("7"))
        << new Slash(tr("diamond"), tr("8"))
        << new Slash(tr("diamond"), tr("9"))
        << new Slash(tr("diamond"), tr("10"))
        << new Slash(tr("diamond"), tr("13"))

		//parry
        << new Parry(tr("heart"), tr("2"))
        << new Parry(tr("heart"), tr("2"))
        << new Parry(tr("heart"), tr("13"))
        << new Parry(tr("diamond"), tr("2"))
        << new Parry(tr("diamond"), tr("2"))
        << new Parry(tr("diamond"), tr("3"))
        << new Parry(tr("diamond"), tr("4"))
        << new Parry(tr("diamond"), tr("5"))
        << new Parry(tr("diamond"), tr("6"))
        << new Parry(tr("diamond"), tr("7"))
        << new Parry(tr("diamond"), tr("8"))
        << new Parry(tr("diamond"), tr("9"))
        << new Parry(tr("diamond"), tr("10"))
        << new Parry(tr("diamond"), tr("11"))
        << new Parry(tr("diamond"), tr("11"))

		//supplement
        << new Supplement(tr("heart"), tr("3"))
        << new Supplement(tr("heart"), tr("4"))
        << new Supplement(tr("heart"), tr("6"))
        << new Supplement(tr("heart"), tr("7"))
        << new Supplement(tr("heart"), tr("8"))
        << new Supplement(tr("heart"), tr("9"))
        << new Supplement(tr("heart"), tr("12"))
        << new Supplement(tr("diamond"), tr("12"))

		//skill
        << new Juedou(tr("spade"), tr("1"))
        << new Juedou(tr("heart"), tr("1"))
        << new Juedou(tr("club"), tr("1"))
        << new Fudi(tr("spade"), tr("3"))
        << new Fudi(tr("spade"), tr("4"))
        << new Fudi(tr("club"), tr("3"))
        << new Fudi(tr("club"), tr("4"))
        << new Fudi(tr("club"), tr("12"))
        << new Fudi(tr("diamond"), tr("12"))
        << new Tannang(tr("heart"), tr("3"))
        << new Tannang(tr("heart"), tr("4"))
        << new Tannang(tr("club"), tr("3"))
        << new Tannang(tr("club"), tr("4"))
        << new Tannang(tr("club"), tr("11"))
        << new Wuzhong(tr("heart"), tr("7"))
        << new Wuzhong(tr("heart"), tr("8"))
        << new Wuzhong(tr("heart"), tr("9"))
        << new Wuzhong(tr("heart"), tr("11"))
        << new Jiedao(tr("spade"), tr("12"))
        << new Jiedao(tr("spade"), tr("13"))
        << new Wuxie(tr("spade"), tr("12"))
        << new Wuxie(tr("spade"), tr("13"))
        << new Wuxie(tr("heart"), tr("12"))
        << new Wuxie(tr("club"), tr("11"))
        << new Wugu(tr("diamond"), tr("3"))
        << new Wugu(tr("diamond"), tr("4"))
        << new Xiuyang(tr("diamond"), tr("1"))
        << new Fenghuo(tr("spade"), tr("7"))
        << new Fenghuo(tr("club"), tr("7"))
        << new Fenghuo(tr("club"), tr("13"))
        << new Wanjian(tr("diamond"), tr("1"))
        << new Huadi(tr("spade"), tr("6"))
        << new Huadi(tr("club"), tr("6"))
        << new Huadi(tr("diamond"), tr("6"))
        << new Shoupenglei(tr("club"), tr("1"))
        << new Shoupenglei(tr("diamond"), tr("12"))

		//equip
        << new Hufu(tr("spade"), tr("1"))
        << new Hufu(tr("heart"), tr("1"))
        << new Yuruyi(tr("spade"), tr("2"))
        << new Yuruyi(tr("club"), tr("2"))
        << new Jingong(tr("heart"), tr("13"))
        << new Jingong(tr("club"), tr("13"))
        << new Jingong(tr("diamond"), tr("13"))
        << new Fangyu(tr("spade"), tr("5"))
        << new Fangyu(tr("heart"), tr("5"))
        << new Fangyu(tr("club"), tr("5"))
        << new Yuchangjian(tr("club"), tr("6"))
        << new Bolangchui(tr("diamond"), tr("5"))
        << new Bawanggong(tr("heart"), tr("5"))
        << new Langyabang(tr("heart"), tr("12"))
        << new Panlonggun(tr("club"), tr("5"))
        << new Luyeqiang(tr("club"), tr("12"))
        << new Longlindao(tr("club"), tr("2"));

		for (int i = 0; i < cards.length(); i++)
			cards[i]->setNumber(i);

}

int CardPackage::getAllCount(){

	return cards.length();

}
//Card* CardPackage::getCardByN(int n){

//	return cards[n];
//}
