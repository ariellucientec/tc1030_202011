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
    parent = 0;  // parent = nulo NULL
    name = "eva";
}

Person::Person(string name, Person* parent)
{
    this->name = name;
    this->parent = parent;
}

int Person::getNumberOfAntecessors()
{
    int contAntecessors = 0;
    Person* pointer2Move = this; //Soy leticia
    while (pointer2Move->getParent() != 0)
    {
        contAntecessors++;
        pointer2Move = pointer2Move->getParent();
    }
    return contAntecessors;
}


// Clases simples con acciones simples

