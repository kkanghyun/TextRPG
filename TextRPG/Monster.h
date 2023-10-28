#pragma once

#include "Object.h"

class CMonster :
	public CObject
{
public:
	CMonster();
	~CMonster() override;

public:
	bool init() override;
	/* 몬스터의 스테이터스를 화면에 출력합니다. */
	void render() override;
};
