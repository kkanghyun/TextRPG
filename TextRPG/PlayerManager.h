#pragma once

#include "SingletonMacro.h"
#include "GameInfo.h"
#include "Player.h"

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
	EPlayer_Menu menu();
	void outputPlayerStatus();

public:
	void setEnable(bool enable);
	void setPlayerName();

	CPlayer* getPlayer() const;

	DECLARE_SINGLETON(CPlayerManager)
};

