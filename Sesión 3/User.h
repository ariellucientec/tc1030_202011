#include<string>
#include<iostream>
#include"Board.h"
using namespace std;

#pragma once
class User
{
    void setName(string name);
    string name;
public:
    User()=default;
    User(string name);
    void writeOnBoard(Board*, string);
    string getName();

    ~User();
};