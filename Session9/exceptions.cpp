#include<iostream>
using namespace std;

class NotFundsException : public exception
{
public:
    const char* what()  //overrides the what method of base class (exception)
    {
        return "no tienes fondos";
    }
};

class Account
{
    int balance;
public:
    Account() : balance(0){}
    void withdraw(int amount)
    {
        if (balance < amount)
            throw NotFundsException();
    }
};


int main()
{
    Account a;
    try
    {
        a.withdraw(100);
    }
    catch(NotFundsException& e)
    {
        cout << "La excepción atrapada es: "  << e.what();
    }
    try
    {
        throw bad_cast();
    }
    catch(bad_cast& e)
    {
        cout << "La excepción atrapada es: "  << e.what();
    }
    cout << "gra"
}