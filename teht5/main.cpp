#include <iostream>
#include "asunto.h"
#include "kerros.h"
#include "katutaso.h"
#include "kerrostalo.h"

using namespace std;

int main()
{
    kerrostalo iso_talo;

    cout << "Maaritetaan kerrostalon kaikkien kerrosten asunnot" << endl;
    iso_talo.kerros1->maaritaAsunnot();
    iso_talo.kerros2->maaritaAsunnot();
    iso_talo.kerros3->maaritaAsunnot();
    iso_talo.laskeKulutus(1);

    return 0;
}
