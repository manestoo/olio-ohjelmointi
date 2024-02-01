#ifndef KATUTASO_H
#define KATUTASO_H
#include "asunto.h"
#include "kerros.h"

class katutaso : kerros
{
public:
    katutaso();
    void maaritaAsunnot() override;
    double laskeKulutus(double a) override;

    asunto as1;
    asunto as2;
};

#endif // KATUTASO_H
