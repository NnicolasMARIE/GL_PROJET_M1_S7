//
// THIS FILE IS AUTOMATICALLY GENERATED!!
//
// Generated at 2021-12-01 by the VDM++ to C++ Code Generator
// (v9.0.7 - Sat 09-Jun-2018 10:11:21 +0900)
//
// This file was genereted from "C:\\Users\\nmari\\GL_PROJET_M1_S7\\Two\\Capteur.vdmpp".


#include "Capteur.h"
#include "Contexte.h"
#include "Controleur.h"

#ifdef DEF_Capteur_USERIMPL

#include "Capteur_userimpl.cpp"


#endif // DEF_Capteur_USERIMPL



vdm_Capteur::vdm_Capteur () {
  this->vdm_init_Capteur();
}

void vdm_Capteur::vdm_init_Capteur () {
  this->RegisterAsBase(this->vdm_GetId());
  vdm_periode = Int(1);
  vdm_estPeriodique = Bool(true);
}

#ifndef DEF_Capteur_GetID

Int vdm_Capteur::vdm_GetID () {
  return vdm_ID;
}

#endif // DEF_Capteur_GetID

#ifndef DEF_Capteur_GetType

TYPE_Controleur_typeActeur vdm_Capteur::vdm_GetType () {
  return vdm_Type;
}

#endif // DEF_Capteur_GetType

#ifndef DEF_Capteur_ReadValeur

type_iiM vdm_Capteur::vdm_ReadValeur () {
  return vdm_Valeur;
}

#endif // DEF_Capteur_ReadValeur

