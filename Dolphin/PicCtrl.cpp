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
	DDX_Control(pDX, IDC_DATE_PIC, m_date_ctrl);
	DDX_Control(pDX, IDC_TREE_PIC, m_tree_ctrl);
}


BEGIN_MESSAGE_MAP(CPicCtrl, CDialog)
	ON_NOTIFY(DTN_DATETIMECHANGE, IDC_DATE_PIC, &CPicCtrl::OnDtnDatetimechangeDatePic)
	ON_NOTIFY(NM_DBLCLK, IDC_TREE_PIC, &CPicCtrl::OnNMDblclkTreePic)
	ON_BN_CLICKED(IDC_BTN_OPEN, &CPicCtrl::OnBnClickedBtnOpen)
	ON_WM_PAINT()
	ON_WM_SIZE()
END_MESSAGE_MAP()


// 当时间控件发生改变时

void CPicCtrl::OnDtnDatetimechangeDatePic(NMHDR *pNMHDR, LRESULT *pResult)
{
	LPNMDATETIMECHANGE pDTChange = reinterpret_cast<LPNMDATETIMECHANGE>(pNMHDR);
	// TODO: 在此添加控件通知处理程序代码
	*pResult = 0;
	
}

BOOL CPicCtrl::OnInitDialog()
{
	CDialog::OnInitDialog();

	// TODO:  在此添加额外的初始化
	HTREEITEM hItem = m_tree_ctrl.InsertItem("CAM:0x0001", NULL, NULL);
	int i, j;
	for (i = 0; i < 4; ++i)
	{
		HTREEITEM hSubItem = m_tree_ctrl.InsertItem("00:00-02:00", NULL, NULL, hItem);
		for (j = 0; j < 3; ++j)
		{
			m_tree_ctrl.InsertItem("201302020104-cam", NULL, NULL, hSubItem);
		}
	}
	return TRUE;  // return TRUE unless you set the focus to a control
	// 异常: OCX 属性页应返回 FALSE
}

void CPicCtrl::OnNMDblclkTreePic(NMHDR *pNMHDR, LRESULT *pResult)
{
	// TODO: 在此添加控件通知处理程序代码
	
	*pResult = 0;
}

void CPicCtrl::OnBnClickedBtnOpen()
{

	CString strFilter;
	CSimpleArray<GUID> aguidFileTypes;
	HRESULT hResult;

	// 获取CImage支持的图像文件的过滤字符串
	hResult = m_mfc_image.GetExporterFilterString(strFilter, aguidFileTypes, _T("All Image Files"));
	if (FAILED(hResult))
	{
		MessageBox("GetExporterFilter调用失败");
		return;
	}
	CFileDialog dlg(TRUE, NULL, NULL, OFN_FILEMUSTEXIST, strFilter);
	if (IDOK != dlg.DoModal())
	{	
		return;
	}
	MessageBox(dlg.GetPathName());
	// 将外部图像文件装载到CImage对象中
	hResult = m_mfc_image.Load(dlg.GetFileName());
	if (FAILED(hResult))
	{
		MessageBox("调用图像失败!");
		return;
	}

	// 设置主窗口标题栏内容
	CString str;
	str.LoadString(AFX_IDS_APP_TITLE);
	AfxGetMainWnd()->SetWindowText(str + "-" + dlg.GetFileName());
	Invalidate();

/*
	m_mfc_image.Load("D:\\QJpicture\\10.52.185.248_20131216171301.jpg");  // 加载图片
	int cx = m_mfc_image.GetWidth();  // 获取图片宽度
	int cy = m_mfc_image.GetHeight(); // 获取图片高度

	GetDlgItem(IDC_STC_PIC)->GetWindowRect(&m_mfc_rect); // 将窗口矩形选中到picture控件中
	ScreenToClient(&m_mfc_rect);  // 将客户端选中到picture控件区域内
	//GetDlgItem(IDC_STC_PIC)->MoveWindow(m_mfc_rect.left, m_mfc_rect.top, cx, cy, TRUE);  // 将窗口移动到picture控件表示的矩形区域

	CWnd *pWnd = GetDlgItem(IDC_STC_PIC);  //获取picture控件窗口的句柄

	pWnd->GetClientRect(&m_mfc_rect);  // 获得picture控件所在的矩形区域

	CDC *pDC = pWnd->GetDC();  // 获得picture控件表示的矩形区域
	
	m_mfc_image.Draw(pDC->m_hDC, m_mfc_rect); // 将图片画到picturl控件表示的矩形区域

	ReleaseDC(pDC);  // 释放picture控件的DC
*/

}

void CPicCtrl::OnPaint()
{
	CPaintDC dc(this); // device context for painting
	// TODO: 在此处添加消息处理程序代码
	// 不为绘图消息调用 CDialog::OnPaint()
}

void CPicCtrl::OnSize(UINT nType, int cx, int cy)
{
	CDialog::OnSize(nType, cx, cy);

	// TODO: 在此处添加消息处理程序代码	
}
