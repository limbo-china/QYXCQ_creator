#ifndef PACKAGE_H
#define PACKAGE_H

#include "core/QtHeader.h"
#include "card.h"


class Package : public QObject{

	Q_OBJECT
	Q_ENUMS(Type)

public:

	enum Type{
		general, cardtype /*not named 'Card' to aviod conflicting with class 'Card' */
	};

	Package();

	Package(Type t){ m_type = t; }

	virtual int getAllCount() =0 ;

private:

	Type m_type;

};

class CardPackage : public Package{

	Q_OBJECT

public:
	
	CardPackage();
	QList<Card *> cards;

	int getAllCount();
    //Card* getCardByN(int n);

};

class GeneralPackage :public Package{
	
	Q_OBJECT

public:
	GeneralPackage();

};



#endif
