#pragma once
#include "afxwin.h"


// CLoginCtrl 对话框

class CLoginCtrl : public CDialog
{
	DECLARE_DYNAMIC(CLoginCtrl)

public:
	CLoginCtrl(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CLoginCtrl();

// 对话框数据
	enum { IDD = IDD_LOGIN };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	int contoser();
public:
	afx_msg void OnBnClickedTrue();
	// ip
	CEdit m_mem_ip;
	CString m_val_ip;
	// port
	CEdit m_mem_port;
	CString m_val_prot;
	// user
	CEdit m_mem_user;
	CString m_val_user;
	// pwd
	CEdit m_mem_pwd;
	CString m_val_pwd;

};
