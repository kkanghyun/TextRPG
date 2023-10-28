#pragma once

#include "SingletonMacro.h"
#include "GameInfo.h"
#include "Monster.h"

/*
모든 Field 객체의 생성과 소멸을 담당하고 관리하는 클래스입니다.
여러 사냥터 중 하나를 선택하여 입장하는 메뉴 UI를 담당합니다.
*/
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

