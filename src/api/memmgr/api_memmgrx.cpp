/*!*/ // ----------------------------------------------------------------------------
/*!*/ // Generated by InterfaceFactory [Sun Jan 08 14:25:49 2012]
/*!*/ // 
/*!*/ // File        : api_memmgrx.cpp
/*!*/ // Class       : api_memmgr
/*!*/ // class layer : Dispatchable Receiver
/*!*/ // ----------------------------------------------------------------------------
#include "precomp.h"
/*!*/ 
#include "api_memmgrx.h"
#include "api_memmgri.h"
/*!*/ 
#ifdef CBCLASS
#undef CBCLASS
#endif
/*!*/ 
#define CBCLASS api_memmgrX
/*!*/ START_DISPATCH;
/*!*/   CB(API_MEMMGR_SYSMALLOC, sysMalloc);
/*!*/   VCB(API_MEMMGR_SYSFREE, sysFree);
/*!*/   CB(API_MEMMGR_SYSREALLOC, sysReAlloc);
/*!*/   CB(API_MEMMGR_SYSMEMSET, sysMemSet);
/*!*/   CB(API_MEMMGR_SYSMEMZERO, sysMemZero);
/*!*/ END_DISPATCH;
#undef CBCLASS
/*!*/ 
