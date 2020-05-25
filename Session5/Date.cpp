#include"Date.h"

    Date::Date(int day, int month, int year)
    {
        this->day = day;
        this->month = month;
        this->year = year;
    }

    int Date::getDay()
    {
        return this->day;
    }


    void Date::setDay(int day)
    {
        this->day = day;
    }


    int Date::getMonth()
    {
        return this->month;
    }


    void Date::setMonth(int month)
    {
        this->month = month;
    }


    int Date::getYear()
    {
        return this->year;
    }


    void Date::setYear(int year)
    {
        this->year = year;
    }