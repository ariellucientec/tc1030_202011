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

class Board
{
    string allMessages;
public:
    Board()=default;
    void writeMessage(string message);
    void printBoard();
    void clearMessages();
};

