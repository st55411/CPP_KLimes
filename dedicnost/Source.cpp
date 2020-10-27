#include <iostream>
#include "StaticObject.h"
#include "MovingObject.h"
#include "Monster.h"
#include "Game.h"
# define M_PI           3.14159265358979323846

int main(int argc, char** argv)
{
	Game game;
	
	
	/*Object* object = new StaticObject{ 1, LITTLEPLANT };
	StaticObject* so = dynamic_cast<StaticObject*>(object);
	if (so != nullptr)
		std::cout << "objekt je StatickyObjekt(nebo jeho potomek)" << so->GetTypPrekazky();
	game.AddObject(so);*/

	Monster *m1 = new Monster(1,100);
	m1->SetHp(43);
	m1->SetUhelNatoceni(0);
	m1->SetX(2);
	m1->SetY(3);
	game.AddObject(m1);

	Monster* m2 = new Monster(4, 300);
	m1->SetHp(250);
	m1->SetUhelNatoceni(M_PI);
	m1->SetX(2);
	m1->SetY(3);
	game.AddObject(m2);

	StaticObject *s1 = new StaticObject(2, TypPrekazky::BIGPLANT);
	s1->SetX(4);
	s1->SetY(1);
	game.AddObject(s1);

	StaticObject* s2 = new StaticObject(3, TypPrekazky::ROCK);
	s1->SetX(2);
	s1->SetY(0);
	game.AddObject(s2);

	game.findStaticObjectsId(0, 5, 0, 5);
	game.findStaticObjectsId(2, 3, 2, 3);
	game.findMovingObjectsInArea(0,5,3);

	

	
	return 0;
}