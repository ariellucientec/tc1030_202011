#include"MoveableCircle.h"

int main()
{
    MoveableCircle mc("moveable circle", 65.3, 100, 400);
    cout<<"where is the circle located???" << endl;
    cout <<"The circle X position is " << mc.getXPosition() << endl;
    cout <<"The circle Y position is " << mc.getYPosition() << endl;

    cout << "then move the circule to a new position X=232 and Y=849" << endl;
    mc.moveTo(232, 849);
}