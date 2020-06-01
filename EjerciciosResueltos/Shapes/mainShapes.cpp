#include"Triangle.h"
#include"Circle.h"
#include"Rectangle.h"
int main()
{
    Triangle t("triangle", 2.2, 3.3, 4.4, 5.5);
    Circle c("circle", 3.2);
    Rectangle r("rectangle", 4.2, 5.7);

    cout << "area of circle: " << c.getArea() << endl;
    cout << "area of triangle: " << t.getArea() << endl;
    cout << "area of rectangle: " << r.getArea() << endl;
}