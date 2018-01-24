#include "basiccards.h"

Slash::Slash(QString suit, QString p):BasicCard(tr("slash"), suit, p){
    m_engbasic = "slash";
}
Parry::Parry(QString suit, QString p):BasicCard(tr("parry"), suit, p){
    m_engbasic = "parry";
}
Supplement::Supplement(QString suit, QString p):BasicCard(tr("supplement"), suit, p){
    m_engbasic = "supplement";
}
