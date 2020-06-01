#include"../commons.h"
#pragma once
class Shape
{
    const double pi;
    string shapeName;
public:
    Shape()=default;
    Shape(string name);
    string getName();           // is virtual to allow derived classes to Override the method
    virtual double getArea();           // is virtual to allow derived classes to Override the method
    virtual double getPerimeter();      // is virtual to allow derived classes to Override the method
    double getPi();
};

Shape::Shape(string name) : shapeName(name), pi(3.1416){}
string Shape::getName(){ return shapeName; }
double Shape::getArea()
{
    cout << "the area of the shape is unknown " << endl;
    return 0.0;
}
double Shape::getPerimeter()
{
    cout << "the perimeter of the shape is unknown " << endl;
    return 0.0;
}

double Shape::getPi()
{
    return pi;
}