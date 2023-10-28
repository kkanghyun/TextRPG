#pragma once

#include "SingletonMacro.h"
#include "GameInfo.h"
#include "Player.h"

/*
플레이어 객체의 생성 및 소멸을 담당하고 관리하는 클래스입니다.
게임의 흐름상 플레이어 객체의 인스턴스는 하나만 존재해야 합니다.
플레이어의 정보를 보고 관리할 수 있는 메뉴(스테이터스, 스킬, 아이템, 장비 등) UI를 담당합니다.
*/
class CPlayerManager
{
private:
	bool m_enable;
	shared_ptr<CPlayer> m_player;
	EPlayer_Menu m_menu;

public:
	bool init();
	void run();

public:
	/* 플레이어 메뉴 UI를 화면에 출력합니다. */
	EPlayer_Menu menu();
	/* 플레이어 스테이터스를 화면에 출력합니다. */
	void outputPlayerStatus();

public:
	void setEnable(bool enable);
	void setPlayerName();

	CPlayer* getPlayer() const;

	DECLARE_SINGLETON(CPlayerManager)
};

