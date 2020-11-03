#include <iostream>
#include "Person.h"
#include "Phonebook.h"
#include <time.h>


using namespace Entity;
using namespace Model;


int main() {
	srand(time(NULL));
	PhoneBook* linkedList = new PhoneBook();

	for (int i = 0; i < 10; i++) {
		Person p = Person("Person" + std::to_string(i), std::to_string((rand() %799999999 )+550000000), i);
		linkedList->AddPerson(p);
	}

	linkedList->ToString(linkedList);

	
	try {
		std::cout << linkedList->FindTelephoneNumber("Person5") << " FOUND! (searching for Person5)"<< std::endl;
	}
	catch (const std::exception exception) {
		std::cout << exception.what() << std::endl;
	}
	try {
		std::cout << linkedList->FindTelephoneNumber(5) << " FOUND! (searching for id 5)" << std::endl;
	}
	catch (const std::exception exception) {
		std::cout << exception.what() << std::endl;
	}
	try {
		std::cout << linkedList->FindTelephoneNumber("Person12") << " FOUND! (searching for Person12)"<< std::endl;
	}
	catch (const std::exception exception) {
		std::cout << exception.what() << std::endl;
	}
	
	try {
		std::cout << linkedList->FindTelephoneNumber(12) << " FOUND! (searching for id 12)"<< std::endl;
	}
	catch (const std::exception exception) {
		std::cout << exception.what() << std::endl;
	}

	return 0;
}