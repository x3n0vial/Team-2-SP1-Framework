#pragma once

class Damage
{
private:
	int dmg;
public:
	Damage();
	~Damage();
	void setDamage(int x);
	int getDamage();
	virtual void Attack() = 0;
};