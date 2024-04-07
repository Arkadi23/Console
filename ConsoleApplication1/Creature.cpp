#include "Creature.h"


Creature::Creature(std::string name, char symbol, int healthAmount, int attackDamage, int gold)
	: m_name(name), m_symbol(symbol), m_healthAmount(healthAmount), m_attackDamage(attackDamage), m_gold(gold)
{
}

/*
	*** Getters
*/
const std::string& Creature::getName()
{
	return m_name;
}

char Creature::getSymbol()
{
	return m_symbol;
}

int Creature::getHealth()
{
	return m_healthAmount;
}

int Creature::getAttackDamage()
{
	return m_attackDamage;
}

int Creature::getGold()
{
	return m_gold;
}


void Creature::reduceHealth(int damage)
{
	m_healthAmount -= damage;
}

bool Creature::isDead()
{
	return m_healthAmount <= 0;
}

void Creature::addGold(int gold)
{
	m_gold += gold;
}
