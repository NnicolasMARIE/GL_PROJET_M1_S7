//
// THIS FILE IS AUTOMATICALLY GENERATED!!
//
// Generated at 2021-12-01 by the VDM++ to C++ Code Generator
// (v9.0.7 - Sat 09-Jun-2018 10:11:21 +0900)
//
// This file was genereted from "C:\\Users\\nmari\\GL_PROJET_M1_S7\\Two\\Detecteur.vdmpp".

#ifndef _Detecteur_h
#define _Detecteur_h

#include <math.h>
#include "metaiv.h"
#include "cg.h"
#include "cg_aux.h"
#include "CGBase.h"
#include "Detecteur_anonym.h"
#include "Controleur.h"



class type_ref_Detecteur : public virtual ObjectRef {
public:
  type_ref_Detecteur () : ObjectRef() {}

  type_ref_Detecteur (const Common &c) : ObjectRef(c) {}

  type_ref_Detecteur (vdmBase * p) : ObjectRef(p) {}

  const wchar_t * GetTypeName () const   {
    return L"type_ref_Detecteur";
  }

};



class vdm_Detecteur : public virtual CGBase {
public:
  vdm_Detecteur * Get_vdm_Detecteur ()   {
    return this;
  }

  ObjectRef Self ()   {
    return ObjectRef(Get_vdm_Detecteur());
  }

  int vdm_GetId ()   {
    return VDM_Detecteur;
  }

  vdm_Detecteur ();
  virtual ~vdm_Detecteur () {}

  void vdm_init_Detecteur ();
private:
  Int vdm_identifiantM;
  Int vdm_ID;
  Quote vdm_Type;
  Bool vdm_Fini;
protected:
  Int vdm_periode;
  Bool vdm_estPeriodique;
public:
  virtual void vdm_Finir ();
  virtual void vdm_Action ();
  virtual void vdm_estFini ();
  vdm_Detecteur (const Int &, const TYPE_Controleur_typeActeur &, const Int &, const Bool &);
};


#endif // _Detecteur_h
