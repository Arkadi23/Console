#pragma once

#include <string>
#include "Creature.h"

class Player : public Creature
{
private:
	int m_level = 1;

public:
	Player(std::string name);
	void levelUp();
	int getLevel();
	bool hasWon();
};

