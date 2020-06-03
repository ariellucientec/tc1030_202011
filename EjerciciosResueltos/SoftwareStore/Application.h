#include"Software.h"
#include<iostream>
using namespace std;

#pragma once
class Application : public Software
{
    //Aquí no hay atributos
public:
    Application()=default;
    Application(string name, string developer, Date initialRelease, Date latestRelease, string platform, string licence);
    void performOperations();
    virtual void getTypeOfSoftware();
};