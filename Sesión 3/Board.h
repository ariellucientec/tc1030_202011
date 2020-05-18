#include<iostream>
#include<string>
#include"User.h"
using namespace std;

#pragma once 
class Board
{
    User* owner;
    string allMessages;
public:
    Board()=default;
    Board(User* owner);
    void writeMessage(User*, string message);
    void printBoard();
    void clearMessages();
    int howManyMessages(User*);
};