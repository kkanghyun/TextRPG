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
	void render() override;
};
