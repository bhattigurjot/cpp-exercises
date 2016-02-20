//#pragma once
#ifndef WIZARD_H
#define WIZARD_H

#include <fstream>
#include <string>

class Wizard
{
public:
	Wizard();
	Wizard(std::string name, int hp, int mp, int armor);

	void print();
	void save(std::ofstream& outFile);
	void load(std::ifstream& inFile);

private:
	std::string mName;
	int mHitPoints;
	int mMagicPoints;
	int mArmor;
};

#endif // WIZARD_H
