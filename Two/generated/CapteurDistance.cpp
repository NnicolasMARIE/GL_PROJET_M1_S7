//
// THIS FILE IS AUTOMATICALLY GENERATED!!
//
// Generated at 2021-12-01 by the VDM++ to C++ Code Generator
// (v9.0.7 - Sat 09-Jun-2018 10:11:21 +0900)
//
// This file was genereted from "C:\\Users\\nmari\\GL_PROJET_M1_S7\\Two\\CapteurDistance.vdmpp".


#include "CapteurDistance.h"
#include "Contexte.h"
#include "Controleur.h"
#include "SystemeRTP.h"

#ifdef DEF_CapteurDistance_USERIMPL

#include "CapteurDistance_userimpl.cpp"


#endif // DEF_CapteurDistance_USERIMPL



vdm_CapteurDistance::vdm_CapteurDistance () {
  this->vdm_init_CapteurDistance();
}

void vdm_CapteurDistance::vdm_init_CapteurDistance () {
  this->RegisterAsDerived(this->vdm_GetId());
  vdm_fini = Bool(false);
}

#ifndef DEF_CapteurDistance_Finir

void vdm_CapteurDistance::vdm_Finir () {
  vdm_fini = Bool(true);
}

#endif // DEF_CapteurDistance_Finir

#ifndef DEF_CapteurDistance_Action

void vdm_CapteurDistance::vdm_Action () {
  vdm_Valeur = Map(ObjGet_vdm_Contexte(vdm_SystemeRTP::vdm_leContexte)->vdm_Readlat());
}

#endif // DEF_CapteurDistance_Action

#ifndef DEF_CapteurDistance_estFini

void vdm_CapteurDistance::vdm_estFini () {}

#endif // DEF_CapteurDistance_estFini

#ifndef DEF_CapteurDistance_CapteurDistance

vdm_CapteurDistance::vdm_CapteurDistance (const Int &vdm_id, const TYPE_Controleur_typeActeur &vdm_type, const type_iiM &vdm_val, const type_ref_Contexte &vdm_envir, const Int &vdm_p, const Bool &vdm_isP) {
  vdm_init_CapteurDistance();
  vdm_ID = vdm_id;
  vdm_Type = vdm_type;
  vdm_Valeur = vdm_val;
  vdm_Env = vdm_envir;
  vdm_periode = vdm_p;
  vdm_estPeriodique = vdm_isP;
}

#endif // DEF_CapteurDistance_CapteurDistance


