#include<string>
using namespace std;

#pragma once
class User
{
    void setName(string name);
    string name;
public:
    User()=default;
    User(string name);
    void writeOnBoard(string);
    string getName();
};