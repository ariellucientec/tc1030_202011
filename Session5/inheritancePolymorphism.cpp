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
        cout << "printing derived attribute" << endl;
    }
};
int main()
{

}