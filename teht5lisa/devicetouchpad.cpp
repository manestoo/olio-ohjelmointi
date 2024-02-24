#include "devicetouchpad.h"
#include <iostream>
using namespace std;

DeviceTouchPad::DeviceTouchPad() {
    cout << "SET TOUCHPAD INFORMATION\n======================" << endl;
}

void DeviceTouchPad::setTouchPadSensitivity()
{
    do{
        cout << "Set Touch Pad Sensitivity (1 - 5): ";
    } while ((cin >> touchPadSensitivity) && (touchPadSensitivity < 1 || touchPadSensitivity > 5) && cout << "Invalid input. ");

}

short DeviceTouchPad::getTouchPadSensitivity()
{
    return touchPadSensitivity;
}
