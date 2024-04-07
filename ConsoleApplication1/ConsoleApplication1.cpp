

/***************************************
            Standard library           
***************************************/
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

/***************************************
       User-defined header includes           
***************************************/
#include "Creature.h"
#include "Player.h"
#include "Monster.h"

using namespace std;

int main()
{
	srand(static_cast<unsigned int>(time(nullptr)));

	for (int i = 0; i < 10; ++i)
	{
		Monster m = Monster::getRandomMonster();
		std::cout << "A " << m.getName() << " (" << m.getSymbol() << ") was created.\n";
	}
}