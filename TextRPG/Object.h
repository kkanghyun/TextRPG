#pragma once

#include "GameInfo.h"

/*
각종 게임 오브젝트의 부모 (추상)클래스입니다.
*/
class CObject
{
private:
	ObjectInfo m_info;

public:
	CObject();
	virtual ~CObject() = 0;

public:
	virtual bool init();
	virtual void render();

public:
	void setName(const string_view name);
	void setLevel(int val);
	void setExp(int val);
	void setExpMax(int val);
	void setHp(int val);
	void setHpMax(int val);
	void setMp(int val);
	void setMpMax(int val);
	void setAtt(int val);
	void setDef(int val);
	void setGold(int val);
	void setEnable(bool enable);
	void death();

	const string& getName() const;
	int getLevel() const;
	int getExp() const;
	int getExpMax() const;
	int getHp() const;
	int getHpMax() const;
	int getMp() const;
	int getMpMax() const;
	int getAtt() const;
	int getDef() const;
	int getGold() const;
	bool isDeath() const;

	void addExp(int val);
	void addGold(int val);

	void Damaged(int val);
};

