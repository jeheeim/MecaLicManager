// ConfigDlg.cpp : ���� �����Դϴ�.
//

#include "stdafx.h"
#include "MecaLicManager.h"
#include "ConfigDlg.h"
#include "afxdialogex.h"


// CConfigDlg ��ȭ �����Դϴ�.

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


// CConfigDlg �޽��� ó�����Դϴ�.


void CConfigDlg::OnIdokConfig()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.

	MessageBox("�����θ� �����մϴ�","Ȯ��",NULL);

	OnOK();
}


void CConfigDlg::OnIdcancelConfig()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	
	MessageBox("�����κ����� ����մϴ�.","���",NULL);

	OnOK();
}


void CConfigDlg::OnButtSavepath()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.
	
	MessageBox("������ â�� ȣ���մϴ�.","ȣ��",NULL);
}
