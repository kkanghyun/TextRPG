#pragma once

#include "Monster.h"

class CBasilisk :
    public CMonster
{
public:
	CBasilisk();
	~CBasilisk() override;

public:
	bool init() override;
	void render() override;
};

