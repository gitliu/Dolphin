// RevCtrl.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "Dolphin.h"
#include "RevCtrl.h"


// CRevCtrl �Ի���

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
	DDX_Control(pDX, IDC_DATE_REV, m_date_ctrl);
//	DDX_Control(pDX, IDC_TREE_REV, m_tree_ctrl);
	DDX_Control(pDX, IDC_SLIDER_VIDEO, m_ctl_slider);
}


BEGIN_MESSAGE_MAP(CRevCtrl, CDialog)
	ON_BN_CLICKED(IDC_BTN_OPEN, &CRevCtrl::OnBnClickedBtnOpen)
END_MESSAGE_MAP()


// CRevCtrl ��Ϣ�������

BOOL CRevCtrl::OnInitDialog()
{
	CDialog::OnInitDialog();

	// TODO:  �ڴ���Ӷ���ĳ�ʼ��
// 	HTREEITEM hItem = m_tree_ctrl.InsertItem("CAM:0x0001", NULL, NULL);
// 	int i, j;
// 	for (i = 0; i < 4; ++i)
// 	{
// 		HTREEITEM hSubItem = m_tree_ctrl.InsertItem("00:00-02:00", NULL, NULL, hItem);
// 		for (j = 0; j < 3; ++j)
// 		{
// 			m_tree_ctrl.InsertItem("201302020104-cam", NULL, NULL, hSubItem);
// 		}
// 	}
// 
// 	HTREEITEM hItem1 = m_tree_ctrl.InsertItem("CAM:0x0001", NULL, NULL);
// 	for (i = 0; i < 4; ++i)
// 	{
// 		HTREEITEM hSubItem1 = m_tree_ctrl.InsertItem("00:00-02:00", NULL, NULL, hItem1);
// 		for (j = 0; j < 3; ++j)
// 		{
// 			m_tree_ctrl.InsertItem("201302020104-cam", NULL, NULL, hSubItem1);
// 		}
// 	}
	return TRUE;  // return TRUE unless you set the focus to a control
	// �쳣: OCX ����ҳӦ���� FALSE
}

void CRevCtrl::OnBnClickedBtnOpen()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	
}
