#pragma once
class SoftwareManager
{
    vector<Software*> store;

public: 
    void addSoftware(Software* s);
    Software* findByName(string name);
    void printTypesOfSoftware();
};

void SoftwareManager::addSoftware(Software* s)
{
    store.push_back(s);
}

Software* SoftwareManager::findByName(string name)
{
    for(vector<Software*>::iterator it = store.begin(); it != store.end(); it++)
    {
        if(name == (*it)->getName())
        {
            return (*it);
        }
    }
    return 0; //exceptions
}

void SoftwareManager::printTypesOfSoftware()
{   
    for(vector<Software*>::iterator it = store.begin(); it != store.end(); it++)
    {
        (*it)->getTypeOfSoftware();
    }
}