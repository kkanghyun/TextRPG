#pragma once

#include "SingletonMacro.h"
#include "GameInfo.h"
#include "Monster.h"

class CMonsterManager
{
private:
	list<CMonster*> m_monsters;

public:
	bool init();

public:
	CMonster* getMonster(string_view name) const;

public:
	template <typename T>
	T* CreateMonster()
	{
		T* monster = new T;

		if (!monster->init()) {
			return nullptr;
		}

		m_monsters.push_back((CMonster*)monster);

		return monster;
	}

	void deleteMonsterAll();
	void deleteMonster(string_view name);

	DECLARE_SINGLETON(CMonsterManager)
};

