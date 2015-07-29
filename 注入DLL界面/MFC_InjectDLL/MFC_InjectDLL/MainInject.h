#pragma once

#include <windows.h>
// MainInject 对话框

class MainInject : public CDialogEx
{
	DECLARE_DYNAMIC(MainInject)

public:
	MainInject(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~MainInject();

// 对话框数据
	enum { IDD = IDD_DLG_INJECT };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedBtnInject();
	CString m_staticlog;
	HMODULE m_hmodule;
	
	afx_msg void OnBnClickedBtnUninject();
};
