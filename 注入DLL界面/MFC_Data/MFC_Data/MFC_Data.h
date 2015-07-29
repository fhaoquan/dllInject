// MFC_Data.h : MFC_Data DLL 的主头文件
//

#pragma once
#include "C_Main_Data_dlg.h"

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"		// 主符号


// CMFC_DataApp
// 有关此类实现的信息，请参阅 MFC_Data.cpp
//

class CMFC_DataApp : public CWinApp
{
public:
	CMFC_DataApp();

// 重写
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()


private:

	//C_Main_Data_dlg *p_maindataDlg;

	//DWORD WINAPI gamemain_dlg(LPVOID lpaRam);
	void init();
};
