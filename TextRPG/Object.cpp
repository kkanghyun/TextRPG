#include "Object.h"

CObject::CObject() :
	m_info()
{
}

CObject::~CObject()
{
}

bool CObject::init()
{
	return true;
}

void CObject::render()
{
}

void CObject::setName(const string_view name)
{
	m_info.name = name;
}

void CObject::setHp(int val)
{
	m_info.hp = val;
}

void CObject::setHpMax(int val)
{
	m_info.hpMax = val;
}

void CObject::setMp(int val)
{
	m_info.mp = val;
}

void CObject::setMpMax(int val)
{
	m_info.mpMax = val;
}

void CObject::setLevel(int val)
{
	m_info.level = val;
}

void CObject::setExp(int val)
{
	m_info.exp = val;
}

void CObject::setExpMax(int val)
{
	m_info.expMax = val;
}

void CObject::setAtt(int val)
{
	m_info.att = val;
}

void CObject::setDef(int val)
{
	m_info.def = val;
}

void CObject::setGold(int val)
{
	m_info.gold = val;
}

void CObject::setEnable(bool enable)
{
	m_info.enable = enable;
}

void CObject::death()
{
	m_info.enable = true;
}

const string& CObject::getName() const
{
	return m_info.name;
}

int CObject::getHp() const
{
	return m_info.hp;
}

int CObject::getHpMax() const
{
	return m_info.hpMax;
}

int CObject::getMp() const
{
	return m_info.mp;
}

int CObject::getMpMax() const
{
	return m_info.mpMax;
}

int CObject::getLevel() const
{
	return m_info.level;
}

int CObject::getExp() const
{
	return m_info.exp;
}

int CObject::getExpMax() const
{
	return m_info.expMax;
}

int CObject::getAtt() const
{
	return m_info.att;
}

int CObject::getDef() const
{
	return m_info.def;
}

int CObject::getGold() const
{
	return m_info.gold;
}

bool CObject::isDeath() const
{
	return m_info.enable;
}

void CObject::addExp(int val)
{
	m_info.exp += val;
}

void CObject::addGold(int val)
{
	m_info.gold += val;
}

void CObject::Damaged(int val)
{
	m_info.hp -= val;

	if (m_info.hp <= 0) {
		m_info.hp = 0;
	}
}
