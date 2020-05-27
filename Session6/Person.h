#include<iostream>
#include<string>
using namespace std;

class Person;

#pragma once
class Person
{
protected:
    string name;
    Person* parent; 

public:
    Person();
    Person(string name, Person* parent);
    Person* getParent();
    string getName();

    int getNumberOfAntecessors();
};
