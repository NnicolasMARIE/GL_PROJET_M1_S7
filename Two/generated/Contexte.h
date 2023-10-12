//
// THIS FILE IS AUTOMATICALLY GENERATED!!
//
// Generated at 2021-12-01 by the VDM++ to C++ Code Generator
// (v9.0.7 - Sat 09-Jun-2018 10:11:21 +0900)
//
// This file was genereted from "C:\\Users\\nmari\\GL_PROJET_M1_S7\\Two\\Contexte.vdmpp".

#ifndef _Contexte_h
#define _Contexte_h

#include <math.h>
#include "metaiv.h"
#include "cg.h"
#include "cg_aux.h"
#include "CGBase.h"
#include "Contexte_anonym.h"
#include "Controleur.h"



class type_ref_Contexte : public virtual ObjectRef {
public:
  type_ref_Contexte () : ObjectRef() {}

  type_ref_Contexte (const Common &c) : ObjectRef(c) {}

  type_ref_Contexte (vdmBase * p) : ObjectRef(p) {}

  const wchar_t * GetTypeName () const   {
    return L"type_ref_Contexte";
  }

};



class vdm_Contexte : public virtual CGBase {
public:
  vdm_Contexte * Get_vdm_Contexte ()   {
    return this;
  }

  ObjectRef Self ()   {
    return ObjectRef(Get_vdm_Contexte());
  }

  int vdm_GetId ()   {
    return VDM_Contexte;
  }

  void vdm_init_Contexte ();
private:
  Map vdm_envdistance;
  Map vdm_envlongitude;
  Map vdm_envlatitude;
  Bool vdm_nouvelledet;
  Quote vdm_typedet;
  Map vdm_MenaceEnv;
public:
  virtual void vdm_Setdis (const type_iiM &);
  virtual void vdm_Setlat (const type_iiM &);
  virtual void vdm_Setlon (const type_iiM &);
  virtual type_iiM vdm_Readdis ();
  virtual type_iiM vdm_Readlat ();
  virtual type_iiM vdm_Readlon ();
  vdm_Contexte ();
  virtual void vdm_SetTypeMenace (const Generic &);
  virtual void vdm_SetNouvelleMenace (const Bool &);
  virtual TYPE_Controleur_typeMenace vdm_GetDetectionTypeMenace ();
  virtual Bool vdm_GetDetectionNouvelleMenace ();
};


#endif // _Contexte_h