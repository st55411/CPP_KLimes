#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>
#include <string>
#include <iostream>
#include "Header.h"


int main() {
	GrowingContainer<std::string, 2> container = GrowingContainer<std::string, 2>();
	for (int i = 0; i < 9; i++)
	{
		container.add("Nmbr: " + std::to_string(i));
		std::cout << container[i] << std::endl;
	}
	std::cout << "--------" << std::endl;
	std::cout << container.count() << std::endl << std::endl;
	for (int i = 0; i < container.count(); i++)
	{
		std::cout << container[i] << std::endl;
	}
	std::cout << "--------" << std::endl;
	std::cout << container.count() << std::endl << std::endl;

	container.remove(8);
	container.addTo(8, std::to_string(17));
	
	for (int i = 0; i < container.count(); i++)
	{
		std::cout << container[i] << std::endl;
	}
	std::cout << "--------" << std::endl;
	std::cout <<  container.count() << std::endl << std::endl;

	return 0;
}