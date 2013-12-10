#pragma once


// CPicCtrl 对话框

class CPicCtrl : public CDialog
{
	DECLARE_DYNAMIC(CPicCtrl)

public:
	CPicCtrl(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CPicCtrl();

// 对话框数据
	enum { IDD = IDD_DLG_PIC };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
