#include"Map.h"
#include"Random.h"
#include<iostream>

Map::Map()
{
	mPlayerXPos = 0;
	mPlayerYPos = 0;
}

int Map::getPlayerXPos()
{
	return mPlayerXPos;
}

int Map::getPlayerYPos()
{
	return mPlayerYPos;
}

void Map::movePlayer()
{
	int selection = 1;
	std::cout << "1) North 2) East 3) South 4) West: " ;
	std::cin >> selection;

	switch (selection)
	{
	case 1:
		mPlayerYPos++;
		break;
	case 2:
		mPlayerXPos++;
		break;
	case 3:
		mPlayerYPos--;
		break;
	default:
		mPlayerXPos--;
		break;
	}
	std::cout << std::endl;
}

Monster* Map::checkRandomEncounter()
{
	int roll = Random(0, 20);

	Monster* monster = 0;

	if (roll <= 5)
	{
		return 0;
	}
	else if (roll >= 6 && roll <= 10)
	{
		monster = new Monster("Orc", 10, 8, 200, Random(150,200), 1, "Short Sword", 2, 7);
		std::cout << "You encountered an Orc!" << std::endl;
		std::cout << "Prepare for battle!" << std::endl;
		std::cout << std::endl;
	}
	else if (roll >= 11 && roll <= 15)
	{
		monster = new Monster("Goblin", 6, 6, 100, Random(50, 100), 0, "Dagger", 1, 5);
		std::cout << "You encountered a Goblin!" << std::endl;
		std::cout << "Prepare for battle!" << std::endl;
		std::cout << std::endl;
	}
	else if (roll >= 16 && roll <= 19)
	{
		monster = new Monster("Ogre", 20, 12, 500, Random(400, 500), 2, "Club", 3, 8);
		std::cout << "You encountered an Ogre!" << std::endl;
		std::cout << "Prepare for battle!" << std::endl;
		std::cout << std::endl;
	}
	else if (roll == 20)
	{
		monster = new Monster("Orc Lord", 25, 15, 2000, Random(1500, 2000), 5, "Two Handed Sword", 5, 20);
		std::cout << "You encountered an Orc Lord!" << std::endl;
		std::cout << "Prepare for battle!" << std::endl;
		std::cout << std::endl;
	}

	return monster;
}

void Map::printPlayerPos()
{
	std::cout << "Player Position = (" << mPlayerXPos << ", "
		<< mPlayerYPos << ")" << std::endl;
}