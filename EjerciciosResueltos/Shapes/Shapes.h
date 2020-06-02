#include<iostream>
#pragma once
class Shape
{
protected:

public:
    Shape(){}
    virtual double getArea();
};

double Shape::getArea()
{
    std::cout << "el area es " << std::endl;
}