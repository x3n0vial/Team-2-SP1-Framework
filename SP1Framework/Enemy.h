#pragma once
#include "Damage.h"
#include <iostream>
using namespace std;


class Enemy : public Damage
{
private:
	short HP, Attack;

public:
	Enemy(string Entity);
	~Enemy();
	void setEnemy(int h, int d);
	short getEnemy();
	void Attack();
};