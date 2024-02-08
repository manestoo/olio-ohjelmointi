#include "asunto.h"
#include <iostream>

using namespace std;

asunto::asunto() {
    cout << "Asunto luotu" << endl;
}

void asunto::maarita(int asukasMaara, int neliot){
    cout << "Asunto maaritetty asukkaita on " << asukasMaara << " ja nelioita tassa asunnossa on " << neliot << endl;
}

double asunto::laskeKulutus(double a){
    double kulutus = a * 200;
    cout << "Asunnon kulutus, kun hinta = " << a << " on " << kulutus << endl;
    return kulutus;
}

