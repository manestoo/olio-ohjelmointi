#include "mydeviceui.h"
#include <iostream>
using namespace std;

MyDeviceUI::MyDeviceUI(){}
MyDeviceUI::~MyDeviceUI(){}

void MyDeviceUI::uiShowMenu()
{
    int choice;

    while(true){
        cout << "DEVICE MENU\n===========" << endl;
        cout << "1: Set Mouse Information\n2: Set Touch Pad Information\n3: Set Display Information\n4: Show Devices Information\n5: Finish" << endl;
        cout << "Choose: ";
        cin >> choice;
        if(choice == 1){
            uiSetMouseInformation();
        }
        else if(choice == 2){
            uiSetTouchPadInformation();
        }
        else if(choice == 3){
            uiSetDisplayInformation();
        }
        else if(choice == 4){
            uiShowDeviceInformation();
        }
        else if(choice == 5){
            break;
        }
        else{
            cout << "Please enter a number between 1-5!" << endl;
        }
    }
}

void MyDeviceUI::uiSetMouseInformation()
{
    objectDeviceMouse = new DeviceMouse();
    objectDeviceMouse->setDeviceID();
    objectDeviceMouse->setPrimaryButton();
}

void MyDeviceUI::uiSetTouchPadInformation()
{
    objectDeviceTouchPad = new DeviceTouchPad();
    objectDeviceTouchPad->setDeviceID();
    objectDeviceTouchPad->setTouchPadSensitivity();
}

void MyDeviceUI::uiSetDisplayInformation()
{
    objectDeviceDisplay = new DeviceDisplay;
    objectDeviceDisplay->setDeviceID();
    objectDeviceDisplay->setDisplayResolution();
}

void MyDeviceUI::uiShowDeviceInformation()
{
    cout << "SHOW DEVICES INFORMATION\n======================" << endl;
    if(objectDeviceMouse){
        cout << "Mouse Information:\nDevice ID: " << objectDeviceMouse->getDeviceID() << "\nPrimary Button: " << objectDeviceMouse->getPrimaryButton() << endl;
    }
    if(objectDeviceTouchPad){
        cout << "\nTouchPad Information:\nDevice ID: " << objectDeviceTouchPad->getDeviceID() << "\nTouchPad Sensitivity: " << objectDeviceTouchPad->getTouchPadSensitivity() << endl;
    }
    if(objectDeviceDisplay){
        cout << "\nDisplay Information:\nDevice ID: " << objectDeviceDisplay->getDeviceID() << "\nDisplay Resolution Level: " << objectDeviceDisplay->getDisplayResolution() << endl;
    }
    cout << "--------------------------\n" << endl;
}
