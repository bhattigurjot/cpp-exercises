#include"Map.h"
#include"Player.h"
#include<cstdlib>
#include<ctime>
#include<iostream>

using namespace std;

int main()
{
	srand(time(0));

	Map gameMap;
	Player mainPlayer;
	mainPlayer.createClass();

	bool done = false;
	while (!done)
	{
		cout << endl;
		gameMap.printPlayerPos();

		int selection = 1;
		cout << "1) Move 2) Rest 3) View Stats 4) Quit: ";
		cin >> selection;

		Monster* monster = 0;
		switch (selection)
		{
		case 1:
			gameMap.movePlayer();
			monster = gameMap.checkRandomEncounter();

			if (monster != 0)
			{
				while (true)
				{
					cout << "------------------------" << endl;
					mainPlayer.displayHitPoints();
					mainPlayer.displayMagicPoints();
					cout << endl;
					cout << "------------------------" << endl;
					monster->displayHitPoints();
					cout << endl;
					cout << "------------------------" << endl;

					bool runAway = mainPlayer.attack(*monster);

					if (runAway)
						break;

					if (monster->isDead())
					{
						mainPlayer.victory(monster->getXPReward(), monster->getGoldReward());
						mainPlayer.levelUp();
						break;
					}

					monster->attackPlayer(mainPlayer);

					if (mainPlayer.isDead())
					{
						mainPlayer.gameOver();
						done = true;
						break;
					}
				}

				delete monster;
				monster = 0;
			}
			break;
		case 2:
			mainPlayer.rest();	
			break;
		case 3:
			mainPlayer.viewStats();
			break;
		case 4:
			done = true;
			break;
		}
	}
}