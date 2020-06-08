#include<iostream>
using namespace std;

class NoFundsException : public exception
{

public:
    const char* what()
    {
        return "no funds exception";
    }
};

int main()
{
    try
    {
        throw NoFundsException();
    }
    catch (NoFundsException& e)
    {
        cout << e.what();
    }
}