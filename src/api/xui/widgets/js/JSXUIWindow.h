// ----------------------------------------------------------------------------
// Generated by JSScriptable Factory - DO NOT EDIT
// 
// File        : ../js/JSXUIWindow.h
// Class       : XUIWindow
// class layer : Javascript Dispatcher
// ----------------------------------------------------------------------------

#ifndef JSXUIWINDOW_H
#define JSXUIWINDOW_H

#include <api/js/jsscriptable.h>
#include "../sourcesink/XUIWindowEventSink.h"
#include <api/js/jseventlistener.h>



const GUID JS_XUIWindow_GUID = { 0xe3ec8334, 0x8aab, 0x4434, { 0x99, 0x21, 0xf8, 0x73, 0x80, 0x3b, 0xec, 0x22 } };

class JSXUIWindowEventSink;
// ----------------------------------------------------------------------------

class JSXUIWindow {
  protected:
    JSXUIWindow();
    virtual ~JSXUIWindow();
  
  public:
    static JSClass JSXUIWindow::classDescriptor;
    static JSFunctionSpec JSXUIWindow::functionTable[];
    
  public:
  
  
  private:
    JSXUIWindowEventSink *jsSink;
};

// ----------------------------------------------------------------------------

class JSXUIWindowEventSink : public XUIWindowEventSink {
  public:
    JSXUIWindowEventSink(JSXUIWindow *jsclass) : m_jsClass(jsclass) {}
    virtual ~JSXUIWindowEventSink() {}
  private:
    JSXUIWindow *m_jsClass;
};

#endif // JSXUIWINDOW_H
