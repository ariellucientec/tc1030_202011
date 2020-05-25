#include<string>
#include<vector>
#include"Date.h"
using namespace std;

#pragma once
class Software
{
    string name;
    string developer;
    Date initialRelease;
    Date latestRelease;
    vector<string> availableLanguages;
    string platform;
    string licence;

public:
    string getName();
    void setName(string name);
    string getDeveloper();
    void setDeveloper(string developer);
    Date getInitialRelease();
    void setInitialRelease(Date initialRelease);
    Date getLatestRelease();
    void setLatestRelease(Date latestRelease);
    vector<string> getAvailableLanguages();
    void setAvailableLanguages(vector<string> availableLanguages);
    string getPlatform();
    void setPlatform(string platform);
    string getLicence();
    void setLicence(string licence);
};