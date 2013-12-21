#pragma once
#include "afxdtctl.h"
#include "afxcmn.h"
#include <atlimage.h>


// CPicCtrl �Ի���

class CPicCtrl : public CDialog
{
	DECLARE_DYNAMIC(CPicCtrl)

public:
	CPicCtrl(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CPicCtrl();

// �Ի�������
	enum { IDD = IDD_DLG_PIC };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CDateTimeCtrl m_date_ctrl;
	CTreeCtrl m_tree_ctrl;
	CTime m_time_val;
	CImage m_mfc_image;
	CRect  m_mfc_rect;
	afx_msg void OnDtnDatetimechangeDatePic(NMHDR *pNMHDR, LRESULT *pResult);
	virtual BOOL OnInitDialog();
	afx_msg void OnNMDblclkTreePic(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnBnClickedBtnOpen();
	afx_msg void OnPaint();
	afx_msg void OnSize(UINT nType, int cx, int cy);
};
