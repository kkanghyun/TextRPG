#pragma once

#include "GameInfo.h"

class CField
{
private:
	string name;
	bool enable;

public:
	CField();
	virtual ~CField() = 0;

public:
	virtual void init();

public:
	void setName();
};

