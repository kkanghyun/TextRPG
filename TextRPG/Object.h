#pragma once

#include "GameInfo.h"

class CObject
{
private:
	string m_name;
	int m_hp;
	int m_hpMax;
	int m_mp;
	int m_mpMax;
	int m_level;
	int m_exp;
	int m_expMax;
	int m_att;
	int m_def;
	int m_gold;

public:
	CObject();
	virtual ~CObject() = 0;

public:
	virtual void init();

public:
	void setName(const string_view name);
	void setHp(int val);
	void setHpMax(int val);
	void setMp(int val);
	void setMpMax(int val);
	void setLevel(int val);
	void setExp(int val);
	void setExpMax(int val);
	void setAtt(int val);
	void setDef(int val);
	void setGold(int val);

	const string& getName() const;
	int gethp() const;
	int gethpMax() const;
	int getmp() const;
	int getmpMax() const;
	int getLevel() const;
	int getExp() const;
	int getExpMax() const;
	int getAtt() const;
	int getDef() const;
	int getGold() const;

	void addExp(int val);
	void addGold(int val);
};

