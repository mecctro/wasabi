// ----------------------------------------------------------------------------
// Generated by JSScriptable Factory - DO NOT EDIT
// 
// File        : ../js/JSJSTimer.h
// Class       : JSTimer
// class layer : Javascript Dispatcher
// ----------------------------------------------------------------------------

#ifndef JSJSTIMER_H
#define JSJSTIMER_H

#include <api/js/jsscriptable.h>
#include "../sourcesink/JSTimerEventSink.h"
#include <api/js/jseventlistener.h>



const GUID JS_JSTimer_GUID = { 0xf2005a45, 0x61dd, 0x4594, { 0x9d, 0xc1, 0x2d, 0x5e, 0xeb, 0x7c, 0x58, 0xd8 } };

class JSJSTimerEventSink;
// ----------------------------------------------------------------------------

class JSJSTimer {
  protected:
    JSJSTimer();
    virtual ~JSJSTimer();
  
  public:
    static JSClass JSJSTimer::classDescriptor;
    static JSFunctionSpec JSJSTimer::functionTable[];
    
  public:
    static JSBool fromjs_setDelay(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);
    static JSBool fromjs_start(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);
    static JSBool fromjs_stop(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);
  
    void tojs_onTimer();
  
  private:
    JSJSTimerEventSink *jsSink;
};

// ----------------------------------------------------------------------------

class JSJSTimerEventSink : public JSTimerEventSink {
  public:
    JSJSTimerEventSink(JSJSTimer *jsclass) : m_jsClass(jsclass) {}
    virtual ~JSJSTimerEventSink() {}
    virtual void eventSink_onTimer(JSTimerEventSource *source);
  private:
    JSJSTimer *m_jsClass;
};

#endif // JSJSTIMER_H
