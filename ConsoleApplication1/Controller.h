#pragma once

#include <string>
#include <iostream>

#include "Player.h"
#include "Monster.h"


class Controller
{
private:
	Player* m_player;
	Monster* m_monster;
public:
	Controller();
	~Controller();

	void createPlayer();
};

