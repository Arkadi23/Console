#pragma once
#include <string>

class Creature
{
protected:
	std::string m_name;
	char m_symbol;
	int m_healthAmount;
	int m_attackDamage;
	int m_gold;

public:
	Creature(std::string name, char symbol, int healthAmount, int attackDamage, int gold);
	const std::string& getName();
	char getSymbol();
	int getHealth();
	int getAttackDamage();
	int getGold();
	void reduceHealth(int damage);
	bool isDead();
	void addGold(int gold);
};