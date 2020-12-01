#pragma once
#ifndef PERSON_H
#define PERSON_H
#include "Address.h"
#include "Date.h"
#include <string>
class Person {
private:
	std::string name;
	std::string surname;	
	Date birthday;
	Address address;
public:

	Person();
	~Person();
	Person(std::string name, std::string surname, Address address, Date birthday);	

	friend std::ostream& operator<<(std::ostream& oStream, const Person& person);
	friend std::istream& operator>>(std::istream& iStream, Person& person);
};
#endif // !PERSON_H

