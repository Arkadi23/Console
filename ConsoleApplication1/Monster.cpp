#include "Monster.h"
#include <cstdlib>
#include <ctime>

Monster::Monster(Type type)
	: Creature(monsterData[static_cast<int>(type)].name, monsterData[static_cast<int>(type)].symbol, monsterData[static_cast<int>(type)].health, monsterData[static_cast<int>(type)].damage, monsterData[static_cast<int>(type)].gold)
{
}

Monster Monster::getRandomMonster()
{
	int randomType = getRandomNumber(0, static_cast<int>(Type::MAX_TYPES) - 1);

	return Monster(static_cast<Type>(randomType));
}


Monster::MonsterData Monster::monsterData[static_cast<int>(Type::MAX_TYPES)]
{
	{ "dragon", 'D', 20, 4, 100 },
	{ "orc", 'o', 4, 2, 25 },
	{ "slime", 's', 1, 1, 10 }
};

int Monster::getRandomNumber(int min, int max)
{
	return min + rand() % (max - min + 1);
}

