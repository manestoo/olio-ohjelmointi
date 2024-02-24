#include "devicemouse.h"
#include <iostream>
using namespace std;

DeviceMouse::DeviceMouse() {
    cout << "SET MOUSE INFORMATION\n======================" << endl;
}

void DeviceMouse::setPrimaryButton()
{
    do{
        cout << "Set Mouse Primary Button ('1' or '2'): ";
    } while ((cin >> primaryButton) && (primaryButton < 1 || primaryButton > 2) && cout << "Invalid input. ");

}

short DeviceMouse::getPrimaryButton()
{
    return primaryButton;
}
