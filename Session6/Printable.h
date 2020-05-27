#include<iostream>
using namespace std;

#pragma once
class Printable
{
public:
    virtual void print();
};

void Printable::print()
{
    cout << "soy imprimible" << endl;
}

