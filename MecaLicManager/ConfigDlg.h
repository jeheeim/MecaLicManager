#pragma once

#include "MecaLicManagerDlg.h"
#include "afxwin.h"

// CConfigDlg ��ȭ �����Դϴ�.

class CConfigDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CConfigDlg)

public:
	CConfigDlg(CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~CConfigDlg();

// ��ȭ ���� �������Դϴ�.
	enum { IDD = IDD_CONFIG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

	DECLARE_MESSAGE_MAP()
private:
	CListBox ctrlSavePath;
	CString cstrSavePath;


	// �߰��� �Լ�
public:
	afx_msg void OnIdokConfig();
	afx_msg void OnIdcancelConfig();
	afx_msg void OnButtSavepath();
};
