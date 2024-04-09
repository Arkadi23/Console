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

void fightMonster(Player& player);
void attackMonster(Player& player, Monster& monster);
void attackPlayer(Player& player, Monster& monster);

int main()
{
	srand(static_cast<unsigned int>(time(nullptr)));

    string playerName;
    cout << "Enter your name: ";
    cin >> playerName;
    Player player(playerName);
    cout << "Welcome, " << player.getName() << "!\n";

    while (!player.isDead() && !player.hasWon())
    {
        fightMonster(player);
    }

    if (player.isDead())
    {
        cout << "You died at level " << player.getLevel() << " and with " << player.getGold() << " gold.\n";
        cout << "Too bad you can't take it with you!\n";
    }
    else
    {
        cout << "You won the game with " << player.getGold() << " gold!\n";
    }
}

void fightMonster(Player& player)
{
    Monster monster = Monster::getRandomMonster();
    cout << "You have encountered a " << monster.getName() << " (" << monster.getSymbol() << ").\n";

    while (!player.isDead() && !monster.isDead())
    {
        cout << "(R)un or (F)ight: ";
        char input;
        cin >> input;

        if (input == 'R' || input == 'r')
        {
            if ((0 + rand() % (1 - 0 + 1)))
            {
                cout << "You successfully fled.\n";
                return;
            }
            else
            {
                cout << "You failed to flee.\n";
                attackPlayer(player, monster);
                continue;
            }
        }

        if (input == 'F' || input == 'f')
        {
            attackMonster(player, monster);
            attackPlayer(player, monster);
        }
    }
}

void attackMonster(Player& player, Monster& monster)
{
    if (player.isDead())
    {
        return;
    }

    cout << "You hit the " << monster.getName() << " for " << player.getAttackDamage() << " damage.\n";

    monster.reduceHealth(player.getAttackDamage());

    if (monster.isDead())
    {

        player.levelUp();
        player.addGold(monster.getGold());

        cout << "You killed the " << monster.getName() << ".\n";
        cout << "You are now level "<< player.getLevel() << ".\n";
        cout << "You found " << monster.getGold() << " gold.\n";
    }
}

void attackPlayer(Player& player, Monster& monster)
{
    if (monster.isDead())
    {
        return;
    }

    player.reduceHealth(monster.getAttackDamage());
    cout << "The " << monster.getName() << " hit you for " << monster.getAttackDamage() << " damage.\n";
}