#ifndef DEVICEBASECLASS_H
#define DEVICEBASECLASS_H

class DeviceBaseClass
{
public:
    DeviceBaseClass();
    void setDeviceID();
    short  getDeviceID();
protected:
    short deviceID;
};

#endif // DEVICEBASECLASS_H
