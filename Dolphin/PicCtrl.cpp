// PicCtrl.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "Dolphin.h"
#include "PicCtrl.h"


// CPicCtrl �Ի���

IMPLEMENT_DYNAMIC(CPicCtrl, CDialog)

CPicCtrl::CPicCtrl(CWnd* pParent /*=NULL*/)
	: CDialog(CPicCtrl::IDD, pParent)
{

}

CPicCtrl::~CPicCtrl()
{
}

void CPicCtrl::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CPicCtrl, CDialog)
END_MESSAGE_MAP()


// CPicCtrl ��Ϣ�������
