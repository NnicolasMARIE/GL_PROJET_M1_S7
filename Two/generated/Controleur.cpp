//
// THIS FILE IS AUTOMATICALLY GENERATED!!
//
// Generated at 2021-12-01 by the VDM++ to C++ Code Generator
// (v9.0.7 - Sat 09-Jun-2018 10:11:21 +0900)
//
// This file was genereted from "C:\\Users\\nmari\\GL_PROJET_M1_S7\\Two\\Controleur.vdmpp".


#include "Controleur.h"
#include "SystemeRTP.h"

#ifdef DEF_Controleur_USERIMPL

#include "Controleur_userimpl.cpp"


#endif // DEF_Controleur_USERIMPL



vdm_Controleur::vdm_Controleur () {
  this->vdm_init_Controleur();
}

void vdm_Controleur::vdm_init_Controleur () {
  this->RegisterAsBase(this->vdm_GetId());
  vdm_periode = Int(1);
  vdm_estPeriodique = Bool(true);
  vdm_Fini = Bool(false);
  vdm_ListeActeur = Map();
  vdm_ListeMenace = Map();
  vdm_ListeLongitude = Map();
  vdm_ListeLatitude = Map();
  vdm_ListeDistance = Map();
  vdm_ListeMenacesXPositions = Map();
}

#ifndef DEF_Controleur_Finir

void vdm_Controleur::vdm_Finir () {
  vdm_Fini = Bool(true);
}

#endif // DEF_Controleur_Finir

#ifndef DEF_Controleur_Action

void vdm_Controleur::vdm_Action () {
  vdm_MiseAjour();
  vdm_Algorithme();
  const Set iset_5 (vdm_ListeMenacesXPositions.Dom());
  Set tmpSet_14 (iset_5);
  Generic tmpe_13;
  for (bool bb_12 = tmpSet_14.First(tmpe_13); bb_12; bb_12 = tmpSet_14.Next(tmpe_13)) {
    const Tuple vdm_m (tmpe_13);
    Tuple par_7 (Tuple(2));
    par_7.SetField(1, vdm_m);
    par_7.SetField(2, static_cast<const Tuple &>(vdm_ListeMenacesXPositions[vdm_m]));
    ObjGet_vdm_ControleurDispenseur(vdm_SystemeRTP::vdm_ControleurDispenseur1)->vdm_SetEnnemi(par_7);
  }
}

#endif // DEF_Controleur_Action

#ifndef DEF_Controleur_estFini

void vdm_Controleur::vdm_estFini () {}

#endif // DEF_Controleur_estFini

#ifndef DEF_Controleur_RmMenace

void vdm_Controleur::vdm_RmMenace (const Int &vdm_id) {
  vdm_ListeMenace = vdm_ListeMenace.DomRestrictedBy(mk_set(vdm_id));
}

#endif // DEF_Controleur_RmMenace

#ifndef DEF_Controleur_MiseAjour

void vdm_Controleur::vdm_MiseAjour () {
  vdm_ListeLongitude = Map(ObjGet_vdm_CapteurLongitude(vdm_SystemeRTP::vdm_CapteurLongitude1)->vdm_ReadValeur());
  vdm_ListeLatitude = Map(ObjGet_vdm_CapteurLatitude(vdm_SystemeRTP::vdm_CapteurLatitude1)->vdm_ReadValeur());
  vdm_ListeDistance = Map(ObjGet_vdm_CapteurDistance(vdm_SystemeRTP::vdm_CapteurDistance1)->vdm_ReadValeur());
  vdm_ListeMenacesXPositions = Map();
  Set res_s_7;
  const Set e1_set_11 (vdm_ListeMenace.Dom());
  Set tmpSet_14 (e1_set_11);
  Generic tmpe_13;
  for (bool bb_12 = tmpSet_14.First(tmpe_13); bb_12; bb_12 = tmpSet_14.Next(tmpe_13)) {
    const Int vdm_td (tmpe_13);
    res_s_7.Insert(vdm_td);
  }
  const Set vdm_missile (res_s_7);
  Set tmpSet_36 (vdm_missile);
  Generic tmpe_35;
  for (bool bb_34 = tmpSet_36.First(tmpe_35); bb_34; bb_34 = tmpSet_36.Next(tmpe_35)) {
    const Int vdm_m (tmpe_35);
    Tuple md_19 (Tuple(2));
    md_19.SetField(1, vdm_m);
    md_19.SetField(2, static_cast<const Quote &>(vdm_ListeMenace[vdm_m]));
    Tuple mr_24 (Tuple(3));
    mr_24.SetField(1, static_cast<const Int &>(vdm_ListeDistance[vdm_m]));
    mr_24.SetField(2, static_cast<const Int &>(vdm_ListeLongitude[vdm_m]));
    mr_24.SetField(3, static_cast<const Int &>(vdm_ListeLatitude[vdm_m]));
    vdm_ListeMenacesXPositions.ImpModify(md_19, mr_24);
  }
}

#endif // DEF_Controleur_MiseAjour

#ifndef DEF_Controleur_addMenace

void vdm_Controleur::vdm_addMenace (const type_iUM &vdm_nouvelleMenace) {
  Map rhs_2 (vdm_ListeMenace);
  rhs_2.ImpOverride(vdm_nouvelleMenace);
  vdm_ListeMenace = rhs_2;
}

#endif // DEF_Controleur_addMenace

#ifndef DEF_Controleur_Algorithme

void vdm_Controleur::vdm_Algorithme () {
  ;
}

#endif // DEF_Controleur_Algorithme

#ifndef DEF_Controleur_Controleur

vdm_Controleur::vdm_Controleur (const Int &vdm_T, const Bool &vdm_estPeriodic) {
  vdm_init_Controleur();
  vdm_periode = vdm_T;
  vdm_estPeriodique = vdm_estPeriodic;
}

#endif // DEF_Controleur_Controleur


