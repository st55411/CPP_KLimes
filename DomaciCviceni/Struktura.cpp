#include <iostream>
#include <ctime>

int obvod;
typedef struct Trojuhelnik
{
	int a, b, c;
}TROJUHELNIK;

TROJUHELNIK trojuhelnik;

bool lzeSestrojit(Trojuhelnik t) {
	if (t.a + trojuhelnik.b > t.c&&
		t.b + t.c > t.a&&
		t.a + t.c > t.b) {
		return true;
	}
	else 
	{ 
		return false;
	}
}
int main(int argc, char** argv)
{


	trojuhelnik.a = rand() % 10 + 1;
	trojuhelnik.b = rand() % 10 + 1;
	trojuhelnik.c = rand() % 10 + 1;

	std::cout << "strana a = " << trojuhelnik.a << std::endl;
	std::cout << "strana b = " << trojuhelnik.b << std::endl;
	std::cout << "strana c = " << trojuhelnik.c << std::endl;

	obvod = trojuhelnik.a + trojuhelnik.b + trojuhelnik.c;

	if (lzeSestrojit(trojuhelnik) == true)
	{
		std::cout << "trojuhelnik lze sestrojit\nObvod trojuhelniku ABC (a+b+c) je " << obvod << std::endl;
	}
	else
	{
		std::cout << ("Trojuhlenik nelze sestrojit") << std::endl;
	}

	system("pause");
	return 0;
}