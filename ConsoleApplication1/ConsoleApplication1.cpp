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

    string playerName;
    cout << "Enter your name: ";
    cin >> playerName;
    Player player(playerName);
    cout << "Welcome, " << player.getName() << endl;

}
