#include"../commons.h"
#include"Shape.h"
#pragma once
class Circle : public Shape
{
    double radius;
    Circle() = default;
public:
    Circle(string name, double radius);
    double getArea();
    double getPerimeter();
};

Circle::Circle(string name, double radius) : Shape(name), radius(radius){}
double Circle::getArea()
{
    return getPi()*radius*radius;
}
double Circle::getPerimeter()
{
    return 2*getPi()*radius;
}