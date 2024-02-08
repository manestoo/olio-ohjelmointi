#ifndef ASUNTO_H
#define ASUNTO_H

class asunto
{
public:
    asunto();
    void maarita(int asukasMaara, int neliot);
    double laskeKulutus(double a);

    int asukasMaara;
    int neliot;
};

#endif // ASUNTO_H
