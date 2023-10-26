#include "GameManager.h"

DEFINITION_SINGLETON(CGameManager)

CGameManager::CGameManager() : 
	m_gameEnable(false),
	m_menu(EMain_Menu::None)
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);	// 메모리 릭 체크
}

CGameManager::~CGameManager()
{
}

bool CGameManager::init()
{
	m_gameEnable = true;

	int* p = new int;

	return true;
}

void CGameManager::run()
{
	while (m_gameEnable) {
		EMain_Menu input = menu();

		switch (input)
		{
		case EMain_Menu::None:
			continue;
		case EMain_Menu::Player:
			cout << "플레이어" << '\n';
			break;
		case EMain_Menu::Store:
			cout << "상점" << '\n';
			break;
		case EMain_Menu::Field:
			cout << "사냥터" << '\n';
			break;
		case EMain_Menu::Exit:
			m_gameEnable = false;
			break;
		}

		system("pause");
	}
}

EMain_Menu CGameManager::menu()
{
	system("cls");

	cout << "1. 플레이어" << '\n';
	cout << "2. 상점" << '\n';
	cout << "3. 사냥터" << '\n';
	cout << "4. 종료" << '\n';

	string str;
	cout << "input: ";
	cin >> str;

	if (str.length() > 1)
		return EMain_Menu::None;

	if (str.front() - '0' < static_cast<int>(EMain_Menu::Player) || str.front() - '0' > static_cast<int>(EMain_Menu::Exit))
		return EMain_Menu::None;

	int input = stoi(str);
	if (input < static_cast<int>(EMain_Menu::Player) || input > static_cast<int>(EMain_Menu::Exit))
		return EMain_Menu::None;

	return static_cast<EMain_Menu>(input);
}
