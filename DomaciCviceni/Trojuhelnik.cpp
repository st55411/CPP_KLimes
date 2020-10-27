#include <iostream>

int main(int argc, char** argv)
{

	double a, b, c, obvod;
	std::cout << ("Zadejte stranu a") << std::endl;
	std::cin >> a;
	std::cout << ("Zadejte stranu b") << std::endl;
	std::cin >> b;
	std::cout << ("Zadejte stranu c") << std::endl;
	std::cin >> c;

	obvod = a + b + c;

	std::cout << "strana a = " << a  << std::endl;
	std::cout << "strana b = " << b << std::endl;
	std::cout << "strana c = " << c << std::endl;

	if (a + b > c&& b + c > a&& a + c > b)
	{
		std::cout << "trojuhelnik lze sestrojit\nObvod trojuhelniku ABC (a+b+c) je " << obvod << std::endl;
	}
	else std::cout << ("Trojuhlenik nelze sestrojit") << std::endl;

	system("pause");
	return 0;
}