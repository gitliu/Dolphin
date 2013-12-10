// PicCtrl.cpp : 实现文件
//

#include "stdafx.h"
#include "Dolphin.h"
#include "PicCtrl.h"


// CPicCtrl 对话框

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


// CPicCtrl 消息处理程序
