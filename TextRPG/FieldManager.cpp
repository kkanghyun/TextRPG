#include "FieldManager.h"

DEFINITION_SINGLETON(CFieldManager)

CFieldManager::CFieldManager() :
	m_enable(false),
	m_menu(EPlayer_Menu::None)
{
}

CFieldManager::~CFieldManager()
{
}

bool CFieldManager::init()
{
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
			cout << "필드 1" << '\n';
			break;
		case EField_Menu::Field_2:
			cout << "필드 2" << '\n';
			break;
		case EField_Menu::Field_3:
			cout << "필드 3" << '\n';
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
