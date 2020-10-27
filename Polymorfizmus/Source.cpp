#include <iostream>
#include "Cas.h"
#include <time.h>
#include "IComparable.h"

int main(int argc, char** argv)
{
	srand(time(NULL));

	Cas** casy = new Cas * [10];
	for (int i = 0; i < 10; ++i) {
		casy[i] = new Cas((rand() % 23) + 0, (rand() % 59) + 0, (rand() % 59) + 0);
		std::cout << i <<  casy[i]->ToString() << std::endl;
	}
	std::cout <<"----------------"<< std::endl;

	SortArray((IComparable**)casy,10);

	for (int i = 0; i < 10; ++i) {
		std::cout << i <<  casy[i]->ToString() << std::endl;
	}
	delete[] casy;

	return 0;
};


	

