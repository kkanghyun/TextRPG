#pragma once

#include "GameInfo.h"

/*
이 클래스는 플레이어와 몬스터의 전투를 담당합니다.
*/
class CField
{
private:
	bool m_enable;
	string m_name;

	class CPlayer* m_player;
	class CMonster* m_monster;

public:
	CField();
	~CField();

public:
	bool init();
	/* 전투 루프 */
	void run();

public:
	void setEnable(bool enable);
	void setName(string_view name);
	void setPlayer(class CPlayer* player);
	void setMonster(class CMonster* monster);

public:
	void outputPlayerInfo();
	void outputMonsterInfo();
	EField_PlayerInput playerInput();
	EField_MonsterInput monsterInput();
};

