#pragma once
#ifndef I_COMPARABLE_H
#define I_COMPARABLE_H
#include "IObject.h"

class IComparable : public IObject {

public:
	virtual int CompareTo(IComparable* obj) const = 0;
};

#endif // !I_COMPARABLE_H
