#include "Object.h"

CObject::CObject() :
	m_name(""),
	m_hp{},
	m_hpMax{},
	m_mp{},
	m_mpMax{},
	m_level{},
	m_exp{},
	m_expMax{},
	m_att{},
	m_def{},
	m_gold{}
{
}

CObject::~CObject()
{
}

void CObject::init()
{
	m_name = "";
	m_hp = 0;
	m_hpMax = 0;
	m_mp = 0;
	m_mpMax = 0;
	m_level = 0;
	m_exp = 0;
	m_expMax = 0;
	m_att = 0;
	m_def = 0;
	m_gold = 0;
}

void CObject::setName(const string_view name)
{
	m_name = name;
}

void CObject::setHp(int val)
{
	m_hp = val;
}

void CObject::setHpMax(int val)
{
	m_hpMax = val;
}

void CObject::setMp(int val)
{
	m_mp = val;
}

void CObject::setMpMax(int val)
{
	m_mpMax = val;
}

void CObject::setLevel(int val)
{
	m_level = val;
}

void CObject::setExp(int val)
{
	m_exp = val;
}

void CObject::setExpMax(int val)
{
	m_expMax = val;
}

void CObject::setAtt(int val)
{
	m_att = val;
}

void CObject::setDef(int val)
{
	m_def = val;
}

void CObject::setGold(int val)
{
	m_gold = val;
}

const string& CObject::getName() const
{
	return m_name;
}

int CObject::gethp() const
{
	return m_hp;
}

int CObject::gethpMax() const
{
	return m_hpMax;
}

int CObject::getmp() const
{
	return m_mp;
}

int CObject::getmpMax() const
{
	return m_mpMax;
}

int CObject::getLevel() const
{
	return m_level;
}

int CObject::getExp() const
{
	return m_exp;
}

int CObject::getExpMax() const
{
	return m_expMax;
}

int CObject::getAtt() const
{
	return m_att;
}

int CObject::getDef() const
{
	return m_def;
}

int CObject::getGold() const
{
	return m_gold;
}

void CObject::addExp(int val)
{
	m_exp += val;
}

void CObject::addGold(int val)
{
	m_gold += val;
}
