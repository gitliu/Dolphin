#pragma once
#include "afxdtctl.h"
#include "afxcmn.h"
#include "niceslider.h"


// CRevCtrl �Ի���

class CRevCtrl : public CDialog
{
	DECLARE_DYNAMIC(CRevCtrl)

public:
	CRevCtrl(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CRevCtrl();

// �Ի�������
	enum { IDD = IDD_DLG_REV };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL OnInitDialog();
	CDateTimeCtrl m_date_ctrl;
//	CTreeCtrl m_tree_ctrl;
	afx_msg void OnBnClickedBtnOpen();
	// ������
	CNiceSliderCtrl m_ctl_slider;
};
