#pragma once
class Date
{
    int day;
    int month;
    int year;
    Date() = default;
public:
    Date(int day, int month, int year);
    int getDay();
    void setDay(int day);
    int getMonth();
    void setMonth(int month);
    int getYear();
    void setYear(int year);
};