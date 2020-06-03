#include"Application.h"
#include"Operating.h"
#include"DeviceDriver.h"
#include"SoftwareManager.h"

int main()
{
    Application a1("Application1", "developer", Date(10,19,2020), Date(10,10,2020), "platform", "licence");
    Application a2("Application2", "developer", Date(10,19,2020), Date(10,10,2020), "platform", "licence");
    Application a3("Application3", "developer", Date(10,19,2020), Date(10,10,2020), "platform", "licence");

    Operating o1("Operating1", "developer", Date(10,19,2020), Date(10,10,2020), "platform", "licence");
    Operating o2("Operating2", "developer", Date(10,19,2020), Date(10,10,2020), "platform", "licence");
    Operating o3("Operating3", "developer", Date(10,19,2020), Date(10,10,2020), "platform", "licence");

    DeviceDriver dd1("DeviceDriver1", "developer", Date(10,19,2020), Date(10,10,2020), "platform", "licence");
    DeviceDriver dd2("DeviceDriver2", "developer", Date(10,19,2020), Date(10,10,2020), "platform", "licence");
    DeviceDriver dd3("DeviceDriver3", "developer", Date(10,19,2020), Date(10,10,2020), "platform", "licence");

    SoftwareManager sm;

    sm.addSoftware(&a1);
    sm.addSoftware(&a2);
    sm.addSoftware(&a3);
    sm.addSoftware(&o1);
    sm.addSoftware(&o2);
    sm.addSoftware(&o3);
    sm.addSoftware(&dd1);
    sm.addSoftware(&dd2);
    sm.addSoftware(&dd3);

    Software* temporal = sm.findByName("Operating1");
    sm.printTypesOfSoftware();
    Software* soft = &a1;
}