#include <iostream>
#include "Object.h"


Object::Object() 
{
};

Object::~Object() {}

int Object::GetId() const 
{
	return id;
};

void Object::SetX(double x) 
{
	this->x = x;
};

double Object::GetX() const 
{
	return x;
};

void Object::SetY(double y) 
{
	this->y = y;
};

double Object::GetY() const 
{
	return y;
};