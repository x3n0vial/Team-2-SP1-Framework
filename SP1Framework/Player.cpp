#include "Player.h"


Player::Player()
{
	name = 'O';
}

Player::~Player()
{
	//test
}

char Player::GetName()
{
	return name;
}
