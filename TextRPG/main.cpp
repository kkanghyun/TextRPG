
#include "GameManager.h"

int main()
{
	/* ��� ������ Ŭ������ �ʱ�ȭ�� �����մϴ�. */
	if (CGameManager::getInst()->init() == false) {
		CGameManager::getInst()->destroyInst();
		return 0;
	}

	/* ������ ���� ������ �����մϴ�. */
	CGameManager::getInst()->run();
	CGameManager::getInst()->destroyInst();
}