#include "kerrostalo.h"
#include <iostream>

using namespace std;

kerrostalo::kerrostalo() {
    cout << "Kerrostalo luotu" << endl;
}

double kerrostalo::laskeKulutus(double a){
    double yhteiskulutus = (6 + 4 + 4) * 200 * a;
    cout << "Kerrostalon kulutus = " << yhteiskulutus << ", kun hinta on " << a << endl;
    return yhteiskulutus;
}
