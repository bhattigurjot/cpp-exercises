//#pragma once
#ifndef MONSTER_H
#define MONSTER_H

#include"Weapon.h"
#include<string>

class Player;

class Monster
{
public:
	Monster(const std::string& name, int hp, int acc, int xpReward, int armor,
		const std::string& weaponName, int lowDamage, int highDamage);

		bool isDead();

		int getXPReward();
		std::string getName();
		int getArmor();

		void attackPlayer(Player& player);
		void takeDamage(int damage);
		void displayHitPoints();

	private:
		std::string mName;
		int mHitPoints;
		int mAccuracy;
		int mExpReward;
		int mArmor;
		Weapon mWeapon;
	};

	#endif // MONSTER_H
