#include"Monster.h"
#include"Random.h"
#include"Player.h"
#include<iostream>

Monster::Monster(const std::string& name, int hp, int acc,
	int xpReward, int armor, const std::string& weaponName,
	int lowDamage, int highDamage)
	{
		mName = name;
		mHitPoints = hp;
		mAccuracy = acc;
		mExpReward = xpReward;
		mArmor = armor;
		mWeapon.mName = weaponName;
		mWeapon.mDamageRange.mLow = lowDamage;
		mWeapon.mDamageRange.mHigh = highDamage;
	}

	bool Monster::isDead()
	{
		return mHitPoints <= 0;
	}

	int Monster::getXPReward()
	{
		return mExpReward;
	}

	std::string Monster::getName()
	{
		return mName;
	}

	int Monster::getArmor()
	{
		return mArmor;
	}

	void Monster::attackPlayer(Player& player)
	{
		std::cout << "A " << mName << " attacks you "
		<< "with a " << mWeapon.mName << std::endl;

		if (Random(0, 20) < mAccuracy)
		{
			int damage = Random(mWeapon.mDamageRange);

			int totalDamage = damage - player.getArmor();

			if (totalDamage <= 0)
			{
				std::cout << "The " << mName << "'s attack failed to "
				<< "penetrate your armor." << std::endl;
			}
			else
			{
				std::cout << "You are hit for " << totalDamage
				<< " damage!" << std::endl;
				player.takeDamage(totalDamage);
			}
		}
		else
		{
			std::cout << mName << " missed!" << std::endl;
		}

		std::cout << std::endl;
	}

	void Monster::takeDamage(int damage)
	{
		mHitPoints -= damage;
	}

	void Monster::displayHitPoints()
	{
		std::cout << mName << "'s Hitpoints = " << mHitPoints << std::endl;
	}
