
// SDL_point.h : SDL_point Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CSDL_pointApp:
// �йش����ʵ�֣������ SDL_point.cpp
//

class CSDL_pointApp : public CWinAppEx
{
public:
	CSDL_pointApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CSDL_pointApp theApp;
