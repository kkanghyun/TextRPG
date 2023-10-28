#pragma once

/* ���� �÷��׸� ������ ��������Դϴ�. */

enum class EMain_Menu
{
	None,
	Player,
	Store,
	Field,
	Exit
};

enum class EPlayer_Menu
{
	None,
	Status,
	Inventory,
	Skill,
	Exit
};

enum class EField_Menu
{
	None,
	Field_1,
	Field_2,
	Field_3,
	Exit
};

enum class EField_PlayerInput
{
	None,
	Attack,
	Skill,
	Item,
	Escape
};

enum class EField_MonsterInput
{
	None,
	Attack,
	Skill,
	Item,
	Escape
};