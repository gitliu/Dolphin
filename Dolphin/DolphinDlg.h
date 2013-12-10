// DolphinDlg.h : 头文件
//

#pragma once
#include "LoginCtrl.h"
#include "RevCtrl.h"
#include "PicCtrl.h"

// CDolphinDlg 对话框
class CDolphinDlg : public CDialog
{
// 构造
public:
	CDolphinDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
	enum { IDD = IDD_DOLPHIN_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持

// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
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
