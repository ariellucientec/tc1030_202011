#include"User.h"

//Encapsulamiento

void User::writeOnBoard(string message )
{
    // cout <<
}

User::User(string name)
{
    setName(name);
}

string User::getName(){ return name;}
void User::setName(string name){ this->name = name;}
