#pragma once

/*
디자인 패턴 중 하나인 싱글톤 패턴을 구현한 매크로입니다.
싱글톤 패턴은 생성자가 여러 차례 호출되더라도 실제로 생성되는 객체는 하나이고 
최초 생성 이후에 호출된 생성자는 최초의 생성자가 생성한 객체를 리턴합니다.
*/

/* 
해당 클래스를 싱글 톤으로 선언합니다. 
클래스를 선언하면 인스턴스 변수에 대한 정의를 반드시 해줘야 합니다.
Type: 클래스 이름
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
싱글 톤으로 선언한 클래스의 인스턴스 변수를 초기화합니다. 
Type: 클래스 이름
*/
#define	DEFINITION_SINGLETON(Type)	Type* Type::m_inst = nullptr;