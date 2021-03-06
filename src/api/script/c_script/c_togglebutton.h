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

#ifndef __C_TOGGLEBUTTON_H
#define __C_TOGGLEBUTTON_H

#include "c_button.h"

#define C_TOGGLEBUTTON_PARENT C_Button

class COMEXP C_ToggleButton : public C_TOGGLEBUTTON_PARENT {
  public:

  C_ToggleButton(ScriptObject *object);
  C_ToggleButton();
  virtual ~C_ToggleButton();

  virtual void C_hook(ScriptObject *o);

  ScriptObject *getScriptObject();

  virtual void onToggle(int (null));

  private:

  ScriptObject *obj;
  int inited;
  static int loaded;
  static int ontoggle_id;
};

#endif
