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
	/* ������ �������ͽ��� ȭ�鿡 ����մϴ�. */
	void render() override;
};
