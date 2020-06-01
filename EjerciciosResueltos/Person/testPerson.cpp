#include"Person.h"

int main()
{
    Person juanita("juanita", 72, 0);
    Person rosita("rosita", 52, &juanita);
    Person martitha("martitha", 22, &rosita);

    cout << "Marthita tiene "  <<martitha.getNumberOfAntecessors() << " antecessors" << endl;
}