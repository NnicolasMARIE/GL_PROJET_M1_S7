//
// THIS FILE IS AUTOMATICALLY GENERATED!!
//
// Generated at 2021-12-01 by the VDM++ to C++ Code Generator
// (v9.0.7 - Sat 09-Jun-2018 10:11:21 +0900)
//
// This file was genereted from "C:\\Users\\nmari\\GL_PROJET_M1_S7\\Two\\Detecteur.vdmpp".


#include "Detecteur.h"
#include "IO.h"
#include "Controleur.h"
#include "SystemeRTP.h"

#ifdef DEF_Detecteur_USERIMPL

#include "Detecteur_userimpl.cpp"


#endif // DEF_Detecteur_USERIMPL



vdm_Detecteur::vdm_Detecteur () {
  this->vdm_init_Detecteur();
}

void vdm_Detecteur::vdm_init_Detecteur () {
  this->RegisterAsBase(this->vdm_GetId());
  vdm_identifiantM = Int(0);
  vdm_periode = Int(1);
  vdm_estPeriodique = Bool(true);
  vdm_Fini = Bool(false);
}

#ifndef DEF_Detecteur_Finir

void vdm_Detecteur::vdm_Finir () {
  vdm_Fini = Bool(true);
}

#endif // DEF_Detecteur_Finir

#ifndef DEF_Detecteur_Action

void vdm_Detecteur::vdm_Action () {
  if (ObjGet_vdm_Contexte(vdm_SystemeRTP::vdm_leContexte)->vdm_GetDetectionNouvelleMenace().GetValue()) {
    ObjGet_vdm_Contexte(vdm_SystemeRTP::vdm_leContexte)->vdm_SetNouvelleMenace(Bool(false));
    if (!(ObjGet_vdm_Contexte(vdm_SystemeRTP::vdm_leContexte)->vdm_GetDetectionTypeMenace() == Quote(L"NUL"))) {
      vdm_IO::vdm_print(SEQ<Char>(L"\n detection missile ennemi de type : "));
      vdm_IO::vdm_print(ObjGet_vdm_Contexte(vdm_SystemeRTP::vdm_leContexte)->vdm_GetDetectionTypeMenace());
      ObjGet_vdm_Controleur(vdm_SystemeRTP::vdm_Pilote)->vdm_addMenace(Map().Insert(vdm_identifiantM, ObjGet_vdm_Contexte(vdm_SystemeRTP::vdm_leContexte)->vdm_GetDetectionTypeMenace()));
      vdm_identifiantM = vdm_identifiantM + Int(1);
    }
  }
}

#endif // DEF_Detecteur_Action

#ifndef DEF_Detecteur_estFini

void vdm_Detecteur::vdm_estFini () {}

#endif // DEF_Detecteur_estFini

#ifndef DEF_Detecteur_Detecteur

vdm_Detecteur::vdm_Detecteur (const Int &vdm_id, const TYPE_Controleur_typeActeur &vdm_type, const Int &vdm_T, const Bool &vdm_estPeriodic) {
  vdm_init_Detecteur();
  vdm_ID = vdm_id;
  vdm_Type = vdm_type;
  vdm_periode = vdm_T;
  vdm_estPeriodique = vdm_estPeriodic;
}

#endif // DEF_Detecteur_Detecteur

