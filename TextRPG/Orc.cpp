#include "Orc.h"

COrc::COrc() :
	CMonster()
{
}

COrc::~COrc()
{
}

bool COrc::init()
{
	if (!CMonster::init())
		return false;

	setName("ø¿≈©");
	setLevel(5);
	setExp(100);
	setHp(100);
	setHpMax(100);
	setAtt(50);
	setDef(10);
	setGold(100);

	return true;
}

void COrc::render()
{
	CMonster::render();
}