#pragma once
#include "global_func_var.h"
class CRoleObj
{
public:
	CRoleObj();
	~CRoleObj();

	CRoleObj * init();
	void Print_allarg();
private:
	//人物属性数据
	char* szpRoleName; //人物名字
	DWORD ndLevel; //人物等级
	DWORD ndCurHp; //当前hp
	DWORD ndCurMp; 
	DWORD ndCurAngry;
	DWORD ndMaxHp;
	DWORD ndMaxMp;
	DWORD ndMaxAngry;
	QWORD nqCurExp;
	QWORD ndMaxExp;
	DWORD ndCurLilian; //当前历练
};

