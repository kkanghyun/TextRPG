#pragma once

#include "GameInfo.h"
#include "SingletonMacro.h"

/*
모든 관리자 클래스를 관리하는 최상위 부모 클래스입니다.
메인 메뉴 UI를 담당합니다.
*/
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

