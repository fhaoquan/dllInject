#pragma once

#include "resource.h"
// C_Main_Data_dlg 对话框

class C_Main_Data_dlg : public CDialogEx
{
	DECLARE_DYNAMIC(C_Main_Data_dlg)

public:
	C_Main_Data_dlg(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~C_Main_Data_dlg();

// 对话框数据
	enum { IDD = IDD_DLG_MAIN };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedBtnTest();
};
