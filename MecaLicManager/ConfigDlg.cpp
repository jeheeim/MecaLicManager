// ConfigDlg.cpp : 구현 파일입니다.
//

#include "stdafx.h"
#include "MecaLicManager.h"
#include "ConfigDlg.h"
#include "afxdialogex.h"


// CConfigDlg 대화 상자입니다.

IMPLEMENT_DYNAMIC(CConfigDlg, CDialogEx)

CConfigDlg::CConfigDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CConfigDlg::IDD, pParent)
	, cstrSavePath(_T(""))
{
}

CConfigDlg::~CConfigDlg()
{
}

void CConfigDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST_SAVEPATH, ctrlSavePath);
	DDX_LBString(pDX, IDC_LIST_SAVEPATH, cstrSavePath);
}


BEGIN_MESSAGE_MAP(CConfigDlg, CDialogEx)
	ON_BN_CLICKED(IDOK_CONFIG, &CConfigDlg::OnIdokConfig)
	ON_BN_CLICKED(IDCANCEL_CONFIG, &CConfigDlg::OnIdcancelConfig)
	ON_BN_CLICKED(IDC_BUTT_SAVEPATH, &CConfigDlg::OnButtSavepath)
END_MESSAGE_MAP()


// CConfigDlg 메시지 처리기입니다.


void CConfigDlg::OnIdokConfig()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.

	MessageBox("저장경로를 변경합니다","확인",NULL);

	OnOK();
}


void CConfigDlg::OnIdcancelConfig()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	
	MessageBox("저장경로변경을 취소합니다.","취소",NULL);

	OnOK();
}


void CConfigDlg::OnButtSavepath()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	
	MessageBox("저장경로 창을 호출합니다.","호출",NULL);
}
