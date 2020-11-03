#pragma once

#ifndef PHONEBOOK_H
#define PHONEBOOK_H
#include "Person.h"


namespace Model{

	class PhoneBook
	{
	public:

		class Element {

		public:
			Element* next;
			Element* prev;
			Entity::Person data;
			Element(Entity::Person p) : data(p), next(nullptr), prev(nullptr) {}
		};
		PhoneBook();
		~PhoneBook();
		void AddPerson(Entity::Person p);

		std::string FindTelephoneNumber(std::string jmeno) const;

		std::string FindTelephoneNumber(int id) const;

		void ToString(PhoneBook* list);
		
	private:
		Element* first;
		Element* last;


	};
}




#endif // !PHONEBOOK_H

