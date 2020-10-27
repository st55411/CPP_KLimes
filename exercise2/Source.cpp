#include "Receipt.h"
#include "CashRegister.h"
#include "CashRegister.h"
#include <iostream>

int main(int argc, char** argv)
{
	CashRegister cashRegister;

	cashRegister.CreateReceipt(250, 0.2);
	std::cout << cashRegister.GetReceipt(1000).GetId()<< std::endl;
	cashRegister.CreateReceipt(150, 0.4);
	std::cout << cashRegister.GetReceipt(1001).GetId() << std::endl;
	cashRegister.CreateReceipt(100, 0.2);
	std::cout << cashRegister.GetReceipt(1002).GetId() << std::endl;
	cashRegister.CreateReceipt(50, 0.6);
	std::cout << cashRegister.GetReceipt(1003).GetId() << std::endl;
	std::cout << cashRegister.GetFullValue() << std::endl;
	std::cout << cashRegister.GetFullValueIncludingDph() << std::endl;

	/*cashRegister.CreateReceipt(20, 0.7);
	cashRegister.CreateReceipt(80, 0.5);
	cashRegister.CreateReceipt(120, 0.6);
	cashRegister.CreateReceipt(30, 0.85);
	cashRegister.CreateReceipt(5100, 0.6);*/
	/*cashRegister.CreateReceipt(4000, 0.24);
	cashRegister.CreateReceipt(1500, 3.6);
	cashRegister.CreateReceipt(800, 0.75);
	cashRegister.CreateReceipt(961, 0.4);*/




	/*Receipt receipt2 = Receipt();
	receipt2.SetId(1002);
	receipt2.GetId();
	const Receipt receipt3 = Receipt();
	receipt3.GetId();*/
	//receipt3.SetId(1003);
	return 0;
}