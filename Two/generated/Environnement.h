//
// THIS FILE IS AUTOMATICALLY GENERATED!!
//
// Generated at 2021-12-01 by the VDM++ to C++ Code Generator
// (v9.0.7 - Sat 09-Jun-2018 10:11:21 +0900)
//
// This file was genereted from "C:\\Users\\nmari\\GL_PROJET_M1_S7\\Two\\Environnement.vdmpp".

#ifndef _Environnement_h
#define _Environnement_h

#include <math.h>
#include "metaiv.h"
#include "cg.h"
#include "cg_aux.h"
#include "CGBase.h"
#include "Environnement_anonym.h"



class type_ref_Environnement : public virtual ObjectRef {
public:
  type_ref_Environnement () : ObjectRef() {}

  type_ref_Environnement (const Common &c) : ObjectRef(c) {}

  type_ref_Environnement (vdmBase * p) : ObjectRef(p) {}

  const wchar_t * GetTypeName () const   {
    return L"type_ref_Environnement";
  }

};



class vdm_Environnement : public virtual CGBase {
public:
  vdm_Environnement * Get_vdm_Environnement ()   {
    return this;
  }

  ObjectRef Self ()   {
    return ObjectRef(Get_vdm_Environnement());
  }

  int vdm_GetId ()   {
    return VDM_Environnement;
  }

  vdm_Environnement ();
  virtual ~vdm_Environnement () {}

  void vdm_init_Environnement ();
private:
  ObjectRef vdm_io;
  Sequence vdm_datas;
  Int vdm_DureeSimulation;
  Bool vdm_fini;
  virtual void vdm_stimuli ();
protected:
  Int vdm_periode;
  Bool vdm_estPeriodique;
  virtual void vdm_Action ();
public:
  virtual void vdm_Finir ();
  virtual void vdm_estFini ();
  vdm_Environnement (const type_cL &, const Int &, const Bool &);
};


#endif // _Environnement_h
