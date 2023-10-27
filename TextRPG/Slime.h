#pragma once

#include "Monster.h"

class CSlime :
    public CMonster
{
public:
	CSlime();
	~CSlime() override;

public:
	bool init() override;
	void render() override;
};

