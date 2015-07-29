// C_Main_Data_dlg.cpp : 实现文件
//

#include "stdafx.h"
#include "MFC_Data.h"
#include "C_Main_Data_dlg.h"
#include "afxdialogex.h"
#include "global_func_var.h"
#include "RoleObj.h"

// C_Main_Data_dlg 对话框

IMPLEMENT_DYNAMIC(C_Main_Data_dlg, CDialogEx)

C_Main_Data_dlg::C_Main_Data_dlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(C_Main_Data_dlg::IDD, pParent)
{

}

C_Main_Data_dlg::~C_Main_Data_dlg()
{
}

void C_Main_Data_dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(C_Main_Data_dlg, CDialogEx)
	ON_BN_CLICKED(IDC_BTN_TEST, &C_Main_Data_dlg::OnBnClickedBtnTest)
END_MESSAGE_MAP()


// C_Main_Data_dlg 消息处理程序


void C_Main_Data_dlg::OnBnClickedBtnTest()
{
	// TODO:  在此添加控件通知处理程序代码

	CRoleObj *pRoleobj = new CRoleObj;
	pRoleobj->init()->Print_allarg();
	delete pRoleobj;

	DbgPrint_String("消息进入到调试函数测试按钮");

}
