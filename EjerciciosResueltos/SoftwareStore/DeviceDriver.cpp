#include "DeviceDriver.h"

DeviceDriver::DeviceDriver(string name, string developer, Date initialRelease, Date latestRelease, string platform, string licence)
: System(name, developer, initialRelease, latestRelease, platform, licence)
{

}

void DeviceDriver::openDevice()
{
    cout << "opening device" << endl;
}
void DeviceDriver::manageDevice()
{
    cout << "managing device" << endl;
}
void DeviceDriver::closeDevice()
{
    cout << "closing Device" << endl;
}

//This must be implemented or the class will be abstract
void DeviceDriver::getTypeOfSoftware()
{
    cout << "soy un software para administrador de dispositivos" << endl;
}