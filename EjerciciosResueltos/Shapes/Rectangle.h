#include"../commons.h"
#include"Shape.h"
#pragma once
class Rectangle : public Shape
{
    double length;
    double width;
    Rectangle()=default;
public:
    Rectangle(string name, double length, double width);
    double getArea();           
    double getPerimeter(); 
};

Rectangle::Rectangle(string name, double length, double width): Shape(name), length(length), width(width) {}

double Rectangle::getArea()
{
    return width*length;
}
double Rectangle::getPerimeter()
{
    return 2*(length+width);
}