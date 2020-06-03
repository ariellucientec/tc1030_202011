#include"Software.h"
#include<iostream>
using namespace std;

#pragma once
class Application : public Software
{
public:
    Application()=default;
    Application(string name, string developer, Date initialRelease, Date latestRelease, string platform, string licence);
    void performOperations();

    virtual void getTypeOfSoftware();
};