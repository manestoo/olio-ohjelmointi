#include <iostream>
#include <cstdlib>

using namespace std;

int game(int maxnum){
    std::srand(100);
    int satunnainen_luku = (std::rand() % maxnum) + 1;
    int arvaus;
    int arvausten_maara = 0;
    while (true){
        cout << "Arvaa luku valilta 1-" << maxnum << ": " << endl;
        cin >> arvaus;
        if (arvaus > satunnainen_luku){
            cout << "Liian suuri" << endl <<  endl;
        }
        else if (arvaus < satunnainen_luku){
            cout << "Liian pieni" << endl << endl;
        }
        else {
            cout << "Arvasit oikein!" << endl;
            arvausten_maara += 1;
            break;
        }
        arvausten_maara += 1;
    }
    return arvausten_maara;
}

int main()
{
    int arvausten_maara = game(30);
    cout << "Arvasit " << arvausten_maara << " kertaa." << endl;
    return 0;
}
