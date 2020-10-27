#pragma once
#ifndef STATIC_OBJECT_H
#define STATIC_OBJECT_H

#include "Object.h"

typedef enum TypPrekazky {
	ROCK,
	LITTLEPLANT,
	BIGPLANT
}TYPPREKAZKY;

class StaticObject: public Object
{
	
private:	
	TypPrekazky typPrekazky;

public:
	StaticObject(int id, TypPrekazky typPrekazky);
	
	TypPrekazky GetTypPrekazky();

};

#endif // !STATIC_OBJECT_H

