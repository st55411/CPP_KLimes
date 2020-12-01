#pragma once
#ifndef ADDRESS_H
#define ADDRESS_H
#include <string>
#include <istream>

class Address {
private:
	std::string city;
	std::string street;
		int psc;

public:
	Address();
	~Address();
	Address(std::string street, std::string city, int postCode);

	friend std::ostream& operator<<(std::ostream& oStream, const Address& adress);
	friend std::istream& operator>>(std::istream& iStream, Address& adress);

};
#endif // !ADDRESS_H
