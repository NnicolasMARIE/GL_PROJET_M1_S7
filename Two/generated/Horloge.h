//
// THIS FILE IS AUTOMATICALLY GENERATED!!
//
// Generated at 2021-12-01 by the VDM++ to C++ Code Generator
// (v9.0.7 - Sat 09-Jun-2018 10:11:21 +0900)
//
// This file was genereted from "C:\\Users\\nmari\\GL_PROJET_M1_S7\\Two\\Horloge.vdmpp".

#ifndef _Horloge_h
#define _Horloge_h

#include <math.h>
#include "metaiv.h"
#include "cg.h"
#include "cg_aux.h"
#include "CGBase.h"
#include "Horloge_anonym.h"



class type_ref_Horloge : public virtual ObjectRef {
public:
  type_ref_Horloge () : ObjectRef() {}

  type_ref_Horloge (const Common &c) : ObjectRef(c) {}

  type_ref_Horloge (vdmBase * p) : ObjectRef(p) {}

  const wchar_t * GetTypeName () const   {
    return L"type_ref_Horloge";
  }

};



class vdm_Horloge : public virtual CGBase {

  friend class init_Horloge ;
public:
  vdm_Horloge * Get_vdm_Horloge ()   {
    return this;
  }

  ObjectRef Self ()   {
    return ObjectRef(Get_vdm_Horloge());
  }

  int vdm_GetId ()   {
    return VDM_Horloge;
  }

  vdm_Horloge ();
  virtual ~vdm_Horloge () {}

  void vdm_init_Horloge ();
private:
  static Int vdm_periode;
  Int vdm_dateActuelle;
public:
  virtual Int vdm_GetTime ();
  virtual void vdm_StepTime ();
};


#endif // _Horloge_h