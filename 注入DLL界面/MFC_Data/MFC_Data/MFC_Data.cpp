// MFC_Data.cpp : 定义 DLL 的初始化例程。
//

#include "stdafx.h"
#include "MFC_Data.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

//
//TODO:  如果此 DLL 相对于 MFC DLL 是动态链接的，
//		则从此 DLL 导出的任何调入
//		MFC 的函数必须将 AFX_MANAGE_STATE 宏添加到
//		该函数的最前面。
//
//		例如: 
//
//		extern "C" BOOL PASCAL EXPORT ExportedFunction()
//		{
//			AFX_MANAGE_STATE(AfxGetStaticModuleState());
//			// 此处为普通函数体
//		}
//
//		此宏先于任何 MFC 调用
//		出现在每个函数中十分重要。  这意味着
//		它必须作为函数中的第一个语句
//		出现，甚至先于所有对象变量声明，
//		这是因为它们的构造函数可能生成 MFC
//		DLL 调用。
//
//		有关其他详细信息，
//		请参阅 MFC 技术说明 33 和 58。
//

// CMFC_DataApp

BEGIN_MESSAGE_MAP(CMFC_DataApp, CWinApp)
END_MESSAGE_MAP()


// CMFC_DataApp 构造

CMFC_DataApp::CMFC_DataApp()
{
	// TODO:  在此处添加构造代码，
	// 将所有重要的初始化放置在 InitInstance 中

	//p_maindataDlg = nullptr;
}


// 唯一的一个 CMFC_DataApp 对象

CMFC_DataApp theApp;


// CMFC_DataApp 初始化

BOOL CMFC_DataApp::InitInstance()
{
	CWinApp::InitInstance();


	//完成主界面的加载
	init();

	return TRUE;
}


//回调函数
C_Main_Data_dlg *p_maindataDlg = nullptr;
DWORD WINAPI gamemain_dlg(LPVOID lpaRam){
	p_maindataDlg = new C_Main_Data_dlg;
	
	p_maindataDlg->DoModal();

	delete p_maindataDlg;
	FreeLibraryAndExitThread(theApp.m_hInstance, 1);

	return TRUE;
}



void  CMFC_DataApp::init(){

	::CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)gamemain_dlg, NULL, NULL, NULL);
	
}