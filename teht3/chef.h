#ifndef CHEF_H
#define CHEF_H
#include <string>
using namespace std;


class Chef
{
public:
    Chef(string nimi);
    ~Chef();
    void makeSalad();
    void makeSoup();
protected:
    string name;
};


class ItalianChef: public Chef
{
public:
    ItalianChef(string nimi, int a, int b);
    ~ItalianChef();
    string getName();
    void makePasta(int a, int b);
private:
    int vesi;
    int jauhot;
};

#endif // CHEF_H
