#include "MonsterManager.h"

DEFINITION_SINGLETON(CMonsterManager)

CMonsterManager::CMonsterManager()
{
}

CMonsterManager::~CMonsterManager()
{
	deleteMonsterAll();
}

bool CMonsterManager::init()
{
	return true;
}

CMonster* CMonsterManager::getMonster(string_view name) const
{
	for (const auto& it : m_monsters) {
		if (it->getName() == name) {
			return it;
		}
	}

	return nullptr;
}

void CMonsterManager::deleteMonsterAll()
{
	for (const auto& it : m_monsters) {
		if (it)
			delete it;
	}
}

void CMonsterManager::deleteMonster(string_view name)
{
	for (const auto& it : m_monsters) {
		if (it->getName() == name) {
			delete it;
			break;
		}
	}
}
