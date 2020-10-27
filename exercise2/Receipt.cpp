#include "Receipt.h"

void Receipt::SetId(int id)
{
	this->id = id;
}

int Receipt::GetId() const
{
	return id;
}

void Receipt::SetValue(double value)
{
	this->value = value;
}

double Receipt::GetValue() const
{
	return value;
}

void Receipt::SetDph(double dph)
{
	this->dph = dph;
}

double Receipt::GetDph() const
{
	return dph;
}