#pragma once


// CRevCtrl 对话框

class CRevCtrl : public CDialog
{
	DECLARE_DYNAMIC(CRevCtrl)

public:
	CRevCtrl(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CRevCtrl();

// 对话框数据
	enum { IDD = IDD_DLG_REV };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
