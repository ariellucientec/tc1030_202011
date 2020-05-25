#include"Software.h"

string Software::getName()
    {
        return this->name;
    }


    void Software::setName(string name)
    {
        this->name = name;
    }


    string Software::getDeveloper()
    {
        return this->developer;
    }


    void Software::setDeveloper(string developer)
    {
        this->developer = developer;
    }


    Date Software::getInitialRelease()
    {
        return this->initialRelease;
    }


    void Software::setInitialRelease(Date initialRelease)
    {
        this->initialRelease = initialRelease;
    }


    Date Software::getLatestRelease()
    {
        return this->latestRelease;
    }


    void Software::setLatestRelease(Date latestRelease)
    {
        this->latestRelease = latestRelease;
    }

    vector<string> Software::getAvailableLanguages()
    {
        return this->availableLanguages;
    }


    void Software::setAvailableLanguages(vector<string> availableLanguages)
    {
        this->availableLanguages = availableLanguages;
    }


    string Software::getPlatform()
    {
        return this->platform;
    }


    void Software::setPlatform(string platform)
    {
        this->platform = platform;
    }


    string Software::getLicence()
    {
        return this->licence;
    }


    void Software::setLicence(string licence)
    {
        this->licence = licence;
    }
