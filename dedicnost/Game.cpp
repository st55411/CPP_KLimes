#include <iostream>
#include "Game.h"



Game::Game(int gameSize) {
	this->gameSize = gameSize;
	 objects = new Object * [gameSize];	
	 for (int i = 0; i < sizeof objects; i++)
	 {
		 objects[i] = new Object[gameSize];
	 }
	 objectNumber = 0;
}


void Game::AddObject(Object* o) 
{			
			objects[objectNumber] = o;	
			objectNumber++;
};

Game::~Game() {};

int* Game::findStaticObjectsId(double xmin, double xmax, double
	ymin, double ymax) 
{
	int array [10];
	
	for (int i = 0; i < sizeof objects; i++)
	{
		if ((objects[i]->GetX() >= xmin && objects[i]->GetX() <= xmax) && 
			(objects[i]->GetY() >= ymin && objects[i]->GetY() <= ymax))
		{
			array[i] = objects[i]->GetId();
			std::cout << array[i] << std::endl;
		}
	}
	std::cout << "-------------" << std::endl;
	return array;

	//Vr�t� pole id v�ech statick�ch objekt� v zadan�ch sou�adnic�ch.
};

MovingObject** Game::findMovingObjectsInArea(double x, double y,
	double r) 
{
	MovingObject** array = new MovingObject * [gameSize];
	int index = 0;
	for (int i = 0; i < sizeof objects; i++)
	{
		if (dynamic_cast<MovingObject*>(objects[i]) != nullptr &&
			powf(objects[i]->GetX() - x, 2) + powf(objects[i]->GetY() - y, 2) < powf(r, 2))
		{
			array[index] = dynamic_cast<MovingObject*>(objects[i]);
			index++;
		}
	}

	return array;

	//Vr�t� pole ukazel� na pohybliv� objekty v kruhov� oblasti(S = [x, y],radius = r).
};


MovingObject** Game::findMovingObjectsInArea(double x, double y,
	double r, double umin, double umax) 
{
	MovingObject** array = new MovingObject * [gameSize];
	int index = 0;
	for (int i = 0; i < sizeof objects; i++)
	{
		if (dynamic_cast<MovingObject*>(objects[i]) != nullptr &&
			powf(objects[i]->GetX() - x, 2) + powf(objects[i]->GetY() - y, 2) < powf(r, 2) &&
			dynamic_cast<MovingObject*>(objects[i])->GetUhelNatoceni() > umin &&
			dynamic_cast<MovingObject*>(objects[i])->GetUhelNatoceni() < umax)
		{
			array[index] = dynamic_cast<MovingObject*>(objects[i]);
				index++;
		}
	}

	return array;

	//Viz p�edchoz�, nav�c kontrola �hlu nato�en�.
};

