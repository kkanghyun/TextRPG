#pragma once

#include "Object.h"

class CPlayer :
	public CObject
{
public:
	CPlayer();
	~CPlayer() override;

public:
	void init() override;
};

