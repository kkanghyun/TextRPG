#include "Monster.h"

CMonster::CMonster() :
	CObject()
{
}

CMonster::~CMonster()
{
}

bool CMonster::init()
{


	if (!CObject::init())
		return false;

	return true;
}

void CMonster::render()
{
	if (getName() == "") {
		assert(false);
		return;
	}

	cout << format("{:10}", "이름: ") << getName() << '\n';
	cout << format("{:10}", "Level: ") << getLevel() << '\n';
	cout << format("{:10}", "Exp: ") << getExp() << '\n';
	cout << format("{:10}", "HP: ") << getHp() << '/' << getHpMax() << '\n';
	cout << format("{:10}", "공격력: ") << getAtt() << '\n';
	cout << format("{:10}", "방어력: ") << getDef() << '\n';
	cout << format("{:10}", "골드: ") << getGold() << '\n';
}
