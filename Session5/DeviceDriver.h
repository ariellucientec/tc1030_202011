#include<iostream>
using namespace std;

#pragma once
class DeviceDriver : public System
{

public:
    void openDevice();
    void manageDevice();
    void closeDevice();
};