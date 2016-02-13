#include"Player.h"
#include"Random.h"
#include<iostream>

Player::Player()
{
	mName = "Default";
	mClassName = "Default";
	mAccuracy = 0;
	mHitPoints = 0;
	mMaxHitPoints = 0;
	mExpPoints = 0;
	mGoldPoints = 0;
	mNextLevelExp = 0;
	mLevel = 0;
	mArmor = 0;
	mWeapon.mName = "Default Weapon Name";
	mWeapon.mDamageRange.mLow = 0;
	mWeapon.mDamageRange.mHigh = 0;
}

bool Player::isDead()
{
	return mHitPoints <= 0;
}

int Player::getArmor()
{
	return mArmor;
}

std::string Player::getName()
{
	return mName;
}

void Player::takeDamage(int damage)
{
	mHitPoints -= damage;
}

void Player::createClass()
{
	std::cout << "##########################" << std::endl;
	std::cout << "CHARACTER CLASS GENERATION" << std::endl;
	std::cout << "##########################" << std::endl;

	std::cout << "Enter your character's name: ";
	std::getline(std::cin, mName);

	std::cout << "Please select character's class name..." << std::endl;
	std::cout << "1) Fighter 2) Wizard 3) Cleric 4) Thief: ";

	int characterNum = 1;
	std::cin >> characterNum;
	std::cout << std::endl;

	switch (characterNum)
	{
		case 1:
		mClassName = "Fighter";
		mAccuracy = 10;
		mHitPoints = 20;
		mMaxHitPoints = 20;
		mExpPoints = 0;
		mGoldPoints = 0;
		mNextLevelExp = 1000;
		mLevel = 1;
		mArmor = 4;
		mWeapon.mName = "Long Sword";
		mWeapon.mDamageRange.mLow = 1;
		mWeapon.mDamageRange.mHigh = 8;
		break;
		case 2:
		mClassName = "Wizard";
		mAccuracy = 5;
		mHitPoints = 10;
		mMaxHitPoints = 10;
		mExpPoints = 0;
		mGoldPoints = 0;
		mNextLevelExp = 1000;
		mLevel = 1;
		mArmor = 1;
		mWeapon.mName = "Staff";
		mWeapon.mDamageRange.mLow = 1;
		mWeapon.mDamageRange.mHigh = 4;
		break;
		case 3:
		mClassName = "Cleric";
		mAccuracy = 8;
		mHitPoints = 15;
		mMaxHitPoints = 15;
		mExpPoints = 0;
		mGoldPoints = 0;
		mNextLevelExp = 1000;
		mLevel = 1;
		mArmor = 3;
		mWeapon.mName = "Flail";
		mWeapon.mDamageRange.mLow = 1;
		mWeapon.mDamageRange.mHigh = 6;
		break;
		default:
		mClassName = "Thief";
		mAccuracy = 7;
		mHitPoints = 12;
		mMaxHitPoints = 12;
		mExpPoints = 0;
		mGoldPoints = 0;
		mNextLevelExp = 1000;
		mLevel = 1;
		mArmor = 2;
		mWeapon.mName = "Short Sword";
		mWeapon.mDamageRange.mLow = 1;
		mWeapon.mDamageRange.mHigh = 6;
		break;
	}
}

bool Player::attack(Monster& monster)
{
	int selection = 1;
	std::cout << "1) Attack 2) Run: ";
	std::cin >> selection;
	std::cout << std::endl;

	switch (selection)
	{
		case 1:
		std::cout << "You attack the " << monster.getName()
		<< "with a " << mWeapon.mName << std::endl;

		if (Random(0, 20) < mAccuracy)
		{
			int damage = Random(mWeapon.mDamageRange);

			int totalDamage = damage - monster.getArmor();

			if (totalDamage <= 0)
			{
				std::cout << "Your attack failed to penetrate"
				<< " the armor." << std::endl;
			}
			else
			{
				std::cout << "You attack for " << totalDamage
				<< " damage!" << std::endl;
				monster.takeDamage(totalDamage);
			}
		}
		else
		{
			std::cout << "You missed!" << std::endl;
		}

		std::cout << std::endl;
		break;
		case 2:
		int roll = Random(1, 4);

		if (roll == 1)
		{
			std::cout << "You run away!" << std::endl;
			return true;
		}
		else
		{
			std::cout << "You could not escape!" << std::endl;
			break;
		}
	}
	return false;
}

void Player::levelUp()
{
	if (mExpPoints >= mNextLevelExp)
	{
		std::cout << "You gaineda a level!" << std::endl;
		mLevel++;

		mNextLevelExp = mLevel * mLevel * 1000;

		mAccuracy += Random(1, 3);
		mMaxHitPoints += Random(2, 6);
		mArmor += Random(1, 2);

		mLevel = mMaxHitPoints;
	}
}

void Player::rest()
{
	std::cout << "Resting..." << std::endl;

	mHitPoints = mMaxHitPoints;
}

void Player::viewStats()
{
	std::cout << "============" << std::endl;
	std::cout << "PLAYER STATS" << std::endl;
	std::cout << "============" << std::endl << std::endl;

	std::cout << "Name              = " << mName << std::endl;
	std::cout << "Class             = " << mClassName << std::endl;
	std::cout << "Accuracy          = " << mAccuracy << std::endl;
	std::cout << "HitPoints         = " << mHitPoints << std::endl;
	std::cout << "MaxHitPoints      = " << mMaxHitPoints << std::endl;
	std::cout << "XP                = " << mExpPoints << std::endl;
	std::cout << "Gold              = " << mGoldPoints << std::endl;
	std::cout << "XP for Next Lvl   = " << mNextLevelExp << std::endl;
	std::cout << "Level             = " << mLevel << std::endl;
	std::cout << "Armor             = " << mArmor << std::endl;
	std::cout << "Weapon Name       = " << mWeapon.mName << std::endl;
	std::cout << "Weapon Damage     = " << mWeapon.mDamageRange.mLow << " - "
	<< mWeapon.mDamageRange.mHigh << std::endl;

	std::cout << std::endl;
	std::cout << "================" << std::endl;
	std::cout << "END PLAYER STATS" << std::endl;
	std::cout << "================" << std::endl << std::endl;
}

void Player::victory(int xp, int gold)
{
	std::cout << "You won the battle!" << std::endl;
	std::cout << "You win " << xp << " xp and " << gold << " gold points!" << std::endl;
	mExpPoints += xp;
	mGoldPoints += gold;
}

void Player::gameOver()
{
	std::cout << "You died in the battle..." << std::endl << std::endl;
	std::cout << "================" << std::endl;
	std::cout << "GAME OVER!" << std::endl;
	std::cout << "================" << std::endl << std::endl;
	std::cout << "Press q to quit:";
	char q = 'q';
	std::cin >> q;
	std::cout << std::endl;
}

void Player::displayHitPoints()
{
	std::cout << mName << "'s Hitpoints = " << mHitPoints << std::endl;
}
