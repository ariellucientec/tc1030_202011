#include"../commons.h"

#pragma once
class Moveable 
{
protected:
    int x;
    int y;
    Moveable()=default;
public:
    Moveable(int x, int y);
    void moveTo(int x, int y);
    int getXPosition();
    int getYPosition();
    void setXYPosition(int x, int y);
};

Moveable::Moveable(int x, int y) : x(x), y(y)
{
    //scope de la función
}

void Moveable::moveTo(int x, int y)
{
    cout << "Objects inheriting from Moveable can move " << endl;
}
int Moveable::getXPosition()
{
    return x;
}
int Moveable::getYPosition()
{
    return y;
}
void Moveable::setXYPosition(int x, int y)
{
    this->x = x;
    this->y = y;
}