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

int main()
{
    Person eva;
    Person perla("perla", &eva);
    Person susana("susana", &perla);
    Person leticia("leticia", &susana);
    Person juanita("juanita", &susana);

    cout << "leticia tiene " << leticia.getNumberOfAntecessors() << " antecesores" << endl;

    cout << "Perla tiene " << perla.getNumberOfAntecessors() << " antecesores" << endl;

    cout << "eva tiene " << eva.getNumberOfAntecessors() << " antecesores";

}