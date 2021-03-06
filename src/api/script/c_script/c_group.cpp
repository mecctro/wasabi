/*

  Nullsoft WASABI Source File License

  Copyright 1999-2001 Nullsoft, Inc.

    This software is provided 'as-is', without any express or implied
    warranty.  In no event will the authors be held liable for any damages
    arising from the use of this software.

    Permission is granted to anyone to use this software for any purpose,
    including commercial applications, and to alter it and redistribute it
    freely, subject to the following restrictions:

    1. The origin of this software must not be misrepresented; you must not
       claim that you wrote the original software. If you use this software
       in a product, an acknowledgment in the product documentation would be
       appreciated but is not required.
    2. Altered source versions must be plainly marked as such, and must not be
       misrepresented as being the original software.
    3. This notice may not be removed or altered from any source distribution.


  Brennan Underwood
  brennan@nullsoft.com

*/

/* This file was generated by Maki Compiler, do not edit manually */

#include "../../../studio/api.h"
#include "c_group.h"
#include "../objcontroller.h"

C_Group::C_Group(ScriptObject *object) : C_GuiObject(object) {
  inited = 0;
  C_hook(object);
}

C_Group::C_Group() {
  inited = 0;
}

void C_Group::C_hook(ScriptObject *object) {
  ASSERT(!inited);
  ScriptObjectController *controller = object->vcpu_getController();
  obj = controller->cast(object, groupGuid);
  if (obj != object && obj != NULL)
    controller = obj->vcpu_getController();
  else
    obj = NULL;

  if (!loaded) {
    loaded = 1;
    getobject_id = api->maki_addDlfRef(controller, "getObject", this);
    getnumobjects_id = api->maki_addDlfRef(controller, "getNumObjects", this);
    enumobject_id = api->maki_addDlfRef(controller, "enumObject", this);
    oncreateobject_id = api->maki_addDlfRef(controller, "onCreateObject", this);
    getmouseposx_id = api->maki_addDlfRef(controller, "getMousePosX", this);
    getmouseposy_id = api->maki_addDlfRef(controller, "getMousePosY", this);
    islayout_id = api->maki_addDlfRef(controller, "isLayout", this);
  }
  inited = 1;
}

C_Group::~C_Group() {
}

ScriptObject *C_Group::getScriptObject() {
  if (obj != NULL) return obj;
  return C_GROUP_PARENT::getScriptObject();
}

ScriptObject *C_Group::getObject(const char *object_id) {
  ASSERT(inited);
  scriptVar a = MAKE_SCRIPT_STRING(object_id);
  scriptVar *params[1] = {&a};
  return GET_SCRIPT_OBJECT(api->maki_callFunction(getScriptObject(), getobject_id, params));
}

int C_Group::getNumObjects() {
  ASSERT(inited);
  return GET_SCRIPT_INT(api->maki_callFunction(getScriptObject(), getnumobjects_id, NULL));
}

ScriptObject *C_Group::enumObject(int num) {
  ASSERT(inited);
  scriptVar a = MAKE_SCRIPT_INT(num);
  scriptVar *params[1] = {&a};
  return GET_SCRIPT_OBJECT(api->maki_callFunction(getScriptObject(), enumobject_id, params));
}

void C_Group::onCreateObject(ScriptObject *newobj) {
  ASSERT(inited);
  scriptVar a = MAKE_SCRIPT_OBJECT(newobj);
  scriptVar *params[1] = {&a};
  api->maki_callFunction(getScriptObject(), oncreateobject_id, params);
}

int C_Group::getMousePosX() {
  ASSERT(inited);
  return GET_SCRIPT_INT(api->maki_callFunction(getScriptObject(), getmouseposx_id, NULL));
}

int C_Group::getMousePosY() {
  ASSERT(inited);
  return GET_SCRIPT_INT(api->maki_callFunction(getScriptObject(), getmouseposy_id, NULL));
}

int C_Group::isLayout() {
  ASSERT(inited);
  return GET_SCRIPT_INT(api->maki_callFunction(getScriptObject(), islayout_id, NULL));
}

int C_Group::loaded=0;
int C_Group::getobject_id=0;
int C_Group::getnumobjects_id=0;
int C_Group::enumobject_id=0;
int C_Group::oncreateobject_id=0;
int C_Group::getmouseposx_id=0;
int C_Group::getmouseposy_id=0;
int C_Group::islayout_id=0;
