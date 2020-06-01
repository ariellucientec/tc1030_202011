#include"Triangle.h"
#include"Circle.h"
#include"Rectangle.h"
int main()
{
    Triangle t("triangle", 2.2, 3.3, 4.4, 5.5);
    cout << "área del triángulo" << t.getArea() << endl;
    t.printArea();

    Rectangle r("rectangle", 44.4, 23.2);
    cout << endl << "área del rectángulo " << r.getArea() << endl;

    r.printArea();
}