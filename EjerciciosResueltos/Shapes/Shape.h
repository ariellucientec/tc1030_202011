#include"../commons.h"
#pragma once
class Shape
{
protected:
    const double pi;
    string shapeName;
public:
    Shape()=default;
    Shape(string name);
    string getName();           
    virtual double getArea() = 0;           // método virtual puro. Las clases hijas están obligadas a implementarlo
    virtual double getPerimeter() = 0;      // método virtual puro. 
    double getPi();
    void printArea();
};

void Shape::printArea()
{
    cout << "el area es " << getArea();
}

Shape::Shape(string name) : shapeName(name), pi(3.1416){}

string Shape::getName(){ return shapeName; }

double Shape::getPi()
{
    return pi;
}