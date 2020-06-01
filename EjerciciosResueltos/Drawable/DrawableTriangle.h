#include"../commons.h"
#include"Drawable.h"
#include"../Shapes/Triangle.h"

#pragma once
class DrawableTriangle : public Triangle, public Drawable
{
protected:
    DrawableTriangle()=default;
public:
    DrawableTriangle(string name, double sideA, double sideB, double base, double height);
    void draw();
};

DrawableTriangle::DrawableTriangle(string name, double sideA, double sideB, double base, double height)
: Triangle(name, sideA, sideB, base, height)
{}

void DrawableTriangle::draw()
{
    cout << "Drawing " << getSideA() << " of side A " << endl;
    cout << "Drawing " << getSideB() << " of side B " << endl;
    cout << "Drawing " << getBase() << " of Base " << endl;
}

