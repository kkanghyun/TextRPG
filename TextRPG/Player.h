#pragma once

#include "Object.h"

class CPlayer :
	public CObject
{
public:
	CPlayer();
	~CPlayer() final;

public:
	bool init() final;
	/* �÷��̾��� �������ͽ��� ȭ�鿡 ����մϴ�. */
	void render() final;
};
