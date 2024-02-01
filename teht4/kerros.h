#ifndef KERROS_H
#define KERROS_H
#include "asunto.h"

class kerros
{
public:
    kerros();
    virtual void maaritaAsunnot();
    virtual double laskeKulutus(double a);

    asunto as1;
    asunto as2;
    asunto as3;
    asunto as4;
};

#endif // KERROS_H
