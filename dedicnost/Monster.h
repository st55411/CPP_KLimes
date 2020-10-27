#pragma once
#ifndef MONSTER_H
#define MONSTER_H

#include "MovingObject.h"
#include "Object.h"

class Monster: public MovingObject
{
private:
	int hp;
	int maxHp;

public:
	Monster(int id,int maxHp);

	void SetHp(int hp);
	int GetHp() const;

	void SetMaxHp(int maxHp);
	int GetMaxHp() const;
};

#endif // !GAME_H




