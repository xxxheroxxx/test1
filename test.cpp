// test.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	WCHAR buf[20];
	DWORD n = 20;
	GetComputerName(buf, &n);
	_tprintf(_T("ComssssputerName : %s\n"), buf);
	return 0;
}
