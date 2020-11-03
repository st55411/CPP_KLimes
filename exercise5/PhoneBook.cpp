#include <iostream>
#include "PhoneBook.h"
#include "Person.h"

Model::PhoneBook::PhoneBook() {
	first = nullptr;
	last = nullptr;
}

Model::PhoneBook::~PhoneBook() {};

void Model::PhoneBook::AddPerson(Entity::Person person)
{	
	Element* element = new Element(person);
	if (first == nullptr) {		
		first = element;
		last = element;
	}
	last->next = element;
	element->prev = last;
	last = element;
}

void Model::PhoneBook::DeletePhoneBook(PhoneBook* phonebook )
{
	Element* element = first;
	while (element != nullptr) {
		Element* el = element->next;
		delete element;
		element = el;
	}
}

std::string Model::PhoneBook::FindTelephoneNumber(std::string name) const
{
	Element* element = first;
	if (element == nullptr)
	{
		throw std::exception("The phonebook is empty!");
	}
	do
	{
		if (element->data.GetName() == name) {
			return element->data.GetTelephone();
			
		}
		element = element->next;
		if (element == nullptr)
		{
			throw std::exception("Name not found");
		}
	} while (element != nullptr);
	
	
}

std::string Model::PhoneBook::FindTelephoneNumber(int id) const
{
	Element* element = first;
	if (element == nullptr)
	{
		throw std::exception("The phonebook is empty!");
	} else {
		do
		{
			if (element->data.GetId() == id) {
				return element->data.GetTelephone();
				
			}		
			element = element->next;
			if (element == nullptr)
			{
				throw std::exception("Id not found");
			}
		} while (element != nullptr);
	}
}

void Model::PhoneBook::ToString(PhoneBook* list)
{
	Element* element = first;
	while (element != nullptr)
	{
		std::cout<< element->data.GetId() <<" "<<  element->data.GetName() <<" "<< element->data.GetTelephone()<<std::endl;
		element = element->next;		
	}
	std::cout << std::endl;
}



