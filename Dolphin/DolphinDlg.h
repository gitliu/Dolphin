// DolphinDlg.h : ͷ�ļ�
//

#pragma once
#include "LoginCtrl.h"
#include "RevCtrl.h"
#include "PicCtrl.h"

// CDolphinDlg �Ի���
class CDolphinDlg : public CDialog
{
// ����
public:
	CDolphinDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_DOLPHIN_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��

// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedBtnLogin();
	afx_msg void OnBnClickedBtnRev();
	afx_msg void OnBnClickedBtnPic();

// Class Object
	CLoginCtrl m_obj_login;
	CRevCtrl   m_obj_rev;
	CPicCtrl   m_obj_pic;
};
