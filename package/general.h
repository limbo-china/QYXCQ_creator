#ifndef GENERAL_H
#define GENERAL_H

#include "core/QtHeader.h"

class General : public QObject
{
    Q_OBJECT
public:
    explicit General(QString,int, QObject *parent = 0);

    QString getEngName(){return m_engname;}
    int getBlood(){return m_blood;}
private:

    QString m_engname;
    int m_blood;

signals:

public slots:
};

#endif // GENERAL_H
