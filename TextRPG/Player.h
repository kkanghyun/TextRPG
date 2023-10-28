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
	/* 플레이어의 스테이터스를 화면에 출력합니다. */
	void render() final;
};
