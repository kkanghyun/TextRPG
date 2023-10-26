#pragma once

// µ¿⁄¿Œ ∆–≈œ: ΩÃ±€ ≈Ê
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

#define	DEFINITION_SINGLETON(Type)	Type* Type::m_inst = nullptr;