// MainInject.cpp : 实现文件
//

#include "stdafx.h"
#include "MFC_InjectDLL.h"
#include "MainInject.h"
#include "afxdialogex.h"


// MainInject 对话框

IMPLEMENT_DYNAMIC(MainInject, CDialogEx)

MainInject::MainInject(CWnd* pParent /*=NULL*/)
	: CDialogEx(MainInject::IDD, pParent)
	, m_staticlog(_T(""))
{

}

MainInject::~MainInject()
{
}

void MainInject::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_STATIC_LOG, m_staticlog);
}


BEGIN_MESSAGE_MAP(MainInject, CDialogEx)
	ON_BN_CLICKED(IDC_BTN_INJECT, &MainInject::OnBnClickedBtnInject)
	ON_BN_CLICKED(IDC_BTN_UNINJECT, &MainInject::OnBnClickedBtnUninject)
END_MESSAGE_MAP()


// MainInject 消息处理程序


void MainInject::OnBnClickedBtnInject()
{
	// TODO:  在此添加控件通知处理程序代码

	CFileDialog cdlg(true);

	CString filePathName;

	if (cdlg.DoModal() == IDOK){
		filePathName = cdlg.GetPathName();

		m_hmodule= LoadLibrary(filePathName);
		m_staticlog = filePathName;
	}

	//ShowWindow(SW_HIDE);


	this->ShowWindow(SW_HIDE);


	UpdateData(FALSE);
}


void MainInject::OnBnClickedBtnUninject()
{
	// TODO:  在此添加控件通知处理程序代码

	FreeLibrary(m_hmodule);
}
