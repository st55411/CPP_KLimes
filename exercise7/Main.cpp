#include <iostream>
#include <fstream>
#include <string>
#include "Date.h"
#include "Address.h"
#include "Person.h"


int main() {
	//UlozDoSouboru
	Person people[7];
	people[0] = Person("Ray", "Charles", Address("Downing 22", "London", 36589), Date(7, 10, 1999));
	people[1] = Person("Bill", "Paxton", Address("Lombard 118", "San Francisco", 47856), Date(20, 12, 1995));
	people[2] = Person("Hanz", "Gruber", Address("Broadway 112", "New York", 98745), Date(13, 5, 1998));
	people[3] = Person("Chuck", "Norris", Address("Hollyw. B. 1748", "Los Angeles", 53851), Date(3, 4, 1965));
	people[4] = Person("James", "Cameron", Address("Mocna 584", "Choustnik", 12347), Date(1, 1, 2011));
	people[5] = Person("Linda", "Hamilton", Address("Kostelni 498", "Prosec", 47891), Date(6, 7, 1930));
	people[6] = Person("Mark", "Hamil", Address("U Posty 481", "Chrudim", 65874), Date(14, 9, 2000));


	std::string fileName = "persons.dat";
	std::ofstream CreateFile(fileName.c_str(), std::ios::binary | std::ios::out);
	if (!CreateFile) {
		throw std::runtime_error("Could not open file!\n");
	}
	for (int i = 0; i < 7; i++) {
		CreateFile.write((char*)&people[i], sizeof(Person));
	}
	CreateFile.close();

		//Nacti soubor
		std::string nameOfFile = "persons.dat";
	std::ifstream readFile(nameOfFile.c_str(), std::ios::binary | std::ios::in);
	readFile.seekg(0, std::ios::end);
	int sizeOfFile = readFile.tellg();
	int count = sizeOfFile / sizeof(Person);
	readFile.seekg(0, std::ios::beg);

	if (!readFile) {
		throw std::runtime_error("Opening file error!\n");
	}
	Person* person = new Person[count];
	for (int i = 0; i < count; i++) {
		readFile.read((char*)&people[i], sizeof(Person));
	}

	readFile.close();

	for (int i = 0; i < count; i++) {
		std::cout << people[i] << std::endl;
	}

	return 0;
}

