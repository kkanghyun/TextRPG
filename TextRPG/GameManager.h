#pragma once

#include "GameInfo.h"
#include "SingletonMacro.h"

class CGameManager
{
private:
	bool m_gameEnable;
	EMain_Menu m_menu;

public:
	bool init();
	void run();

public:
	EMain_Menu menu();

	DECLARE_SINGLETON(CGameManager)
};

