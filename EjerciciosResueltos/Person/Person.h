#include"../commons.h"

#pragma once
class Person
{
protected:
    string name;
    char age;            //chars can be stored as integer values (max number is 255)
    Person* parent; 
    Person()=default;
public:
    Person(string name, char age, Person* parent);
    Person* getParent();
    string getName();
    char getAge();
    int getNumberOfAntecessors();
};


Person::Person(string name, char age, Person* parent) : name(name), age(age), parent(parent) {}
Person* Person::getParent()
{
    return parent;
}
string Person::getName()
{
    return name;
}
char Person::getAge()
{
    return age;
}
int Person::getNumberOfAntecessors()
{
    Person* temporalPersonPointer = getParent();
    char contAntecessors=0;
    while(temporalPersonPointer != 0)
    {
        contAntecessors++;
        temporalPersonPointer = temporalPersonPointer->getParent();
    }
    return contAntecessors;
}