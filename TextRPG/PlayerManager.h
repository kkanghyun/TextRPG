#pragma once

#include "SingletonMacro.h"
#include "GameInfo.h"
#include "Player.h"

/*
�÷��̾� ��ü�� ���� �� �Ҹ��� ����ϰ� �����ϴ� Ŭ�����Դϴ�.
������ �帧�� �÷��̾� ��ü�� �ν��Ͻ��� �ϳ��� �����ؾ� �մϴ�.
�÷��̾��� ������ ���� ������ �� �ִ� �޴�(�������ͽ�, ��ų, ������, ��� ��) UI�� ����մϴ�.
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
	/* �÷��̾� �޴� UI�� ȭ�鿡 ����մϴ�. */
	EPlayer_Menu menu();
	/* �÷��̾� �������ͽ��� ȭ�鿡 ����մϴ�. */
	void outputPlayerStatus();

public:
	void setEnable(bool enable);
	void setPlayerName();

	CPlayer* getPlayer() const;

	DECLARE_SINGLETON(CPlayerManager)
};

