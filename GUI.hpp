#pragma once

#include <stdarg.h>
#include <stdarg.h>
#include <tchar.h>

class CMainDlgBase
{
public:
	virtual ~CMainDlgBase() { }
	virtual intptr_t operator()(uintptr_t hWndParent) = 0;
	static CMainDlgBase *create();
};

TCHAR const *GetAnyErrorText(unsigned long errorCode, va_list* pArgList = NULL);
