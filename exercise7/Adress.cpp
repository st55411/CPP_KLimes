#include "Address.h"



Address::Address()
{
    this->street = ' ';
    this->city = ' ';
    this->psc = 0;
}

Address::Address(std::string street, std::string city, int psc)
{
    this->street = street;
    this->city = city;
    this->psc = psc;
}

Address::~Address()
{
}

std::ostream& operator<<(std::ostream& oStream, const Address& adr)
{
    oStream << adr.street << ", " << adr.psc << ' ' << adr.city;
    return oStream;
}

std::istream& operator>>(std::istream& iStream, Address& adr)
{
    iStream >> adr.street >> adr.city >> adr.psc;
    return iStream;
}