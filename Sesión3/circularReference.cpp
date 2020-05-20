#include<iostream>
#include<string>
using namespace std;

//forward declaration   -- declaración adelantada
class Wife;

class Husband
{
    string name; 
    Wife* wife;
public:
    Husband(string);
    Wife* getWife();
    void setWife(Wife* wife);
    string getName();
};

class Wife
{
    string name;
    Husband* husband;
public:
    Wife(string);
    Husband* getHusband();
    void setHusband(Husband* h);
    string getName();
};

Wife* Husband::getWife(){ return wife; }
Husband* Wife::getHusband(){ return husband; }
void Husband::setWife(Wife*wife){ this->wife = wife; }
void Wife::setHusband(Husband*husband){ this->husband = husband; }
string Husband::getName(){ return name; }
string Wife::getName(){ return name; }
Husband::Husband(string name){ this->name = name;}
Wife::Wife(string name){ this->name = name;}

int main()
{
    Wife* w = new Wife("Juanita");
    Husband* h = new Husband("Jaun");
    w->setHusband(h);
    h->setWife(w);

    cout<< "Soy " << w->getName() << " y contraje matrimonio con " << w->getHusband()->getName() << endl;
    cout<< "Soy " << h->getName() << " y contraje matrimonio con " << h->getWife()->getName() << endl;

    delete w;
    delete h;
}


