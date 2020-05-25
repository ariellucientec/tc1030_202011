#include<iostream>
#include"Software.h"
using namespace std;

#pragma once
class System : public Software
{

public:
    void performUserOperations();
    void manageHardware();
};