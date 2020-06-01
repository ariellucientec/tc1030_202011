#include"Operating.h"
#include"DeviceDriver.h"

void Operating::manageSecurity()
{
    cout << "managing security" << endl;
}
void Operating::manageMemory()
{
    cout << "managing memory" << endl;
}
void Operating::manageNetwork()
{
    cout << "managing network" << endl;
}
void Operating::manageHardware()
{
    cout << "managing hardware" << endl;
}
void Operating::manageUserInterface()
{
    cout << "managing User Interface" << endl;
}

string Operating::getShellName()
{
    return shellName;
}