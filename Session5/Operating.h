#include<string>
#include<iostream>
using namespace std;

class DeviceDriver;
#pragma once
class Operating
{
    DeviceDriver* deviceDriver; //aggregation operation
    string shellName;
public:
    void manageSecurity();
    void manageMemory();
    void manageNetwork();
    void manageHardware(); //uses DeviceDriver
    void manageUserInterface();
    string getShellName();
};