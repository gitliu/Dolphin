#pragma once


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
};
