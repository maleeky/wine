/*
 * Thread safe wrappers around Xresource calls.
 * This file was generated automatically by tools/make_X11wrappers
 * DO NOT EDIT!
 */

#include <X11/Xlib.h>
#include <X11/Xresource.h>
#include "x11drv.h"
#include "stddebug.h"
#include "debug.h"

XrmQuark  TSXrmUniqueQuark(void)
{
  XrmQuark  r;
  dprintf_x11(stddeb, "Call XrmUniqueQuark\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XrmUniqueQuark();
  LeaveCriticalSection( &X11DRV_CritSection );
  dprintf_x11(stddeb, "Ret XrmUniqueQuark\n");
  return r;
}

int   TSXrmGetResource(XrmDatabase a0, const  char* a1, const  char* a2, char** a3, XrmValue* a4)
{
  int   r;
  dprintf_x11(stddeb, "Call XrmGetResource\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XrmGetResource(a0, a1, a2, a3, a4);
  LeaveCriticalSection( &X11DRV_CritSection );
  dprintf_x11(stddeb, "Ret XrmGetResource\n");
  return r;
}

XrmDatabase  TSXrmGetFileDatabase(const  char* a0)
{
  XrmDatabase  r;
  dprintf_x11(stddeb, "Call XrmGetFileDatabase\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XrmGetFileDatabase(a0);
  LeaveCriticalSection( &X11DRV_CritSection );
  dprintf_x11(stddeb, "Ret XrmGetFileDatabase\n");
  return r;
}

XrmDatabase  TSXrmGetStringDatabase(const  char* a0)
{
  XrmDatabase  r;
  dprintf_x11(stddeb, "Call XrmGetStringDatabase\n");
  EnterCriticalSection( &X11DRV_CritSection );
  r = XrmGetStringDatabase(a0);
  LeaveCriticalSection( &X11DRV_CritSection );
  dprintf_x11(stddeb, "Ret XrmGetStringDatabase\n");
  return r;
}

void  TSXrmMergeDatabases(XrmDatabase a0, XrmDatabase* a1)
{
  dprintf_x11(stddeb, "Call XrmMergeDatabases\n");
  EnterCriticalSection( &X11DRV_CritSection );
  XrmMergeDatabases(a0, a1);
  LeaveCriticalSection( &X11DRV_CritSection );
  dprintf_x11(stddeb, "Ret XrmMergeDatabases\n");
}

void  TSXrmParseCommand(XrmDatabase* a0, XrmOptionDescList a1, int a2, const  char* a3, int* a4, char** a5)
{
  dprintf_x11(stddeb, "Call XrmParseCommand\n");
  EnterCriticalSection( &X11DRV_CritSection );
  XrmParseCommand(a0, a1, a2, a3, a4, a5);
  LeaveCriticalSection( &X11DRV_CritSection );
  dprintf_x11(stddeb, "Ret XrmParseCommand\n");
}
