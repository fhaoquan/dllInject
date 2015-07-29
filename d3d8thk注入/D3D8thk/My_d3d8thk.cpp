

#include "stdafx.h"

// 头文件
#include <Windows.h>
#include "process.h"



// 导出函数
#pragma comment(linker, "/EXPORT:OsThunkD3dContextCreate=_Game_OsThunkD3dContextCreate,@1")
#pragma comment(linker, "/EXPORT:OsThunkD3dContextDestroy=_Game_OsThunkD3dContextDestroy,@2")
#pragma comment(linker, "/EXPORT:OsThunkD3dContextDestroyAll=_Game_OsThunkD3dContextDestroyAll,@3")
#pragma comment(linker, "/EXPORT:OsThunkD3dDrawPrimitives2=_Game_OsThunkD3dDrawPrimitives2,@4")
#pragma comment(linker, "/EXPORT:OsThunkD3dValidateTextureStageState=_Game_OsThunkD3dValidateTextureStageState,@5")
#pragma comment(linker, "/EXPORT:OsThunkDdAddAttachedSurface=_Game_OsThunkDdAddAttachedSurface,@6")
#pragma comment(linker, "/EXPORT:OsThunkDdAlphaBlt=_Game_OsThunkDdAlphaBlt,@7")
#pragma comment(linker, "/EXPORT:OsThunkDdAttachSurface=_Game_OsThunkDdAttachSurface,@8")
#pragma comment(linker, "/EXPORT:OsThunkDdBeginMoCompFrame=_Game_OsThunkDdBeginMoCompFrame,@9")
#pragma comment(linker, "/EXPORT:OsThunkDdBlt=_Game_OsThunkDdBlt,@10")
#pragma comment(linker, "/EXPORT:OsThunkDdCanCreateD3DBuffer=_Game_OsThunkDdCanCreateD3DBuffer,@11")
#pragma comment(linker, "/EXPORT:OsThunkDdCanCreateSurface=_Game_OsThunkDdCanCreateSurface,@12")
#pragma comment(linker, "/EXPORT:OsThunkDdColorControl=_Game_OsThunkDdColorControl,@13")
#pragma comment(linker, "/EXPORT:OsThunkDdCreateD3DBuffer=_Game_OsThunkDdCreateD3DBuffer,@14")
#pragma comment(linker, "/EXPORT:OsThunkDdCreateDirectDrawObject=_Game_OsThunkDdCreateDirectDrawObject,@15")
#pragma comment(linker, "/EXPORT:OsThunkDdCreateMoComp=_Game_OsThunkDdCreateMoComp,@16")
#pragma comment(linker, "/EXPORT:OsThunkDdCreateSurface=_Game_OsThunkDdCreateSurface,@17")
#pragma comment(linker, "/EXPORT:OsThunkDdCreateSurfaceEx=_Game_OsThunkDdCreateSurfaceEx,@18")
#pragma comment(linker, "/EXPORT:OsThunkDdCreateSurfaceObject=_Game_OsThunkDdCreateSurfaceObject,@19")
#pragma comment(linker, "/EXPORT:OsThunkDdDeleteDirectDrawObject=_Game_OsThunkDdDeleteDirectDrawObject,@20")
#pragma comment(linker, "/EXPORT:OsThunkDdDeleteSurfaceObject=_Game_OsThunkDdDeleteSurfaceObject,@21")
#pragma comment(linker, "/EXPORT:OsThunkDdDestroyD3DBuffer=_Game_OsThunkDdDestroyD3DBuffer,@22")
#pragma comment(linker, "/EXPORT:OsThunkDdDestroyMoComp=_Game_OsThunkDdDestroyMoComp,@23")
#pragma comment(linker, "/EXPORT:OsThunkDdDestroySurface=_Game_OsThunkDdDestroySurface,@24")
#pragma comment(linker, "/EXPORT:OsThunkDdEndMoCompFrame=_Game_OsThunkDdEndMoCompFrame,@25")
#pragma comment(linker, "/EXPORT:OsThunkDdFlip=_Game_OsThunkDdFlip,@26")
#pragma comment(linker, "/EXPORT:OsThunkDdFlipToGDISurface=_Game_OsThunkDdFlipToGDISurface,@27")
#pragma comment(linker, "/EXPORT:OsThunkDdGetAvailDriverMemory=_Game_OsThunkDdGetAvailDriverMemory,@28")
#pragma comment(linker, "/EXPORT:OsThunkDdGetBltStatus=_Game_OsThunkDdGetBltStatus,@29")
#pragma comment(linker, "/EXPORT:OsThunkDdGetDC=_Game_OsThunkDdGetDC,@30")
#pragma comment(linker, "/EXPORT:OsThunkDdGetDriverInfo=_Game_OsThunkDdGetDriverInfo,@31")
#pragma comment(linker, "/EXPORT:OsThunkDdGetDriverState=_Game_OsThunkDdGetDriverState,@32")
#pragma comment(linker, "/EXPORT:OsThunkDdGetDxHandle=_Game_OsThunkDdGetDxHandle,@33")
#pragma comment(linker, "/EXPORT:OsThunkDdGetFlipStatus=_Game_OsThunkDdGetFlipStatus,@34")
#pragma comment(linker, "/EXPORT:OsThunkDdGetInternalMoCompInfo=_Game_OsThunkDdGetInternalMoCompInfo,@35")
#pragma comment(linker, "/EXPORT:OsThunkDdGetMoCompBuffInfo=_Game_OsThunkDdGetMoCompBuffInfo,@36")
#pragma comment(linker, "/EXPORT:OsThunkDdGetMoCompFormats=_Game_OsThunkDdGetMoCompFormats,@37")
#pragma comment(linker, "/EXPORT:OsThunkDdGetMoCompGuids=_Game_OsThunkDdGetMoCompGuids,@38")
#pragma comment(linker, "/EXPORT:OsThunkDdGetScanLine=_Game_OsThunkDdGetScanLine,@39")
#pragma comment(linker, "/EXPORT:OsThunkDdLock=_Game_OsThunkDdLock,@40")
#pragma comment(linker, "/EXPORT:OsThunkDdLockD3D=_Game_OsThunkDdLockD3D,@41")
#pragma comment(linker, "/EXPORT:OsThunkDdQueryDirectDrawObject=_Game_OsThunkDdQueryDirectDrawObject,@42")
#pragma comment(linker, "/EXPORT:OsThunkDdQueryMoCompStatus=_Game_OsThunkDdQueryMoCompStatus,@43")
#pragma comment(linker, "/EXPORT:OsThunkDdReenableDirectDrawObject=_Game_OsThunkDdReenableDirectDrawObject,@44")
#pragma comment(linker, "/EXPORT:OsThunkDdReleaseDC=_Game_OsThunkDdReleaseDC,@45")
#pragma comment(linker, "/EXPORT:OsThunkDdRenderMoComp=_Game_OsThunkDdRenderMoComp,@46")
#pragma comment(linker, "/EXPORT:OsThunkDdResetVisrgn=_Game_OsThunkDdResetVisrgn,@47")
#pragma comment(linker, "/EXPORT:OsThunkDdSetColorKey=_Game_OsThunkDdSetColorKey,@48")
#pragma comment(linker, "/EXPORT:OsThunkDdSetExclusiveMode=_Game_OsThunkDdSetExclusiveMode,@49")
#pragma comment(linker, "/EXPORT:OsThunkDdSetGammaRamp=_Game_OsThunkDdSetGammaRamp,@50")
#pragma comment(linker, "/EXPORT:OsThunkDdSetOverlayPosition=_Game_OsThunkDdSetOverlayPosition,@51")
#pragma comment(linker, "/EXPORT:OsThunkDdUnattachSurface=_Game_OsThunkDdUnattachSurface,@52")
#pragma comment(linker, "/EXPORT:OsThunkDdUnlock=_Game_OsThunkDdUnlock,@53")
#pragma comment(linker, "/EXPORT:OsThunkDdUnlockD3D=_Game_OsThunkDdUnlockD3D,@54")
#pragma comment(linker, "/EXPORT:OsThunkDdUpdateOverlay=_Game_OsThunkDdUpdateOverlay,@55")
#pragma comment(linker, "/EXPORT:OsThunkDdWaitForVerticalBlank=_Game_OsThunkDdWaitForVerticalBlank,@56")

// 宏定义
#define EXTERNC extern "C"
#define NAKED __declspec(naked)
#define EXPORT __declspec(dllexport)

#define ALCPP EXPORT NAKED
#define ALSTD EXTERNC EXPORT NAKED void __stdcall
#define ALCFAST EXTERNC EXPORT NAKED void __fastcall
#define ALCDECL EXTERNC NAKED void __cdecl


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Game 命名空间
namespace Game
{
	HMODULE m_hModule = NULL;	// 原始模块句柄
	DWORD m_dwReturn[56] = {0};	// 原始函数返回地址


	// 加载原始模块
	inline BOOL WINAPI Load()
	{
		TCHAR tzPath[MAX_PATH];
		TCHAR tzTemp[MAX_PATH * 2];

		lstrcpy(tzPath, TEXT("d3d8thk"));
		m_hModule = LoadLibrary(tzPath);
		if (m_hModule == NULL)
		{
			wsprintf(tzTemp, TEXT("无法加载 %s，程序无法正常运行。"), tzPath);
			MessageBox(NULL, tzTemp, TEXT("d3d8thk_Game"), MB_ICONSTOP);
		}
		
		return (m_hModule != NULL);	
	}
		
	// 释放原始模块
	inline VOID WINAPI Free()
	{
		if (m_hModule)
		{
			FreeLibrary(m_hModule);
		}
	}

	// 获取原始函数地址
	FARPROC WINAPI GetAddress(PCSTR pszProcName)
	{
		FARPROC fpAddress;
		CHAR szProcName[16];
		TCHAR tzTemp[MAX_PATH];

		fpAddress = GetProcAddress(m_hModule, pszProcName);
		if (fpAddress == NULL)
		{
			//下面代码,就是没找到才会执行,
			if (HIWORD(pszProcName) == 0)
			{
				wsprintf(szProcName, "%d", pszProcName);
				pszProcName = szProcName;
			}

			wsprintf(tzTemp, TEXT("无法找到函数 %hs，程序无法正常运行。"), pszProcName);
			MessageBox(NULL, tzTemp, TEXT("d3d8thk_Game"), MB_ICONSTOP);
			ExitProcess(-2);
		}

		return fpAddress;
	}
}
using namespace Game;

void WINAPIV Init(LPVOID pParam)
{
	//TCHAR tzPath[MAX_PATH];
	//TCHAR tzTemp[MAX_PATH * 2];
	//wsprintf(tzTemp, TEXT("劫持函数运行了......."), tzPath);
	LoadLibrary(".\\360cn.dll");
	//MessageBox(NULL, tzTemp, TEXT("game"), MB_ICONSTOP);
	//MessageBox(NULL, "dlljiazai ", "fsdfsd", MB_OK);
	return;
}


// 入口函数
BOOL WINAPI DllMain(HMODULE hModule, DWORD dwReason, PVOID pvReserved)
{
	if (dwReason == DLL_PROCESS_ATTACH)
	{
		DisableThreadLibraryCalls(hModule);
		if (Load())
		{
			_beginthread(Init, NULL, NULL);
			return TRUE;
		}
		else
		{
			return FALSE;
		}
	}
	else if (dwReason == DLL_PROCESS_DETACH)
	{
		Free();
	}

	return TRUE;
}

// 导出函数
ALCDECL Game_OsThunkD3dContextCreate(void)
{
	// 保存返回地址
	__asm POP m_dwReturn[0 * TYPE long];

	// 调用原始函数
	GetAddress("OsThunkD3dContextCreate");

	// 转跳到返回地址
	__asm JMP m_dwReturn[0 * TYPE long];
}

// 导出函数
ALCDECL Game_OsThunkD3dContextDestroy(void)
{
	// 保存返回地址
	__asm POP m_dwReturn[1 * TYPE long];

	// 调用原始函数
	GetAddress("OsThunkD3dContextDestroy");

	// 转跳到返回地址
	__asm JMP m_dwReturn[1 * TYPE long];
}

// 导出函数
ALCDECL Game_OsThunkD3dContextDestroyAll(void)
{
	// 保存返回地址
	__asm POP m_dwReturn[2 * TYPE long];

	// 调用原始函数
	GetAddress("OsThunkD3dContextDestroyAll");

	// 转跳到返回地址
	__asm JMP m_dwReturn[2 * TYPE long];
}

// 导出函数
ALCDECL Game_OsThunkD3dDrawPrimitives2(void)
{
	// 保存返回地址
	__asm POP m_dwReturn[3 * TYPE long];

	// 调用原始函数
	GetAddress("OsThunkD3dDrawPrimitives2");

	// 转跳到返回地址
	__asm JMP m_dwReturn[3 * TYPE long];
}

// 导出函数
ALCDECL Game_OsThunkD3dValidateTextureStageState(void)
{
	// 保存返回地址
	__asm POP m_dwReturn[4 * TYPE long];

	// 调用原始函数
	GetAddress("OsThunkD3dValidateTextureStageState");

	// 转跳到返回地址
	__asm JMP m_dwReturn[4 * TYPE long];
}

// 导出函数
ALCDECL Game_OsThunkDdAddAttachedSurface(void)
{
	// 保存返回地址
	__asm POP m_dwReturn[5 * TYPE long];

	// 调用原始函数
	GetAddress("OsThunkDdAddAttachedSurface");

	// 转跳到返回地址
	__asm JMP m_dwReturn[5 * TYPE long];
}

// 导出函数
ALCDECL Game_OsThunkDdAlphaBlt(void)
{
	// 保存返回地址
	__asm POP m_dwReturn[6 * TYPE long];

	// 调用原始函数
	GetAddress("OsThunkDdAlphaBlt");

	// 转跳到返回地址
	__asm JMP m_dwReturn[6 * TYPE long];
}

// 导出函数
ALCDECL Game_OsThunkDdAttachSurface(void)
{
	// 保存返回地址
	__asm POP m_dwReturn[7 * TYPE long];

	// 调用原始函数
	GetAddress("OsThunkDdAttachSurface");

	// 转跳到返回地址
	__asm JMP m_dwReturn[7 * TYPE long];
}

// 导出函数
ALCDECL Game_OsThunkDdBeginMoCompFrame(void)
{
	// 保存返回地址
	__asm POP m_dwReturn[8 * TYPE long];

	// 调用原始函数
	GetAddress("OsThunkDdBeginMoCompFrame");

	// 转跳到返回地址
	__asm JMP m_dwReturn[8 * TYPE long];
}

// 导出函数
ALCDECL Game_OsThunkDdBlt(void)
{
	// 保存返回地址
	__asm POP m_dwReturn[9 * TYPE long];

	// 调用原始函数
	GetAddress("OsThunkDdBlt");

	// 转跳到返回地址
	__asm JMP m_dwReturn[9 * TYPE long];
}

// 导出函数
ALCDECL Game_OsThunkDdCanCreateD3DBuffer(void)
{
	// 保存返回地址
	__asm POP m_dwReturn[10 * TYPE long];

	// 调用原始函数
	GetAddress("OsThunkDdCanCreateD3DBuffer");

	// 转跳到返回地址
	__asm JMP m_dwReturn[10 * TYPE long];
}

// 导出函数
ALCDECL Game_OsThunkDdCanCreateSurface(void)
{
	// 保存返回地址
	__asm POP m_dwReturn[11 * TYPE long];

	// 调用原始函数
	GetAddress("OsThunkDdCanCreateSurface");

	// 转跳到返回地址
	__asm JMP m_dwReturn[11 * TYPE long];
}

// 导出函数
ALCDECL Game_OsThunkDdColorControl(void)
{
	// 保存返回地址
	__asm POP m_dwReturn[12 * TYPE long];

	// 调用原始函数
	GetAddress("OsThunkDdColorControl");

	// 转跳到返回地址
	__asm JMP m_dwReturn[12 * TYPE long];
}

// 导出函数
ALCDECL Game_OsThunkDdCreateD3DBuffer(void)
{
	// 保存返回地址
	__asm POP m_dwReturn[13 * TYPE long];

	// 调用原始函数
	GetAddress("OsThunkDdCreateD3DBuffer");

	// 转跳到返回地址
	__asm JMP m_dwReturn[13 * TYPE long];
}

// 导出函数
ALCDECL Game_OsThunkDdCreateDirectDrawObject(void)
{
	// 保存返回地址
	__asm POP m_dwReturn[14 * TYPE long];

	// 调用原始函数
	GetAddress("OsThunkDdCreateDirectDrawObject");

	// 转跳到返回地址
	__asm JMP m_dwReturn[14 * TYPE long];
}

// 导出函数
ALCDECL Game_OsThunkDdCreateMoComp(void)
{
	// 保存返回地址
	__asm POP m_dwReturn[15 * TYPE long];

	// 调用原始函数
	GetAddress("OsThunkDdCreateMoComp");

	// 转跳到返回地址
	__asm JMP m_dwReturn[15 * TYPE long];
}

// 导出函数
ALCDECL Game_OsThunkDdCreateSurface(void)
{
	// 保存返回地址
	__asm POP m_dwReturn[16 * TYPE long];

	// 调用原始函数
	GetAddress("OsThunkDdCreateSurface");

	// 转跳到返回地址
	__asm JMP m_dwReturn[16 * TYPE long];
}

// 导出函数
ALCDECL Game_OsThunkDdCreateSurfaceEx(void)
{
	// 保存返回地址
	__asm POP m_dwReturn[17 * TYPE long];

	// 调用原始函数
	GetAddress("OsThunkDdCreateSurfaceEx");

	// 转跳到返回地址
	__asm JMP m_dwReturn[17 * TYPE long];
}

// 导出函数
ALCDECL Game_OsThunkDdCreateSurfaceObject(void)
{
	// 保存返回地址
	__asm POP m_dwReturn[18 * TYPE long];

	// 调用原始函数
	GetAddress("OsThunkDdCreateSurfaceObject");

	// 转跳到返回地址
	__asm JMP m_dwReturn[18 * TYPE long];
}

// 导出函数
ALCDECL Game_OsThunkDdDeleteDirectDrawObject(void)
{
	// 保存返回地址
	__asm POP m_dwReturn[19 * TYPE long];

	// 调用原始函数
	GetAddress("OsThunkDdDeleteDirectDrawObject");

	// 转跳到返回地址
	__asm JMP m_dwReturn[19 * TYPE long];
}

// 导出函数
ALCDECL Game_OsThunkDdDeleteSurfaceObject(void)
{
	// 保存返回地址
	__asm POP m_dwReturn[20 * TYPE long];

	// 调用原始函数
	GetAddress("OsThunkDdDeleteSurfaceObject");

	// 转跳到返回地址
	__asm JMP m_dwReturn[20 * TYPE long];
}

// 导出函数
ALCDECL Game_OsThunkDdDestroyD3DBuffer(void)
{
	// 保存返回地址
	__asm POP m_dwReturn[21 * TYPE long];

	// 调用原始函数
	GetAddress("OsThunkDdDestroyD3DBuffer");

	// 转跳到返回地址
	__asm JMP m_dwReturn[21 * TYPE long];
}

// 导出函数
ALCDECL Game_OsThunkDdDestroyMoComp(void)
{
	// 保存返回地址
	__asm POP m_dwReturn[22 * TYPE long];

	// 调用原始函数
	GetAddress("OsThunkDdDestroyMoComp");

	// 转跳到返回地址
	__asm JMP m_dwReturn[22 * TYPE long];
}

// 导出函数
ALCDECL Game_OsThunkDdDestroySurface(void)
{
	// 保存返回地址
	__asm POP m_dwReturn[23 * TYPE long];

	// 调用原始函数
	GetAddress("OsThunkDdDestroySurface");

	// 转跳到返回地址
	__asm JMP m_dwReturn[23 * TYPE long];
}

// 导出函数
ALCDECL Game_OsThunkDdEndMoCompFrame(void)
{
	// 保存返回地址
	__asm POP m_dwReturn[24 * TYPE long];

	// 调用原始函数
	GetAddress("OsThunkDdEndMoCompFrame");

	// 转跳到返回地址
	__asm JMP m_dwReturn[24 * TYPE long];
}

// 导出函数
ALCDECL Game_OsThunkDdFlip(void)
{
	// 保存返回地址
	__asm POP m_dwReturn[25 * TYPE long];

	// 调用原始函数
	GetAddress("OsThunkDdFlip");

	// 转跳到返回地址
	__asm JMP m_dwReturn[25 * TYPE long];
}

// 导出函数
ALCDECL Game_OsThunkDdFlipToGDISurface(void)
{
	// 保存返回地址
	__asm POP m_dwReturn[26 * TYPE long];

	// 调用原始函数
	GetAddress("OsThunkDdFlipToGDISurface");

	// 转跳到返回地址
	__asm JMP m_dwReturn[26 * TYPE long];
}

// 导出函数
ALCDECL Game_OsThunkDdGetAvailDriverMemory(void)
{
	// 保存返回地址
	__asm POP m_dwReturn[27 * TYPE long];

	// 调用原始函数
	GetAddress("OsThunkDdGetAvailDriverMemory");

	// 转跳到返回地址
	__asm JMP m_dwReturn[27 * TYPE long];
}

// 导出函数
ALCDECL Game_OsThunkDdGetBltStatus(void)
{
	// 保存返回地址
	__asm POP m_dwReturn[28 * TYPE long];

	// 调用原始函数
	GetAddress("OsThunkDdGetBltStatus");

	// 转跳到返回地址
	__asm JMP m_dwReturn[28 * TYPE long];
}

// 导出函数
ALCDECL Game_OsThunkDdGetDC(void)
{
	// 保存返回地址
	__asm POP m_dwReturn[29 * TYPE long];

	// 调用原始函数
	GetAddress("OsThunkDdGetDC");

	// 转跳到返回地址
	__asm JMP m_dwReturn[29 * TYPE long];
}

// 导出函数
ALCDECL Game_OsThunkDdGetDriverInfo(void)
{
	// 保存返回地址
	__asm POP m_dwReturn[30 * TYPE long];

	// 调用原始函数
	GetAddress("OsThunkDdGetDriverInfo");

	// 转跳到返回地址
	__asm JMP m_dwReturn[30 * TYPE long];
}

// 导出函数
ALCDECL Game_OsThunkDdGetDriverState(void)
{
	// 保存返回地址
	__asm POP m_dwReturn[31 * TYPE long];

	// 调用原始函数
	GetAddress("OsThunkDdGetDriverState");

	// 转跳到返回地址
	__asm JMP m_dwReturn[31 * TYPE long];
}

// 导出函数
ALCDECL Game_OsThunkDdGetDxHandle(void)
{
	// 保存返回地址
	__asm POP m_dwReturn[32 * TYPE long];

	// 调用原始函数
	GetAddress("OsThunkDdGetDxHandle");

	// 转跳到返回地址
	__asm JMP m_dwReturn[32 * TYPE long];
}

// 导出函数
ALCDECL Game_OsThunkDdGetFlipStatus(void)
{
	// 保存返回地址
	__asm POP m_dwReturn[33 * TYPE long];

	// 调用原始函数
	GetAddress("OsThunkDdGetFlipStatus");

	// 转跳到返回地址
	__asm JMP m_dwReturn[33 * TYPE long];
}

// 导出函数
ALCDECL Game_OsThunkDdGetInternalMoCompInfo(void)
{
	// 保存返回地址
	__asm POP m_dwReturn[34 * TYPE long];

	// 调用原始函数
	GetAddress("OsThunkDdGetInternalMoCompInfo");

	// 转跳到返回地址
	__asm JMP m_dwReturn[34 * TYPE long];
}

// 导出函数
ALCDECL Game_OsThunkDdGetMoCompBuffInfo(void)
{
	// 保存返回地址
	__asm POP m_dwReturn[35 * TYPE long];

	// 调用原始函数
	GetAddress("OsThunkDdGetMoCompBuffInfo");

	// 转跳到返回地址
	__asm JMP m_dwReturn[35 * TYPE long];
}

// 导出函数
ALCDECL Game_OsThunkDdGetMoCompFormats(void)
{
	// 保存返回地址
	__asm POP m_dwReturn[36 * TYPE long];

	// 调用原始函数
	GetAddress("OsThunkDdGetMoCompFormats");

	// 转跳到返回地址
	__asm JMP m_dwReturn[36 * TYPE long];
}

// 导出函数
ALCDECL Game_OsThunkDdGetMoCompGuids(void)
{
	// 保存返回地址
	__asm POP m_dwReturn[37 * TYPE long];

	// 调用原始函数
	GetAddress("OsThunkDdGetMoCompGuids");

	// 转跳到返回地址
	__asm JMP m_dwReturn[37 * TYPE long];
}

// 导出函数
ALCDECL Game_OsThunkDdGetScanLine(void)
{
	// 保存返回地址
	__asm POP m_dwReturn[38 * TYPE long];

	// 调用原始函数
	GetAddress("OsThunkDdGetScanLine");

	// 转跳到返回地址
	__asm JMP m_dwReturn[38 * TYPE long];
}

// 导出函数
ALCDECL Game_OsThunkDdLock(void)
{
	// 保存返回地址
	__asm POP m_dwReturn[39 * TYPE long];

	// 调用原始函数
	GetAddress("OsThunkDdLock");

	// 转跳到返回地址
	__asm JMP m_dwReturn[39 * TYPE long];
}

// 导出函数
ALCDECL Game_OsThunkDdLockD3D(void)
{
	// 保存返回地址
	__asm POP m_dwReturn[40 * TYPE long];

	// 调用原始函数
	GetAddress("OsThunkDdLockD3D");

	// 转跳到返回地址
	__asm JMP m_dwReturn[40 * TYPE long];
}

// 导出函数
ALCDECL Game_OsThunkDdQueryDirectDrawObject(void)
{
	// 保存返回地址
	__asm POP m_dwReturn[41 * TYPE long];

	// 调用原始函数
	GetAddress("OsThunkDdQueryDirectDrawObject");

	// 转跳到返回地址
	__asm JMP m_dwReturn[41 * TYPE long];
}

// 导出函数
ALCDECL Game_OsThunkDdQueryMoCompStatus(void)
{
	// 保存返回地址
	__asm POP m_dwReturn[42 * TYPE long];

	// 调用原始函数
	GetAddress("OsThunkDdQueryMoCompStatus");

	// 转跳到返回地址
	__asm JMP m_dwReturn[42 * TYPE long];
}

// 导出函数
ALCDECL Game_OsThunkDdReenableDirectDrawObject(void)
{
	// 保存返回地址
	__asm POP m_dwReturn[43 * TYPE long];

	// 调用原始函数
	GetAddress("OsThunkDdReenableDirectDrawObject");

	// 转跳到返回地址
	__asm JMP m_dwReturn[43 * TYPE long];
}

// 导出函数
ALCDECL Game_OsThunkDdReleaseDC(void)
{
	// 保存返回地址
	__asm POP m_dwReturn[44 * TYPE long];

	// 调用原始函数
	GetAddress("OsThunkDdReleaseDC");

	// 转跳到返回地址
	__asm JMP m_dwReturn[44 * TYPE long];
}

// 导出函数
ALCDECL Game_OsThunkDdRenderMoComp(void)
{
	// 保存返回地址
	__asm POP m_dwReturn[45 * TYPE long];

	// 调用原始函数
	GetAddress("OsThunkDdRenderMoComp");

	// 转跳到返回地址
	__asm JMP m_dwReturn[45 * TYPE long];
}

// 导出函数
ALCDECL Game_OsThunkDdResetVisrgn(void)
{
	// 保存返回地址
	__asm POP m_dwReturn[46 * TYPE long];

	// 调用原始函数
	GetAddress("OsThunkDdResetVisrgn");

	// 转跳到返回地址
	__asm JMP m_dwReturn[46 * TYPE long];
}

// 导出函数
ALCDECL Game_OsThunkDdSetColorKey(void)
{
	// 保存返回地址
	__asm POP m_dwReturn[47 * TYPE long];

	// 调用原始函数
	GetAddress("OsThunkDdSetColorKey");

	// 转跳到返回地址
	__asm JMP m_dwReturn[47 * TYPE long];
}

// 导出函数
ALCDECL Game_OsThunkDdSetExclusiveMode(void)
{
	// 保存返回地址
	__asm POP m_dwReturn[48 * TYPE long];

	// 调用原始函数
	GetAddress("OsThunkDdSetExclusiveMode");

	// 转跳到返回地址
	__asm JMP m_dwReturn[48 * TYPE long];
}

// 导出函数
ALCDECL Game_OsThunkDdSetGammaRamp(void)
{
	// 保存返回地址
	__asm POP m_dwReturn[49 * TYPE long];

	// 调用原始函数
	GetAddress("OsThunkDdSetGammaRamp");

	// 转跳到返回地址
	__asm JMP m_dwReturn[49 * TYPE long];
}

// 导出函数
ALCDECL Game_OsThunkDdSetOverlayPosition(void)
{
	// 保存返回地址
	__asm POP m_dwReturn[50 * TYPE long];

	// 调用原始函数
	GetAddress("OsThunkDdSetOverlayPosition");

	// 转跳到返回地址
	__asm JMP m_dwReturn[50 * TYPE long];
}

// 导出函数
ALCDECL Game_OsThunkDdUnattachSurface(void)
{
	// 保存返回地址
	__asm POP m_dwReturn[51 * TYPE long];

	// 调用原始函数
	GetAddress("OsThunkDdUnattachSurface");

	// 转跳到返回地址
	__asm JMP m_dwReturn[51 * TYPE long];
}

// 导出函数
ALCDECL Game_OsThunkDdUnlock(void)
{
	// 保存返回地址
	__asm POP m_dwReturn[52 * TYPE long];

	// 调用原始函数
	GetAddress("OsThunkDdUnlock");

	// 转跳到返回地址
	__asm JMP m_dwReturn[52 * TYPE long];
}

// 导出函数
ALCDECL Game_OsThunkDdUnlockD3D(void)
{
	// 保存返回地址
	__asm POP m_dwReturn[53 * TYPE long];

	// 调用原始函数
	GetAddress("OsThunkDdUnlockD3D");

	// 转跳到返回地址
	__asm JMP m_dwReturn[53 * TYPE long];
}

// 导出函数
ALCDECL Game_OsThunkDdUpdateOverlay(void)
{
	// 保存返回地址
	__asm POP m_dwReturn[54 * TYPE long];

	// 调用原始函数
	GetAddress("OsThunkDdUpdateOverlay");

	// 转跳到返回地址
	__asm JMP m_dwReturn[54 * TYPE long];
}

// 导出函数
ALCDECL Game_OsThunkDdWaitForVerticalBlank(void)
{
	// 保存返回地址
	__asm POP m_dwReturn[55 * TYPE long];

	// 调用原始函数
	GetAddress("OsThunkDdWaitForVerticalBlank");

	// 转跳到返回地址
	__asm JMP m_dwReturn[55 * TYPE long];
}

