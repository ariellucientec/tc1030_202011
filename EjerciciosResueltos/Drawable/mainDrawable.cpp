#include"DrawableTriangle.h"

int main()
{
    DrawableTriangle dt("drawableTriangle", 5.3, 5.3, 5.3, 5.3);
    cout << "The area of drawable triangle is " <<  dt.getArea() << endl;
    cout << "and now it's time to draw the triangle on screen" << endl;
    dt.draw();
}