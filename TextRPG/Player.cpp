#include "Player.h"

CPlayer::CPlayer() :
	CObject()
{
}

CPlayer::~CPlayer()
{
}

bool CPlayer::init()
{
	if (!CObject::init())
		return false;

	setLevel(1);
	setExp(0);
	setExpMax(10);
	setHp(10);
	setHpMax(10);
	setMp(10);
	setMpMax(10);
	setAtt(2);
	setDef(0);
	setGold(0);

	return true;
}

void CPlayer::render()
{
	cout << format("{:10}", "이름: ") << getName() << '\n';
	cout << format("{:10}", "Level: ") << getLevel() << '\n';
	cout << format("{:10}", "Exp: ") << getExp() << '/' << getExpMax() << '\n';
	cout << format("{:10}", "HP: ") << getHp() << '/' << getHpMax() << '\n';
	cout << format("{:10}", "MP: ") << getMp() << '/' << getMpMax() << '\n';
	cout << format("{:10}", "공격력: ") << getAtt() << '\n';
	cout << format("{:10}", "방어력: ") << getDef() << '\n';
	cout << format("{:10}", "골드: ") << getGold() << '\n';
}
