#include<string>
#include<iostream>
#include<vector>
using namespace std;
class Base
{
protected: 
    string baseAttribute;
public: 
    Base() = default;
    Base(string value) { }
    virtual void print()
    {
        cout << "printing base attribute" << endl;
    }
};
class DerivedC : public Base
{
protected:
    string derivedAttribute;
public:
    DerivedC()=default;
    DerivedC(string value){ }
    void print()    
    {
        //Base::print();
        cout << "printing derived attribute" << endl;
    }
};

class Child : public DerivedC 
{
    void print()
    {
        cout<<"child";
    }
};

int main()
{
    vector<Base*> vb;
    vb.push_back(new Base);
    vb.push_back(new DerivedC);
    vb[0]->print();
    vb[1]->print();

    Base* general;
    DerivedC* derivedC;

    general = new DerivedC;
    general->print();
    delete general;
    general = new Child;
    general->print();

    for(vector<Base*>::iterator it = vb.begin(); it != vb.end(); it++ )
    {
        delete (*it);
    }
}
