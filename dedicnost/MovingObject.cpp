#include "MovingObject.h"

MovingObject::MovingObject(int id) 
	: Object(id) 
{
	uhelNatoceni = 0;
}

void MovingObject::SetUhelNatoceni(double uhelNatoceni) 
{
	this->uhelNatoceni = uhelNatoceni;
};

double MovingObject::GetUhelNatoceni() const 
{
	return uhelNatoceni;
};