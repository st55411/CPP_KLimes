#include <iostream>
#include <ctime>

int pocetTrojuhelniku ,obvod;
typedef struct Trojuhelnik
{
	int a, b, c;
}TROJUHELNIK;

Trojuhelnik* ukazatel;

bool lzeSestrojit(Trojuhelnik* t) {
	if (t->a + t->b > t->c&&
		t->b + t->c > t->a&&
		t->a + t->c > t->b) {
		return true;
	}
	else
	{
		return false;
	}
}

int main(int argc, char** argv)
{
	
	std::cout << "Kolik si prejete nacist trojuhelniku?" << std::endl;
	std::cin >> pocetTrojuhelniku;
	Trojuhelnik* poleTrojuhelniku = new Trojuhelnik[pocetTrojuhelniku];
	
	

	
	for (int i = 0; i < pocetTrojuhelniku; i++)
	{
		ukazatel = new Trojuhelnik;
		ukazatel->a = rand() % 10 + 1;
		ukazatel->b = rand() % 10 + 1;
		ukazatel->c = rand() % 10 + 1;

		std::cout << "TROJUHELNIK " << i+1 << std::endl;
		std::cout << "strana a = " << ukazatel->a << std::endl;
		std::cout << "strana b = " << ukazatel->b << std::endl;
		std::cout << "strana c = " << ukazatel->c << std::endl;

		if (lzeSestrojit(ukazatel) == false)
		{
			std::cout << ("Trojuhlenik nelze sestrojit!!!") << std::endl;
		}
	}

	delete ukazatel;
	delete[] poleTrojuhelniku;

	system("pause");
	return 0;
}