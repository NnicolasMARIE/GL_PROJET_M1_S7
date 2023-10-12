//
// THIS FILE IS AUTOMATICALLY GENERATED!!
//
// Generated at 2021-12-01 by the VDM++ to C++ Code Generator
// (v9.0.7 - Sat 09-Jun-2018 10:11:21 +0900)
//
// This file was genereted from "C:\\Users\\nmari\\GL_PROJET_M1_S7\\Two\\ControleurDispenseur.vdmpp".

#ifndef _ControleurDispenseur_h
#define _ControleurDispenseur_h

#include <math.h>
#include "metaiv.h"
#include "cg.h"
#include "cg_aux.h"
#include "CGBase.h"
#include "ControleurDispenseur_anonym.h"
#include "Controleur.h"



class type_ref_ControleurDispenseur : public virtual ObjectRef {
public:
  type_ref_ControleurDispenseur () : ObjectRef() {}

  type_ref_ControleurDispenseur (const Common &c) : ObjectRef(c) {}

  type_ref_ControleurDispenseur (vdmBase * p) : ObjectRef(p) {}

  const wchar_t * GetTypeName () const   {
    return L"type_ref_ControleurDispenseur";
  }

};



class vdm_ControleurDispenseur : public virtual CGBase {
public:
  vdm_ControleurDispenseur * Get_vdm_ControleurDispenseur ()   {
    return this;
  }

  ObjectRef Self ()   {
    return ObjectRef(Get_vdm_ControleurDispenseur());
  }

  int vdm_GetId ()   {
    return VDM_ControleurDispenseur;
  }

  vdm_ControleurDispenseur ();
  virtual ~vdm_ControleurDispenseur () {}

  void vdm_init_ControleurDispenseur ();
private:
  Int vdm_ID;
  Quote vdm_Type;
  Tuple vdm_ennemi;
  Bool vdm_act;
  Bool vdm_Fini;
  virtual void vdm_Algo ();
  virtual void vdm_Lancement ();
protected:
  Int vdm_periode;
  Bool vdm_estPeriodique;
public:
  virtual void vdm_Finir ();
  virtual void vdm_Action ();
  virtual void vdm_estFini ();
  virtual void vdm_SetEnnemi (const type_iU2Piii3P2P &);
  vdm_ControleurDispenseur (const Int &, const TYPE_Controleur_typeActeur &, const Int &, const Bool &);
};


#endif // _ControleurDispenseur_h