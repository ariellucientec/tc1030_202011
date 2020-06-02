#include"Shapes.h"
#pragma once
class Triangle : public Shape
{
    double base;
    double height;
public:
    Triangle(){}
    Triangle(double base, double height);
    double getArea();
};

Triangle::Triangle(double base, double height) 
{
    this->base = base;
    this->height = height;
}

double Triangle::getArea()
{
    return (base*height)/2;
}
