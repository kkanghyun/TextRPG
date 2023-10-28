
#include "GameManager.h"

int main()
{
	/* 모든 관리자 클래스의 초기화를 진행합니다. */
	if (CGameManager::getInst()->init() == false) {
		CGameManager::getInst()->destroyInst();
		return 0;
	}

	/* 게임의 메인 루프를 실행합니다. */
	CGameManager::getInst()->run();
	CGameManager::getInst()->destroyInst();
}