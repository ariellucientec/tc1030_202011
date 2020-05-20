#include <iostream>
using namespace std;

class A
{
public:
    int a=10;  //prohibido hacer públicos los atributos
                //prohibido inicializar variables fuera del constructor
};
class B : public A  //B hereda de manera pública a la clase A
{

};
class C : public B  //C hereda de manera pública a la clase B
{
public:
    void print()
    {
        cout << a;
    }
};

int main()
{
    C ejemplo;
    ejemplo.print();
}