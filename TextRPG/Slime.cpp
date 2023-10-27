#include "Slime.h"

CSlime::CSlime() :
	CMonster()
{
}

CSlime::~CSlime()
{
}

bool CSlime::init()
{
	if (!CMonster::init())
		return false;

	setName("ΩΩ∂Û¿”");
	setLevel(1);
	setExp(10);
	setHp(10);
	setHpMax(10);
	setAtt(1);
	setDef(0);
	setGold(10);

    return true;
}

void CSlime::render()
{
	CMonster::render();
}
