#pragma once
#ifndef CASH_REGISTER_H
#define CASH_REGISTER_H

#include "Receipt.h"

class CashRegister
{
	Receipt* receipts;
static int idCounter;
public:
	CashRegister();
	
	Receipt& CreateReceipt(double value, double dph);
	Receipt& GetReceipt(int id);

	double GetFullValue() const;
	double GetFullValueIncludingDph() const;
};



#endif // !CASH_REGISTER_H
