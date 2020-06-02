#include"Shape.h"
class Poligono : public Shape
{
    double apotema;
    double sideA;
public:
    Poligono()=default;
    Poligono(double apotema, double sideA);
    double getArea();
    double getPerimeter();
};

Poligono::Poligono(double apotema, double sideA) : Shape("poligono"), apotema(apotema), sideA(sideA)
{}

double Poligono::getArea()
{
    return .5 * getPerimeter() * apotema;
}

double Poligono::getPerimeter()
{
    return sideA+0;
}

int main()
{
    Poligono p(4.3, 10.0);
    p.getArea();
    p.getPerimeter();
}