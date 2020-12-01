#include "Date.h"



Date::Date()
{
    this->day = 1;
    this->month = 1;
    this->year = 1;
}

Date::Date(int day, int month, int year)
{
    this->day = day;
    this->month = month;
    this->year = year;
}

Date::~Date()
{
}

std::ostream& operator<<(std::ostream& oStream, const Date& date)
{
    oStream << date.day << "." << date.month << "." << date.year;
    return oStream;
}

std::istream& operator>>(std::istream& iStream, Date& date)
{
    iStream >> date.day >> date.month >> date.year;
    return iStream;
}