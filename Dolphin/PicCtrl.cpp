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


// ��ʱ��ؼ������ı�ʱ

void CPicCtrl::OnDtnDatetimechangeDatePic(NMHDR *pNMHDR, LRESULT *pResult)
{
	LPNMDATETIMECHANGE pDTChange = reinterpret_cast<LPNMDATETIMECHANGE>(pNMHDR);
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	*pResult = 0;
	
}

BOOL CPicCtrl::OnInitDialog()
{
	CDialog::OnInitDialog();

	// TODO:  �ڴ���Ӷ���ĳ�ʼ��
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
	// �쳣: OCX ����ҳӦ���� FALSE
}

void CPicCtrl::OnNMDblclkTreePic(NMHDR *pNMHDR, LRESULT *pResult)
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	
	*pResult = 0;
}

void CPicCtrl::OnBnClickedBtnOpen()
{

	CString strFilter;
	CSimpleArray<GUID> aguidFileTypes;
	HRESULT hResult;

	// ��ȡCImage֧�ֵ�ͼ���ļ��Ĺ����ַ���
	hResult = m_mfc_image.GetExporterFilterString(strFilter, aguidFileTypes, _T("All Image Files"));
	if (FAILED(hResult))
	{
		MessageBox("GetExporterFilter����ʧ��");
		return;
	}
	CFileDialog dlg(TRUE, NULL, NULL, OFN_FILEMUSTEXIST, strFilter);
	if (IDOK != dlg.DoModal())
	{	
		return;
	}
	MessageBox(dlg.GetPathName());
	// ���ⲿͼ���ļ�װ�ص�CImage������
	hResult = m_mfc_image.Load(dlg.GetFileName());
	if (FAILED(hResult))
	{
		MessageBox("����ͼ��ʧ��!");
		return;
	}

	// ���������ڱ���������
	CString str;
	str.LoadString(AFX_IDS_APP_TITLE);
	AfxGetMainWnd()->SetWindowText(str + "-" + dlg.GetFileName());
	Invalidate();

/*
	m_mfc_image.Load("D:\\QJpicture\\10.52.185.248_20131216171301.jpg");  // ����ͼƬ
	int cx = m_mfc_image.GetWidth();  // ��ȡͼƬ���
	int cy = m_mfc_image.GetHeight(); // ��ȡͼƬ�߶�

	GetDlgItem(IDC_STC_PIC)->GetWindowRect(&m_mfc_rect); // �����ھ���ѡ�е�picture�ؼ���
	ScreenToClient(&m_mfc_rect);  // ���ͻ���ѡ�е�picture�ؼ�������
	//GetDlgItem(IDC_STC_PIC)->MoveWindow(m_mfc_rect.left, m_mfc_rect.top, cx, cy, TRUE);  // �������ƶ���picture�ؼ���ʾ�ľ�������

	CWnd *pWnd = GetDlgItem(IDC_STC_PIC);  //��ȡpicture�ؼ����ڵľ��

	pWnd->GetClientRect(&m_mfc_rect);  // ���picture�ؼ����ڵľ�������

	CDC *pDC = pWnd->GetDC();  // ���picture�ؼ���ʾ�ľ�������
	
	m_mfc_image.Draw(pDC->m_hDC, m_mfc_rect); // ��ͼƬ����picturl�ؼ���ʾ�ľ�������

	ReleaseDC(pDC);  // �ͷ�picture�ؼ���DC
*/

}

void CPicCtrl::OnPaint()
{
	CPaintDC dc(this); // device context for painting
	// TODO: �ڴ˴������Ϣ����������
	// ��Ϊ��ͼ��Ϣ���� CDialog::OnPaint()
}

void CPicCtrl::OnSize(UINT nType, int cx, int cy)
{
	CDialog::OnSize(nType, cx, cy);

	// TODO: �ڴ˴������Ϣ����������	
}
