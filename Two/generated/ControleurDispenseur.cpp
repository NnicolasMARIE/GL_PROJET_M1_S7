//
// THIS FILE IS AUTOMATICALLY GENERATED!!
//
// Generated at 2021-12-01 by the VDM++ to C++ Code Generator
// (v9.0.7 - Sat 09-Jun-2018 10:11:21 +0900)
//
// This file was genereted from "C:\\Users\\nmari\\GL_PROJET_M1_S7\\Two\\ControleurDispenseur.vdmpp".


#include "ControleurDispenseur.h"
#include "IO.h"
#include "Controleur.h"
#include "SystemeRTP.h"

#ifdef DEF_ControleurDispenseur_USERIMPL

#include "ControleurDispenseur_userimpl.cpp"


#endif // DEF_ControleurDispenseur_USERIMPL



vdm_ControleurDispenseur::vdm_ControleurDispenseur () {
  this->vdm_init_ControleurDispenseur();
}

void vdm_ControleurDispenseur::vdm_init_ControleurDispenseur () {
  this->RegisterAsBase(this->vdm_GetId());
  vdm_act = Bool(false);
  vdm_periode = Int(1);
  vdm_estPeriodique = Bool(true);
  vdm_Fini = Bool(false);
}

#ifndef DEF_ControleurDispenseur_Algo

void vdm_ControleurDispenseur::vdm_Algo () {}

#endif // DEF_ControleurDispenseur_Algo

#ifndef DEF_ControleurDispenseur_Finir

void vdm_ControleurDispenseur::vdm_Finir () {
  vdm_Fini = Bool(true);
}

#endif // DEF_ControleurDispenseur_Finir

#ifndef DEF_ControleurDispenseur_Action

void vdm_ControleurDispenseur::vdm_Action () {
  if (vdm_act == Bool(true)) {
    vdm_act = Bool(false);
    vdm_Algo();
    vdm_Lancement();
    ObjGet_vdm_Controleur(vdm_SystemeRTP::vdm_Pilote)->vdm_RmMenace((static_cast<const Tuple &>(vdm_ennemi.GetField(1))).GetField(1));
  }
}

#endif // DEF_ControleurDispenseur_Action

#ifndef DEF_ControleurDispenseur_estFini

void vdm_ControleurDispenseur::vdm_estFini () {}

#endif // DEF_ControleurDispenseur_estFini

#ifndef DEF_ControleurDispenseur_Lancement

void vdm_ControleurDispenseur::vdm_Lancement () {
  vdm_IO::vdm_print(SEQ<Char>(L"\n destruction du missile n:"));
  vdm_IO::vdm_print(static_cast<const Int &>((static_cast<const Tuple &>(vdm_ennemi.GetField(1))).GetField(1)));
  vdm_IO::vdm_print(SEQ<Char>(L"\n de type :"));
  vdm_IO::vdm_print(static_cast<const Quote &>((static_cast<const Tuple &>(vdm_ennemi.GetField(1))).GetField(2)));
}

#endif // DEF_ControleurDispenseur_Lancement

#ifndef DEF_ControleurDispenseur_SetEnnemi

void vdm_ControleurDispenseur::vdm_SetEnnemi (const type_iU2Piii3P2P &vdm_aAbatre) {
  vdm_ennemi = vdm_aAbatre;
  vdm_act = Bool(true);
}

#endif // DEF_ControleurDispenseur_SetEnnemi

#ifndef DEF_ControleurDispenseur_ControleurDispenseur

vdm_ControleurDispenseur::vdm_ControleurDispenseur (const Int &vdm_id, const TYPE_Controleur_typeActeur &vdm_type, const Int &vdm_T, const Bool &vdm_estPeriodic) {
  vdm_init_ControleurDispenseur();
  vdm_ID = vdm_id;
  vdm_Type = vdm_type;
  vdm_periode = vdm_T;
  vdm_estPeriodique = vdm_estPeriodic;
}

#endif // DEF_ControleurDispenseur_ControleurDispenseur


