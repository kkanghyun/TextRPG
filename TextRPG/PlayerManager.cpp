#include "PlayerManager.h"

DEFINITION_SINGLETON(CPlayerManager)

CPlayerManager::CPlayerManager() :
	m_enable(false),
	m_menu(EPlayer_Menu::None)
{
}

CPlayerManager::~CPlayerManager()
{
}

bool CPlayerManager::init()
{
	if (!m_player) {
		m_player = make_shared<CPlayer>();
		m_player->init();
	}

	return true;
}

void CPlayerManager::run()
{
	while (m_enable) {
		EPlayer_Menu input = menu();

		switch (input)
		{
		case EPlayer_Menu::None:
			continue;
		case EPlayer_Menu::Status:
			outputPlayerStatus();
			break;
		case EPlayer_Menu::Inventory:
			cout << "�κ��丮" << '\n';
			break;
		case EPlayer_Menu::Skill:
			cout << "��ų" << '\n';
			break;
		case EPlayer_Menu::Exit:
			m_enable = false;
			break;
		}
	}
}

EPlayer_Menu CPlayerManager::menu()
{
	system("cls");

	cout << "1. �������ͽ�" << '\n';
	cout << "2. �κ��丮" << '\n';
	cout << "3. ��ų" << '\n';
	cout << "4. �ڷΰ���" << '\n';

	string str;
	cout << "input: ";
	cin >> str;

	if (str.length() > 1) {
		return EPlayer_Menu::None;
	}

	if (str.front() - '0' <= static_cast<int>(EPlayer_Menu::None) || str.front() - '0' > static_cast<int>(EPlayer_Menu::Exit)) {
		return EPlayer_Menu::None;
	}

	int input = stoi(str);
	if (input <= static_cast<int>(EPlayer_Menu::None) || input > static_cast<int>(EPlayer_Menu::Exit)) {
		return EPlayer_Menu::None;
	}

	return static_cast<EPlayer_Menu>(input);
}

void CPlayerManager::outputPlayerStatus()
{
	system("cls");
	m_player->render();
	cout << '\n';
	system("pause");
}

void CPlayerManager::setEnable(bool enable)
{
	m_enable = enable;
}

void CPlayerManager::setPlayerName()
{
	cout << "�г����� �Է��ϼ���: ";
	string name;
	cin >> name;

	m_player->setName(name);
}

CPlayer* CPlayerManager::getPlayer() const
{
	return m_player.get();
}
