#pragma once

#include "Monster.h"

class COrc :
    public CMonster
{
public:
	COrc();
	~COrc() override;

public:
	bool init() override;
	void render() override;
};

