#include "Person.h"

Person::Person()
{
    name = "name";
    surname = "lastname";
}

Person::Person(std::string name, std::string surname, Address address, Date dateOfBirthday)
{
    this->name = name;
    this->surname = surname;
    this->address = address;
    this->birthday = dateOfBirthday;
}


Person::~Person()
{
}

std::ostream& operator<<(std::ostream& oStream, const Person& person)
{
    oStream <<"jmeno= "<< person.name << " " << person.surname << ", address= " << person.address << ", birthday= " << person.birthday;
    return oStream;
}

std::istream& operator>>(std::istream& iStream, Person& person)
{
    iStream >> person.name >> person.surname >> person.address >> person.birthday;;
    return iStream;
}