#include<iostream>
#include"Person.h"
#include"Printable.h"

using namespace std;

#pragma once
class PrintablePerson : public Person, public Printable
{
public:
    PrintablePerson()=default;
    PrintablePerson(string name, Person* parent);
    void print();
};

PrintablePerson::PrintablePerson(string name, Person* parent) : Person(name, parent){}

void PrintablePerson::print()
{
    cout<<"soy una persona y me llamo " << getName()<< endl;
}