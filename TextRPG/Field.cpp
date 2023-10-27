#include "Field.h"

#include "Player.h"
#include "Monster.h"

CField::CField() :
	m_name(""),
	m_enable(false),
	m_player(nullptr),
	m_monster(nullptr)
{
}

CField::~CField()
{
}

bool CField::init()
{
	m_name = "";
	m_enable = true;

	return true;
}

void CField::run()
{
	m_monster->init();

	while (m_enable) {
		system("cls");

		outputPlayerInfo();
		cout << '\n';
		outputMonsterInfo();
		cout << '\n';

		EField_PlayerInput input = playerInput();

		switch (input)
		{
		case EField_PlayerInput::None:
			continue;
		case EField_PlayerInput::Attack:
			m_monster->Damaged(m_player->getAtt());
			cout << format("몬스터에게 {:d}만큼 데미지를 입혔습니다.", m_player->getAtt()) << '\n';
			break;
		case EField_PlayerInput::Skill:
			cout << "스킬을 사용합니다." << '\n';
			break;
		case EField_PlayerInput::Item:
			cout << "아이템을 사용합니다." << '\n';
			break;
		case EField_PlayerInput::Escape:
			cout << "성공적으로 도망쳤습니다." << '\n';
			cout << '\n';
			m_enable = false;
			continue;
		}

		m_player->Damaged(m_monster->getAtt());
		cout << format("몬스터에게 {:d}만큼 데미지를 입었습니다.", m_monster->getAtt()) << '\n';
		cout << '\n';

		system("pause");
	}
}

void CField::setEnable(bool enable)
{
	m_enable = enable;
}

void CField::setName(string_view name)
{
	m_name = name;
}

void CField::setPlayer(CPlayer* player)
{
	m_player = player;
}

void CField::setMonster(CMonster* monster)
{
	m_monster = monster;
}

void CField::outputPlayerInfo()
{
	cout << format("{:=^30}", " 플레이어 ") << '\n';
	m_player->render();
	cout << '\n';
}

void CField::outputMonsterInfo()
{
	cout << format("{:=^30}", " 몬스터 ") << '\n';
	m_monster->render();
	cout << '\n';
}

EField_PlayerInput CField::playerInput()
{
	cout << "1. 공격" << '\n';
	cout << "2. 스킬" << '\n';
	cout << "3. 아이템" << '\n';
	cout << "4. 도망가기" << '\n';

	string str;
	cout << "input: ";
	cin >> str;

	if (str.length() > 1) {
		return EField_PlayerInput::None;
	}

	if (str.front() - '0' <= static_cast<int>(EPlayer_Menu::None) || str.front() - '0' > static_cast<int>(EPlayer_Menu::Exit)) {
		return EField_PlayerInput::None;
	}

	int input = stoi(str);
	if (input <= static_cast<int>(EPlayer_Menu::None) || input > static_cast<int>(EPlayer_Menu::Exit)) {
		return EField_PlayerInput::None;
	}

	return static_cast<EField_PlayerInput>(input);
}

EField_MonsterInput CField::monsterInput()
{
	return EField_MonsterInput::None;
}
