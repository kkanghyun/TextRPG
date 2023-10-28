#pragma once

/*
������ ���� �� �ϳ��� �̱��� ������ ������ ��ũ���Դϴ�.
�̱��� ������ �����ڰ� ���� ���� ȣ��Ǵ��� ������ �����Ǵ� ��ü�� �ϳ��̰� 
���� ���� ���Ŀ� ȣ��� �����ڴ� ������ �����ڰ� ������ ��ü�� �����մϴ�.
*/

/* 
�ش� Ŭ������ �̱� ������ �����մϴ�. 
Ŭ������ �����ϸ� �ν��Ͻ� ������ ���� ���Ǹ� �ݵ�� ����� �մϴ�.
Type: Ŭ���� �̸�
*/
#define	DECLARE_SINGLETON(Type)\
private:\
	static Type*	m_inst;\
private:\
	Type();\
	~Type();\
public:\
	static Type* getInst()\
	{\
		if (!m_inst) {\
			m_inst = new Type;\
		}\
		return m_inst;\
	}\
	static void destroyInst()\
	{\
		if(m_inst) {\
			delete m_inst;\
		}\
	}

/* 
�̱� ������ ������ Ŭ������ �ν��Ͻ� ������ �ʱ�ȭ�մϴ�. 
Type: Ŭ���� �̸�
*/
#define	DEFINITION_SINGLETON(Type)	Type* Type::m_inst = nullptr;