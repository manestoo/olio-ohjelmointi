#include "devicebaseclass.h"
#include <iostream>
using namespace std;

DeviceBaseClass::DeviceBaseClass() {}

void DeviceBaseClass::setDeviceID()
{
    cout << "Set Device ID: ";
    cin >> deviceID;
}

short DeviceBaseClass::getDeviceID()
{
    return deviceID;
}
