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
#include "Controller.h"

using namespace std;

int main()
{
	srand(static_cast<unsigned int>(time(nullptr)));

    Controller a;
    a.createPlayer();
}