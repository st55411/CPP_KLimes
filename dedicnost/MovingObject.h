#pragma once
#ifndef MOVING_OBJECT_H
#define MOVING_OBJECT_H

#include "Object.h"

class MovingObject: public Object
{

	double uhelNatoceni;

public:
	MovingObject(int id);

	void SetUhelNatoceni(double uhelNatoceni);
	double GetUhelNatoceni() const;
};

#endif // !MOVING_OBJECT_H

