﻿
// Kolor2.h: Kolor2 응용 프로그램의 기본 헤더 파일
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"       // 주 기호입니다.


// CKolor2App:
// 이 클래스의 구현에 대해서는 Kolor2.cpp을(를) 참조하세요.
//

class CKolor2App : public CWinApp
{
public:
	CKolor2App() noexcept;


// 재정의입니다.
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// 구현입니다.
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CKolor2App theApp;
