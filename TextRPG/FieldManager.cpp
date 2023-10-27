#include "FieldManager.h"

#include "Field.h"
#include "PlayerManager.h"
#include "MonsterManager.h"
#include "Slime.h"
#include "Orc.h"
#include "Basilisk.h"

DEFINITION_SINGLETON(CFieldManager)

CFieldManager::CFieldManager() :
	m_enable(false),
	m_menu(EPlayer_Menu::None)
{
}

CFieldManager::~CFieldManager()
{
	for (auto it : m_vecField) {
		if (it)
			delete it;
	}
}

bool CFieldManager::init()
{
	CMonster* monster = CMonsterManager::getInst()->CreateMonster<CSlime>();
	CreateField("필드 1", monster);
	monster = CMonsterManager::getInst()->CreateMonster<COrc>();
	CreateField("필드 2", monster);
	monster = CMonsterManager::getInst()->CreateMonster<CBasilisk>();
	CreateField("필드 3", monster);

	return true;
}

void CFieldManager::run()
{
	while (m_enable) {
		EField_Menu input = menu();

		switch (input)
		{
		case EField_Menu::None:
			continue;
		case EField_Menu::Field_1:
			m_vecField[(int)EField_Menu::Field_1 - 1]->setEnable(true);
			m_vecField[(int)EField_Menu::Field_1 - 1]->run();
			break;
		case EField_Menu::Field_2:
			m_vecField[(int)EField_Menu::Field_2 - 1]->setEnable(true);
			m_vecField[(int)EField_Menu::Field_2 - 1]->run();
			break;
		case EField_Menu::Field_3:
			m_vecField[(int)EField_Menu::Field_3 - 1]->setEnable(true);
			m_vecField[(int)EField_Menu::Field_3 - 1]->run();
			break;
		case EField_Menu::Exit:
			m_enable = false;
			break;
		}
	}
}

EField_Menu CFieldManager::menu()
{
	system("cls");

	cout << "1. 필드 1" << '\n';
	cout << "2. 필드 2" << '\n';
	cout << "3. 필드 3" << '\n';
	cout << "4. 뒤로가기" << '\n';

	string str;
	cout << "input: ";
	cin >> str;

	if (str.length() > 1) {
		return EField_Menu::None;
	}

	if (str.front() - '0' <= static_cast<int>(EField_Menu::None) || str.front() - '0' > static_cast<int>(EField_Menu::Exit)) {
		return EField_Menu::None;
	}

	int input = stoi(str);
	if (input <= static_cast<int>(EField_Menu::None) || input > static_cast<int>(EField_Menu::Exit)) {
		return EField_Menu::None;
	}

	return static_cast<EField_Menu>(input);
}

void CFieldManager::setEnable(bool enable)
{
	m_enable = enable;
}

void CFieldManager::CreateField(string_view name, CMonster* monster)
{
	CField* field = new CField;
	field->init();
	field->setName(name);
	CPlayer* player = CPlayerManager::getInst()->getPlayer();
	field->setPlayer(player);
	field->setMonster(monster);
	m_vecField.push_back(field);
}
