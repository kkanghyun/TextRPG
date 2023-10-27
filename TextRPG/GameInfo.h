#pragma once

#include <stdlib.h>
#include <crtdbg.h>
#include <iostream>
#include <string>
#include <memory>
#include <format>
#include <assert.h>
#include <vector>
#include <list>

#include "Flag.h"

using namespace std;

struct ObjectInfo
{
	string name;
	int level;
	int exp;
	int expMax;
	int hp;
	int hpMax;
	int mp;
	int mpMax;
	int att;
	int def;
	int gold;

	bool enable;


	ObjectInfo() :
		name{ "" },
		level(-1),
		exp(-1),
		expMax(-1),
		hp(-1),
		hpMax(-1),
		mp(-1),
		mpMax(-1),
		att(-1),
		def(-1),
		gold(-1),
		enable(false)
	{
	}
};