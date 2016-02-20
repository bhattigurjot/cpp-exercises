#include "Wizard.h"
#include <iostream>

using namespace std;

Wizard::Wizard()
{
	mName = "Default";
	mHitPoints = 0;
	mMagicPoints = 0;
	mArmor = 0;
}

Wizard::Wizard(string name, int hp, int mp, int armor)
{
	mName = name;
	mHitPoints = hp;
	mMagicPoints = mp;
	mArmor = armor;
}

void Wizard::print()
{
	cout << "Name= " << mName << endl;
	cout << "HP= " << mHitPoints << endl;
	cout << "MP= " << mMagicPoints << endl;
	cout << "Armor= " << mArmor << endl;
	cout << endl;
}

void Wizard::save(ofstream& outFile)
{
	int len = mName.length();
	outFile.write((char*)&len, sizeof(int));

	outFile.write(mName.c_str(), mName.length());
	outFile.write((char*)&mHitPoints, sizeof(int));
	outFile.write((char*)&mMagicPoints, sizeof(int));
	outFile.write((char*)&mArmor, sizeof(int));
}

void Wizard::load(ifstream& inFile)
{
	int len = 0;
	inFile.read((char*)&len, sizeof(int));

	mName.resize(len);

	inFile.read((char*)&mName[0], mName.length());
	inFile.read((char*)&mHitPoints, sizeof(int));
	inFile.read((char*)&mMagicPoints, sizeof(int));
	inFile.read((char*)&mArmor, sizeof(int));
}
