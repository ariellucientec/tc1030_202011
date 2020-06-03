#include"Application.h"
#include"Operating.h"
#include"DeviceDriver.h"

int main()
{
    Application a1("Application1", "developer", Date(10,19,2020), Date(10,10,2020), "platform", "licence");
    Application a2("Application2", "developer", Date(10,19,2020), Date(10,10,2020), "platform", "licence");
    Application a3("Application3", "developer", Date(10,19,2020), Date(10,10,2020), "platform", "licence");

    Operating o1("Operating1", "developer", Date(10,19,2020), Date(10,10,2020), "platform", "licence");
    Operating o2("Operating2", "developer", Date(10,19,2020), Date(10,10,2020), "platform", "licence");
    Operating o3("Operating3", "developer", Date(10,19,2020), Date(10,10,2020), "platform", "licence");

    DeviceDriver dd1("Operating1", "developer", Date(10,19,2020), Date(10,10,2020), "platform", "licence");
    DeviceDriver dd2("Operating2", "developer", Date(10,19,2020), Date(10,10,2020), "platform", "licence");
    DeviceDriver dd3("Operating3", "developer", Date(10,19,2020), Date(10,10,2020), "platform", "licence");
}