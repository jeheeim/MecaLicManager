
// MecaLicManager.h : PROJECT_NAME ���� ���α׷��� ���� �� ��� �����Դϴ�.
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"		// �� ��ȣ�Դϴ�.


// CMecaLicManagerApp:
// �� Ŭ������ ������ ���ؼ��� MecaLicManager.cpp�� �����Ͻʽÿ�.
//

class CMecaLicManagerApp : public CWinApp
{
public:
	CMecaLicManagerApp();

// �������Դϴ�.
public:
	virtual BOOL InitInstance();

// �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};

extern CMecaLicManagerApp theApp;