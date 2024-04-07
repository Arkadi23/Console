#include "Player.h"

Player::Player(std::string name) : Creature(name, '@', 10, 1, 0)
{

}

void Player::levelUp()
{
	m_level += 1;
	m_attackDamage += 1;
}

int Player::getLevel()
{
	return m_level;
}

bool Player::hasWon()
{
	return m_level >= 20;
}
