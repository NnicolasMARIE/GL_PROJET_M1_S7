//
// THIS FILE IS AUTOMATICALLY GENERATED!!
//
// Generated at 2021-12-01 by the VDM++ to C++ Code Generator
// (v9.0.7 - Sat 09-Jun-2018 10:11:21 +0900)
//
// This file was genereted from "C:\\Users\\nmari\\GL_PROJET_M1_S7\\Two\\CapteurLongitude.vdmpp".

#ifndef _CapteurLongitude_h
#define _CapteurLongitude_h

#include "Capteur.h"
#include "CapteurLongitude_anonym.h"
#include "Controleur.h"



class type_ref_CapteurLongitude : public virtual type_ref_Capteur {
public:
  type_ref_CapteurLongitude () : ObjectRef() {}

  type_ref_CapteurLongitude (const Common &c) : ObjectRef(c) {}

  type_ref_CapteurLongitude (vdmBase * p) : ObjectRef(p) {}

  const wchar_t * GetTypeName () const   {
    return L"type_ref_CapteurLongitude";
  }

};



class vdm_CapteurLongitude : public virtual vdm_Capteur {
public:
  vdm_CapteurLongitude * Get_vdm_CapteurLongitude ()   {
    return this;
  }

  ObjectRef Self ()   {
    return ObjectRef(Get_vdm_CapteurLongitude());
  }

  int vdm_GetId ()   {
    return VDM_CapteurLongitude;
  }

  vdm_CapteurLongitude ();
  virtual ~vdm_CapteurLongitude () {}

  void vdm_init_CapteurLongitude ();
private:
  Bool vdm_fini;
public:
  virtual void vdm_Finir ();
  virtual void vdm_Action ();
  virtual void vdm_estFini ();
  vdm_CapteurLongitude (const Int &, const TYPE_Controleur_typeActeur &, const type_iiM &, const type_ref_Contexte &, const Int &, const Bool &);
};


#endif // _CapteurLongitude_h