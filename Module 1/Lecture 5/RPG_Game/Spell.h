//#pragma once
#ifndef SPELL_H
#define SPELL_H

#include"Range.h"
#include<string>

struct Spell
{
	std::string mName;
	Range mDamageRange;
	int mMagicPointsRequired;
};

#endif // SPELL_H
