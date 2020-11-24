#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>
#include <string>
#include <iostream>
#include "Header.h"


int main() {
	GrowingContainer<std::string, 3> cont = GrowingContainer<std::string, 3>();
	for (int i = 0; i < 10; i++)
	{
		cont.add("Nmbr: " + std::to_string(i));
		std::cout << cont[i] << std::endl;
	}
	std::cout << "--------" << std::endl;
	std::cout << cont.count() << std::endl << std::endl;
	for (int i = 0; i < cont.count(); i++)
	{
		std::cout << cont[i] << std::endl;
	}
	std::cout << "--------" << std::endl;
	std::cout << cont.count() << std::endl << std::endl;

	cont.remove(9);
	cont.addTo(9, std::to_string(18));
	
	for (int i = 0; i < cont.count(); i++)
	{
		std::cout << cont[i] << std::endl;
	}
	std::cout << "--------" << std::endl;
	std::cout <<  cont.count() << std::endl << std::endl;

	return 0;
}