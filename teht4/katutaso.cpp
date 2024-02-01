#include "katutaso.h"
#include <iostream>

using namespace std;

katutaso::katutaso() {
    cout << "Katutaso luotu" << endl;
}

void katutaso::maaritaAsunnot(){
    cout << "Maaritetaan 2 kpl katutason asuntoja" << endl;
    as1.maarita(2, 100);
    as2.maarita(2, 100);
    cout << "Maaritetaan katutason kerrokselta perittyja asuntoja" << endl;

    kerros::maaritaAsunnot();
}

double katutaso::laskeKulutus(double a){
    double yhteiskulutus = 6 * 200 * a;
    cout << "Katutaso-kerroksen kulutus, kun hinta = " << a <<  " on " << yhteiskulutus << endl;
    return yhteiskulutus;
}
