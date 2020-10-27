#include "CashRegister.h"
#include <exception>
#define ID_COUNTER_INIT_VALUE 1000

int receiptsCount = 0;
int CashRegister::idCounter = ID_COUNTER_INIT_VALUE;

CashRegister::CashRegister()
{
	receipts = new Receipt[10];
}

//CashRegister::CashRegister() 
//{
//delete[] receipts;
//}

Receipt& CashRegister::CreateReceipt(double value, double dph) {
	
	if (receiptsCount == 10)
		throw new std::exception("CashRegister is full");
	receipts[receiptsCount].SetId(idCounter+receiptsCount);
	receipts[receiptsCount].SetValue(value);
	receipts[receiptsCount].SetDph(dph);
	receiptsCount++;
	return receipts[receiptsCount - 1];
	// - vytvoreni uctenky
	//zvyseni citace?
	//vratit uctenku jako referenci

	/*vystaví úètenku, nastaví parametry
		úètence v poli, inkrementuje pocetVydanychUctenek a vrací referenci na vystavenou
		úètenku.*/
	
}

Receipt& CashRegister::GetReceipt(int id)
{
	for (int i = 0; i < sizeof receipts; i++)
	{
		if (receipts[i].GetId() == id)
		{
			return receipts[i];
			break;
		} else if (i == 11)
		{
			return receipts[0];
		}


	}
}
	/*vyhledá a vrátí úètenku z pole dle cislaUctenky.Pokud
		neexistuje vrate první úètenku z pole*/
	


double CashRegister:: GetFullValue() const
{
	double FullValue = 0;
	for (int i = 0; i < sizeof receipts; i++)
	{
		FullValue += receipts[i].GetValue();
	}
	//– vrátí celkovou èástku ze všech vystavených úètenek.
	return FullValue;
}
double CashRegister:: GetFullValueIncludingDph() const 
{
	double FullValueIncludingDph = 0;
	for (int i = 0; i < sizeof receipts; i++)
	{
		FullValueIncludingDph += receipts[i].GetValue() * (1+ receipts[i].GetDph());
	}
	/*vrátí celkovou èástku vè.DPH ze všech vystavených
		úètenek(castkaVcDph = castka * (1 + dph).*/
	return FullValueIncludingDph;
}