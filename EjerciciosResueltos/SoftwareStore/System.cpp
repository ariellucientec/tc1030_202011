#include"System.h"

System::System(string name, string developer, Date initialRelease, Date latestRelease, string platform, string licence)
: Software(name, developer, initialRelease, latestRelease, platform, licence)
{
    
}

    void System::performUserOperations()
    {
        cout<<"Performing user operationes";
    }
    void System::manageHardware()
    {
        cout<<"Managing System Hardware";
    }