#pragma once

#include "GameInfo.h"

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

