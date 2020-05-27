#include"Person.h"

Person* Person::getParent()
{
    return parent;
}
string Person::getName()
{
    return name;
}

Person::Person()
{
    parent = 0;
    name = "eva";
}

Person::Person(string name, Person* parent)
{
    this->name = name;
    this->parent = parent;
}
