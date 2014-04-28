// stdafx.h : include file for standard system include files,
//  or project specific include files that are used frequently, but
//  are changed infrequently
//

#pragma once

#include <dui/duistd.h>
#include <dui/duihostwnd.h>
#include <dui/duictrls.h>
#include <dui/duiwndnotify.h>
#include <dui/DuiCSS.h>

#include "resource.h"	//win32 id

using namespace DuiEngine;

#ifdef _DEBUG

	# pragma comment(lib, "duiengine-win32-debug-static.lib")

#else

	# pragma comment(lib, "duiengine-win32-release-static.lib")

#endif



