// Prop3.cpp : implementation file
//

#include "stdafx.h"
#include "Prop.h"
#include "Prop3.h"
#include "PropSheet.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CProp3 property page

IMPLEMENT_DYNCREATE(CProp3, CPropertyPage)

CProp3::CProp3() : CPropertyPage(CProp3::IDD)
{
	//{{AFX_DATA_INIT(CProp3)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}

CProp3::~CProp3()
{
}

void CProp3::DoDataExchange(CDataExchange* pDX)
{
	CPropertyPage::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CProp3)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CProp3, CPropertyPage)
	//{{AFX_MSG_MAP(CProp3)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CProp3 message handlers

BOOL CProp3::OnSetActive() 
{
	// TODO: Add your specialized code here and/or call the base class
	((CPropSheet*)GetParent())->SetWizardButtons(PSWIZB_BACK | PSWIZB_FINISH);
	return CPropertyPage::OnSetActive();
}

BOOL CProp3::OnInitDialog() 
{
	CPropertyPage::OnInitDialog();
	
	// TODO: Add extra initialization here
	((CComboBox*)GetDlgItem(IDC_COMBO1))->AddString("1000元以下");
	((CComboBox*)GetDlgItem(IDC_COMBO1))->AddString("1000至2000元");
	((CComboBox*)GetDlgItem(IDC_COMBO1))->AddString("2000元以上");
	((CComboBox*)GetDlgItem(IDC_COMBO1))->SetCurSel(0);
	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}

BOOL CProp3::OnWizardFinish() 
{
	// TODO: Add your specialized code here and/or call the base class
	// 在用户点击完成的时候，取得用户选择的选项的值
	int index;
	index = ((CComboBox*)GetDlgItem(IDC_COMBO1))->GetCurSel();
	((CComboBox*)GetDlgItem(IDC_COMBO1))->GetLBText(index, m_strSalary);
	return CPropertyPage::OnWizardFinish();
}
