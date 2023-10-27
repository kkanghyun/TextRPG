#pragma once

#include "SingletonMacro.h"
#include "GameInfo.h"
#include "Monster.h"

class CFieldManager
{
private:
	bool m_enable;
	EPlayer_Menu m_menu;
	vector<class CField*> m_vecField;

public:
	bool init();
	void run();

public:
	EField_Menu menu();

public:
	void setEnable(bool enable);

public:
	void CreateField(string_view name, CMonster* monster);

	DECLARE_SINGLETON(CFieldManager)
};

