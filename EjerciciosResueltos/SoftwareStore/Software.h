#include<string>
#include<vector>
#include<iostream>
#include"Date.h"
using namespace std;

#pragma once
class Software
{
protected:
    string name;
    string developer;
    Date initialRelease;
    Date latestRelease;
    vector<string> availableLanguages;
    string platform;
    string licence;

public:
    Software()=default;
    Software(string name, string developer, Date initialRelease, Date latestRelease, string platform, string licence);
    string getName();
    void setName(string name);
    string getDeveloper();
    void setDeveloper(string developer);
    Date getInitialRelease();
    void setInitialRelease(Date initialRelease);
    Date getLatestRelease();
    void setLatestRelease(Date latestRelease);
    vector<string> getAvailableLanguages();
    void addAvailableLanguage(string language);
    string getPlatform();
    void setPlatform(string platform);
    string getLicence();
    void setLicence(string licence);

    virtual void getTypeOfSoftware() = 0;
};