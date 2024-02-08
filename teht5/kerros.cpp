#include "kerros.h"
#include <iostream>

using namespace std;

kerros::kerros() {
    as1 = new asunto;
    as2 = new asunto;
    as3 = new asunto;
    as4 = new asunto;
    cout << "Kerros luotu" << endl;
}

void kerros::maaritaAsunnot()
{
    cout << "Maaritetaan 4 kpl kerroksen asuntoja" << endl;
    as1->maarita(2, 100);
    as2->maarita(2, 100);
    as3->maarita(2, 100);
    as4->maarita(2, 100);
}

double kerros::laskeKulutus(double a)
{
    double yhteiskulutus = 4 * 200 * a;
    cout << "Kerroksen kulutus, kun hinta = " << a << " on " << yhteiskulutus << endl;
    return yhteiskulutus;
}
