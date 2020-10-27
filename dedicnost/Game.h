#pragma once
#ifndef GAME_H
#define GAME_H

#include "Object.h"
#include "StaticObject.h"
#include "MovingObject.h"
#include "Monster.h"


class Game 
{
private:
	Object** objects;
	int objectNumber;
	int gameSize;

public:

	Game(int gameSize);
	~Game();

	void AddObject(Object* o);

		int* findStaticObjectsId(double xmin, double xmax, double
			ymin, double ymax);

		MovingObject** findMovingObjectsInArea(double x, double y,
			double r);

		MovingObject** findMovingObjectsInArea(double x, double y,
			double r, double umin, double umax);

};

#endif // !GAME_H

