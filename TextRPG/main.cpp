
#include "GameManager.h"

int main()
{
	if (CGameManager::getInst()->init() == false) {
		CGameManager::getInst()->destroyInst();
		return 0;
	}

	CGameManager::getInst()->run();
	CGameManager::getInst()->destroyInst();
}