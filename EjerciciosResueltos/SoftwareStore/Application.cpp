#include"Application.h"

Application::Application(string name, string developer, Date initialRelease, Date latestRelease, string platform, string licence)
: Software(name, developer, initialRelease, latestRelease, platform, licence)
{
    
}

void Application::performOperations()
{
    cout << "Application performing operations" << endl;
}

void Application::getTypeOfSoftware(){
    cout << "soy una aplicación de Software " << endl;
}