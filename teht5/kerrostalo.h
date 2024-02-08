#ifndef KERROSTALO_H
#define KERROSTALO_H
#include "kerros.h"
#include "katutaso.h"

class kerrostalo : kerros
{
public:
    kerrostalo();
    double laskeKulutus(double a) override;

    /*katutaso kerros1;
    kerros kerros2;
    kerros kerros3;*/

    katutaso *kerros1;
    kerros *kerros2;
    kerros *kerros3;
};

#endif // KERROSTALO_H
