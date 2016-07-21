#pragma once

#include "MecaLicManagerDlg.h"
#include "afxwin.h"

// CConfigDlg 대화 상자입니다.

class CConfigDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CConfigDlg)

public:
	CConfigDlg(CWnd* pParent = NULL);   // 표준 생성자입니다.
	virtual ~CConfigDlg();

// 대화 상자 데이터입니다.
	enum { IDD = IDD_CONFIG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
private:
	CListBox ctrlSavePath;
	CString cstrSavePath;


	// 추가한 함수
public:
	afx_msg void OnIdokConfig();
	afx_msg void OnIdcancelConfig();
	afx_msg void OnButtSavepath();
};
