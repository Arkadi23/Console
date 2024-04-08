#include "Controller.h"

Controller::Controller()
{
}

Controller::~Controller()
{
	delete m_player;
}

void Controller::createPlayer()
{
	std::string playerName;
	std::cout << "Enter your name: ";
	std::cin >> playerName;

	m_player = new Player(playerName);

	std::cout << "Welcome, " << m_player->getName() << ".\n";
	std::cout << "You have " << m_player->getHealth() << " health and are carrying " << m_player->getGold() << " gold.\n";
}
