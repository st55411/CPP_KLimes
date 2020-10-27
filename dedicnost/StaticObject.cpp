#include "StaticObject.h"



StaticObject::StaticObject(int id, TypPrekazky typPrekazky)
	: Object(id), typPrekazky(typPrekazky) {}


TypPrekazky StaticObject::GetTypPrekazky() 
{
	return typPrekazky;
};