#pragma once


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
};
