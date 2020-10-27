#include "Monster.h"

Monster::Monster(int id,int maxHp) 
: MovingObject(id), maxHp(maxHp) 
{
	hp = maxHp;
}

void Monster::SetHp(int hp) 
{
	this->hp = hp;
};

int Monster::GetHp() const 
{
	return hp;
};

void Monster::SetMaxHp(int maxHp) 
{
	this->maxHp = maxHp;
};

int Monster::GetMaxHp() const 
{
	return maxHp;
};