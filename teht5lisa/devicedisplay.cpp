#include "devicedisplay.h"
#include <iostream>
using namespace std;

DeviceDisplay::DeviceDisplay() {
    cout << "SET DISPLAY INFORMATION\n======================" << endl;
}

void DeviceDisplay::setDisplayResolution()
{
    do{
        cout << "Set Display Resolution (1 - 10): ";
    } while ((cin >> displayResolution) && (displayResolution < 1 || displayResolution > 10) && cout << "Invalid input. ");
}

short DeviceDisplay::getDisplayResolution()
{
    return displayResolution;
}
