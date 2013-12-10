// RevCtrl.cpp : 实现文件
//

#include "stdafx.h"
#include "Dolphin.h"
#include "RevCtrl.h"


// CRevCtrl 对话框

IMPLEMENT_DYNAMIC(CRevCtrl, CDialog)

CRevCtrl::CRevCtrl(CWnd* pParent /*=NULL*/)
	: CDialog(CRevCtrl::IDD, pParent)
{

}

CRevCtrl::~CRevCtrl()
{
}

void CRevCtrl::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CRevCtrl, CDialog)
END_MESSAGE_MAP()


// CRevCtrl 消息处理程序
