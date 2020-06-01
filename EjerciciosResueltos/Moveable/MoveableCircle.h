#include "Moveable.h"
#include"../Shapes/Circle.h"

#pragma once
class MoveableCircle : public Moveable, public Circle
{
    MoveableCircle()=default;
public:
    MoveableCircle(string name, double radius, int x, int y);
    void moveTo(int x, int y);
};

MoveableCircle::MoveableCircle(string name, double radius, int x, int y)
: Circle(name, radius), Moveable(x, y){}

void MoveableCircle::moveTo(int x, int y)
{
    cout << "Moving Circle to new position X=" << getXPosition() << " and Y=" << getYPosition() << endl;
    setXYPosition(x, y);
}
