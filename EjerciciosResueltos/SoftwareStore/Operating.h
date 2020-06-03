#include<string>
#include<iostream>
#include"System.h"
using namespace std;

class DeviceDriver;
#pragma once
class Operating : public System
{
    DeviceDriver* deviceDriver; //aggregation operation
    string shellName;
public:
    Operating()=default;
    Operating(string name, string developer, Date initialRelease, Date latestRelease, string platform, string licence);
    void manageSecurity();
    void manageMemory();
    void manageNetwork();
    void manageHardware(); //uses DeviceDriver
    void manageUserInterface();
    string getShellName();

    //This must be implemented or the class will be abstract
    void getTypeOfSoftware();
};