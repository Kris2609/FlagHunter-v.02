#include "Player.h"

void Player::MoveUp()
{
	if (Keyboard::W)
	{
		sprite.move(0, 100); 
	}
}

void Player::MoveDown()
{
}

void Player::MoveLeft()
{
}

void Player::MoveRight()
{
}
