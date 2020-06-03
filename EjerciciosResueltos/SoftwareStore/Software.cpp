#include"Software.h"

    Software::Software(string name, string developer, Date initialRelease, Date latestRelease, string platform, string licence)
    : name(name), developer(developer), initialRelease(initialRelease), latestRelease(latestRelease), platform(platform), licence(licence)
    {
        /*int num = 0;
        cout<<"es necesario que agregues los lenguajes disponibles " << endl;
        cout << "cuántos quieres agregar?" << endl;
        cin >> num;
        for(int i=0; i<num; i++)
        {
            string language;
            cout << "escribe el lenguaje " << i+1 << " que estará dispobible: ";
            cin >> language;
            addAvailableLanguage(language);
        }
        */
       addAvailableLanguage("EN");
    }

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

    void Software::addAvailableLanguage(string language)
    {
        availableLanguages.push_back(language);
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
