#if !defined(AFX_PROP3_H__DC9133F4_EB9A_4636_8960_603FFFD885B2__INCLUDED_)
#define AFX_PROP3_H__DC9133F4_EB9A_4636_8960_603FFFD885B2__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Prop3.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CProp3 dialog

class CProp3 : public CPropertyPage
{
	DECLARE_DYNCREATE(CProp3)

// Construction
public:
	CString m_strSalary;
	CProp3();
	~CProp3();

// Dialog Data
	//{{AFX_DATA(CProp3)
	enum { IDD = IDD_PROP3 };
		// NOTE - ClassWizard will add data members here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_DATA


// Overrides
	// ClassWizard generate virtual function overrides
	//{{AFX_VIRTUAL(CProp3)
	public:
	virtual BOOL OnSetActive();
	virtual BOOL OnWizardFinish();
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	// Generated message map functions
	//{{AFX_MSG(CProp3)
	virtual BOOL OnInitDialog();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()

};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_PROP3_H__DC9133F4_EB9A_4636_8960_603FFFD885B2__INCLUDED_)
