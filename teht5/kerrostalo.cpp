#include "kerrostalo.h"
#include <iostream>

using namespace std;

kerrostalo::kerrostalo() {
    kerros1 = new katutaso;
    kerros2= new kerros;
    kerros3 = new kerros;
    cout << "Kerrostalo luotu" << endl;
}

double kerrostalo::laskeKulutus(double a){
    double yhteiskulutus = (6 + 4 + 4) * 200 * a;
    cout << "Kerrostalon kulutus = " << yhteiskulutus << ", kun hinta on " << a << endl;
    return yhteiskulutus;
}
