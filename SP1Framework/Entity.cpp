#include "Entity.h"

Entity::Entity()
{
	x = 1;
	y = 1;
	name = ' ';
}

Entity::~Entity()
{
}

char Entity::GetName()
{
	return name;
}

int Entity::GetX()
{
	return x;
}

int Entity::GetY()
{
	return y;
}

void Entity::SetX(int x_coord)
{
	x = x_coord;
}

void Entity::SetY(int y_coord)
{
	y = y_coord;
}

