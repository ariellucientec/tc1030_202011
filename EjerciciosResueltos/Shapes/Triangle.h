#include"../commons.h"
#include"Shape.h"
#pragma once
class Triangle : public Shape
{
    double sideA;
    double sideB;
    double base;
    double height;
    Triangle()=default;
public:
    Triangle(string name, double sideA, double sideB, double base, double height);
    double getArea();
    double getPerimeter();
    double getSideA();
    double getSideB();
    double getBase();
};

Triangle::Triangle(string name, double sideA, double sideB, double base, double height) : Shape(name), sideA(sideA), sideB(sideB), base(base), height(height){}

double Triangle::getArea()
{
    return (base*height)/2;
}

double Triangle::getPerimeter()
{
    return sideA*sideB*base;
}

double Triangle::getSideA()
{
    return sideA;
}
double Triangle::getSideB()
{
    return sideB;
}
double Triangle::getBase()
{
    return base;
}