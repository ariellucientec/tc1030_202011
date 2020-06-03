#include<iostream>
#include"Software.h"
using namespace std;

#pragma once
class System : public Software
{

public:
    System()=default;
    System(string name, string developer, Date initialRelease, Date latestRelease, string platform, string licence);
    void performUserOperations();
    void manageHardware();
};