#pragma once

#include <string>
#include "Creature.h"

class Monster : public Creature
{
private:
	static int getRandomNumber(int min, int max);
public:
	enum class Type
	{
		DRAGON,
		ORC,
		SLIME,
		MAX_TYPES
	};

	struct MonsterData
	{
		const char* name;
		char symbol;
		int health;
		int damage;
		int gold;
	};

	static MonsterData monsterData[static_cast<int>(Type::MAX_TYPES)];

	Monster(Type type);

	static Monster getRandomMonster();

};

