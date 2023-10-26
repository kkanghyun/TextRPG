#pragma once

#include "SingletonMacro.h"
#include "GameInfo.h"

class CFieldManager
{
private:
	bool m_enable;
	EPlayer_Menu m_menu;

public:
	bool init();
	void run();

public:
	EField_Menu menu();

public:
	void setEnable(bool enable);

	DECLARE_SINGLETON(CFieldManager)
};

