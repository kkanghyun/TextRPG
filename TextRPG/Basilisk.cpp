#include "Basilisk.h"

CBasilisk::CBasilisk() :
	CMonster()
{
}

CBasilisk::~CBasilisk()
{
}

bool CBasilisk::init()
{
	if (!CMonster::init())
		return false;

	setName("바실리스크");
	setLevel(20);
	setExp(1000);
	setHp(1000);
	setHpMax(1000);
	setAtt(200);
	setDef(50);
	setGold(10000);

    return true;
}

void CBasilisk::render()
{
	CMonster::render();
}