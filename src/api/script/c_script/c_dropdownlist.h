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

#ifndef __C_DROPDOWNLIST_H
#define __C_DROPDOWNLIST_H

#include "c_guiobject.h"

#define C_DROPDOWNLIST_PARENT C_GuiObject

class COMEXP C_DropDownList : public C_DROPDOWNLIST_PARENT {
  public:

  C_DropDownList(ScriptObject *object);
  C_DropDownList();
  virtual ~C_DropDownList();

  virtual void C_hook(ScriptObject *o);

  ScriptObject *getScriptObject();

  virtual const char *getItemSelected();

  private:

  ScriptObject *obj;
  int inited;
  static int loaded;
  static int getitemselected_id;
};

#endif
