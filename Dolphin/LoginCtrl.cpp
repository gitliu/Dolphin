// LoginCtrl.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "Dolphin.h"
#include "LoginCtrl.h"
#include <WinSock2.h>
#pragma comment(lib, "Ws2_32.lib")


// CLoginCtrl �Ի���

IMPLEMENT_DYNAMIC(CLoginCtrl, CDialog)

CLoginCtrl::CLoginCtrl(CWnd* pParent /*=NULL*/)
	: CDialog(CLoginCtrl::IDD, pParent)
{

}

CLoginCtrl::~CLoginCtrl()
{
}

void CLoginCtrl::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDIT_IP, m_mem_ip);
	DDX_Control(pDX, IDC_EDIT_PORT, m_mem_port);
	DDX_Control(pDX, IDC_EDIT_USER, m_mem_user);
	DDX_Control(pDX, IDC_EDIT_PWD, m_mem_pwd);
}


BEGIN_MESSAGE_MAP(CLoginCtrl, CDialog)
	ON_BN_CLICKED(ID_TRUE, &CLoginCtrl::OnBnClickedTrue)
END_MESSAGE_MAP()


// CLoginCtrl ��Ϣ�������

// ����
void CLoginCtrl::OnBnClickedTrue()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	m_mem_ip.GetWindowText(m_val_ip);
	m_mem_port.GetWindowText(m_val_prot);
	m_mem_user.GetWindowText(m_val_user);
	m_mem_pwd.GetWindowText(m_val_pwd);

	CDialog::OnOK();
}
