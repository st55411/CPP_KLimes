#include "Person.h"


Entity::Person::Person(std::string name, std::string telephone, int id) 
{
	this->name = name;
	this->telephone = telephone;
	this->id = id;
}

Entity::Person::~Person() {}

std::string Entity::Person:: GetName() const { return name; }
std::string Entity::Person::GetTelephone() const { return telephone; }
int Entity::Person::GetId() const {return id; }

