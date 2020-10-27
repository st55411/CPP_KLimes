#pragma once
#ifndef CAS_H
#define CAS_H
#include "IComparable.h"

struct Cas : public IComparable
{
private:
	int seconds;
	int minutes;
	int hours;

public:
	Cas(int hours, int minutes, int seconds);
	~Cas();

	int CompareTo(IComparable* obj) const override;

	std::string ToString() const override;
};
void SortArray(IComparable** _array, int arraySize);


#endif // !CAS_H