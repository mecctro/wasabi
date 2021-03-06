// ----------------------------------------------------------------------------
// Generated by JSScriptable Factory - DO NOT EDIT
// 
// File        : ../js/JSXUIDndSession.h
// Class       : XUIDndSession
// class layer : Javascript Dispatcher
// ----------------------------------------------------------------------------

#ifndef JSXUIDNDSESSION_H
#define JSXUIDNDSESSION_H

#include <api/js/jsscriptable.h>
#include "../sourcesink/XUIDndSessionEventSink.h"
#include <api/js/jseventlistener.h>

class XUIObject;


const GUID JS_XUIDndSession_GUID = { 0xfd185375, 0x8d2a, 0x4c3a, { 0x8f, 0x88, 0x41, 0x84, 0x26, 0xa6, 0x64, 0xac } };

class JSXUIDndSessionEventSink;
// ----------------------------------------------------------------------------

class JSXUIDndSession {
  protected:
    JSXUIDndSession();
    virtual ~JSXUIDndSession();
  
  public:
    static JSClass JSXUIDndSession::classDescriptor;
    static JSFunctionSpec JSXUIDndSession::functionTable[];
    
  public:
    static JSBool fromjs_acceptDrop(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);
    static JSBool fromjs_dropAccepted(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);
    static JSBool fromjs_getNumDragTypes(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);
    static JSBool fromjs_enumDragType(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);
    static JSBool fromjs_getNumDragObjects(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);
    static JSBool fromjs_enumDragObject(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);
    static JSBool fromjs_hasDragType(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);
    static JSBool fromjs_getDropTarget(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);
    static JSBool fromjs_addDragObject(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);
  
    void tojs_onDragEnter(XUIObject *target);
    void tojs_onDragLeave(XUIObject *target);
    void tojs_onDragOver(XUIObject *target, int x, int y);
    void tojs_onDragDrop(XUIObject *target, int x, int y);
  
  private:
    JSXUIDndSessionEventSink *jsSink;
};

// ----------------------------------------------------------------------------

class JSXUIDndSessionEventSink : public XUIDndSessionEventSink {
  public:
    JSXUIDndSessionEventSink(JSXUIDndSession *jsclass) : m_jsClass(jsclass) {}
    virtual ~JSXUIDndSessionEventSink() {}
    virtual void eventSink_onDragEnter(XUIDndSessionEventSource *source, XUIObject *target);
    virtual void eventSink_onDragLeave(XUIDndSessionEventSource *source, XUIObject *target);
    virtual void eventSink_onDragOver(XUIDndSessionEventSource *source, XUIObject *target, int x, int y);
    virtual void eventSink_onDragDrop(XUIDndSessionEventSource *source, XUIObject *target, int x, int y);
  private:
    JSXUIDndSession *m_jsClass;
};

#endif // JSXUIDNDSESSION_H
