#include<iostream>
using namespace std;

int add(int num1, int num2)
{
    num1 = 200;
    num2 = 400;
    return num1+num2;
}
int main()
{
    int num1 = 10;
    int num2 = 30;
    
    // pass parameters by Value (copy them)
    int res = add (num1, num2);
}