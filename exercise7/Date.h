#pragma once
#ifndef DATE_H
#define DATE_H
#include <istream>

class Date {
private:	
	int year;
	int month;
	int day;
	

public:
	Date();
	~Date();
	Date(int day, int month, int year);	

	friend std::ostream& operator<<(std::ostream& oStream, const Date& date);
	friend std::istream& operator>>(std::istream& iStream, Date& date);

};
#endif // !DATE_H
