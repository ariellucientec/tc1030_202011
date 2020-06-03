#include<iostream>
#include"System.h"
using namespace std;

#pragma once
class DeviceDriver : public System
{

public:
    DeviceDriver()=default;
    DeviceDriver(string name, string developer, Date initialRelease, Date latestRelease, string platform, string licence);
    void openDevice();
    void manageDevice();
    void closeDevice();

    //This must be implemented or the class will be abstract
    void getTypeOfSoftware();
};