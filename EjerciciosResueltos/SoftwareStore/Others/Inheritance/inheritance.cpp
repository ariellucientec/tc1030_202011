#include<iostream>
#include<string>
using namespace std;

// Hpp
class Base
{
protected:
    string name;
public:
    Base();
    Base(string name);
    string getName();
};

//Implementaciones
Base::Base() : name("xxxxx")
{}

Base::Base(string name) : name(name)
{}

string Base::getName()
{
    return name;
}