#include <iostream>
#include <ctime>

int obvod;
typedef struct Trojuhelnik
{
	int a, b, c;
}TROJUHELNIK;

Trojuhelnik* ukazatel = new Trojuhelnik;

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
	
	ukazatel->a = rand() % 10 + 1;
	ukazatel->b = rand() % 10 + 1;
	ukazatel->c = rand() % 10 + 1;

	std::cout << "strana a = " << ukazatel->a << std::endl;
	std::cout << "strana b = " << ukazatel->b << std::endl;
	std::cout << "strana c = " << ukazatel->c << std::endl;

	obvod = ukazatel->a + ukazatel->b + ukazatel->c;



	if (lzeSestrojit(ukazatel) == true)
	{
		std::cout << "trojuhelnik lze sestrojit\nObvod trojuhelniku ABC (a+b+c) je " << obvod << std::endl;
	}
	else
	{
		std::cout << ("Trojuhlenik nelze sestrojit") << std::endl;
	}

	delete ukazatel;

	system("pause");
	return 0;
}

