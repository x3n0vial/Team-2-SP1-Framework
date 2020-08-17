#pragma once
class Entity
{
protected:
	int x, y;
	char name;
public:
	Entity(int x, int y);
	~Entity();
	virtual char GetName();
	int GetX();
	int GetY();
	void SetX(int x_coord);
	void SetY(int y_coord);
};


