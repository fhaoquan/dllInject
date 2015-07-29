#include "stdafx.h"
#include "global_func_var.h"

#include <windows.h>
#include <stdio.h>

void DbgPrint_String(char* szpFormatName, ...){

#ifdef _DEBUG

	va_list argList;
	char buffer[0x300];
	char szBuffer_Game[0x310] = "Game:";

	va_start(argList, szpFormatName);
	vsprintf_s(buffer, szpFormatName, argList);

	strcat_s(szBuffer_Game, buffer);

	OutputDebugString(szBuffer_Game);

	va_end(argList);


#endif

}