//
// THIS FILE IS AUTOMATICALLY GENERATED!!
//
// Generated at 2021-12-01 by the VDM++ to C++ Code Generator
// (v9.0.7 - Sat 09-Jun-2018 10:11:21 +0900)
//
// This file was genereted from "C:\\Users\\nmari\\GL_PROJET_M1_S7\\Two\\Environnement.vdmpp".


#include "Environnement.h"
#include "IO.h"
#include "Animation.h"
#include "SystemeRTP.h"

#ifdef DEF_Environnement_USERIMPL

#include "Environnement_userimpl.cpp"


#endif // DEF_Environnement_USERIMPL



vdm_Environnement::vdm_Environnement () {
  this->vdm_init_Environnement();
}

void vdm_Environnement::vdm_init_Environnement () {
  this->RegisterAsBase(this->vdm_GetId());
  vdm_periode = Int(1);
  vdm_estPeriodique = Bool(true);
  vdm_io = type_ref_IO(new vdm_IO());
  vdm_datas = Sequence();
  vdm_DureeSimulation = Int(0);
  vdm_fini = Bool(false);
}

#ifndef DEF_Environnement_Finir

void vdm_Environnement::vdm_Finir () {
  vdm_fini = Bool(true);
}

#endif // DEF_Environnement_Finir

#ifndef DEF_Environnement_Action

void vdm_Environnement::vdm_Action () {
  if (ObjGet_vdm_TimeStamp(vdm_Animation::vdm_horloge)->vdm_GetTime().GetValue() < vdm_DureeSimulation.GetValue()) {
    vdm_stimuli();
  }
  else {
    vdm_fini = Bool(true);
  }
}

#endif // DEF_Environnement_Action

#ifndef DEF_Environnement_estFini

void vdm_Environnement::vdm_estFini () {}

#endif // DEF_Environnement_estFini

#ifndef DEF_Environnement_stimuli

void vdm_Environnement::vdm_stimuli () {
  if (vdm_datas.Length() > 0) {
    Int vdm_dateActuelle (ObjGet_vdm_TimeStamp(vdm_Animation::vdm_horloge)->vdm_GetTime());
    {
      const Tuple tmpVar_9 (static_cast<Tuple>(vdm_datas.Hd()));
      const Int vdm_date (tmpVar_9.GetInt(1));
      const Bool vdm_Ndetect (tmpVar_9.GetBool(2));
      const Quote vdm_Me (tmpVar_9.GetField(3));
      const Int vdm_id (tmpVar_9.GetInt(4));
      const Int vdm_dis (tmpVar_9.GetInt(5));
      const Int vdm_lon (tmpVar_9.GetInt(6));
      const Int vdm_lat (tmpVar_9.GetInt(7));
      if (vdm_date.GetValue() <= vdm_dateActuelle.GetValue()) {
        ObjGet_vdm_Contexte(vdm_SystemeRTP::vdm_leContexte)->vdm_Setdis(Map().Insert(vdm_id, vdm_dis));
        ObjGet_vdm_Contexte(vdm_SystemeRTP::vdm_leContexte)->vdm_Setlon(Map().Insert(vdm_id, vdm_lon));
        ObjGet_vdm_Contexte(vdm_SystemeRTP::vdm_leContexte)->vdm_Setlat(Map().Insert(vdm_id, vdm_lat));
        ObjGet_vdm_Contexte(vdm_SystemeRTP::vdm_leContexte)->vdm_SetNouvelleMenace(vdm_Ndetect);
        ObjGet_vdm_Contexte(vdm_SystemeRTP::vdm_leContexte)->vdm_SetTypeMenace(vdm_Me);
        vdm_datas = vdm_datas.Tl();
        return;
      }
    }
  }
  else {
    vdm_fini = Bool(true);
    return;
  }
}

#endif // DEF_Environnement_stimuli

#ifndef DEF_Environnement_Environnement

vdm_Environnement::vdm_Environnement (const type_cL &vdm_fichierData, const Int &vdm_p, const Bool &vdm_estP) {
  vdm_init_Environnement();
  vdm_periode = vdm_p;
  vdm_estPeriodique = vdm_estP;
  bool succ_6 = false;
  Int vdm_t;
  Sequence vdm_input;
  const Tuple tmpVar_9 (ObjGet_vdm_IO(vdm_io)->vdm_freadval(vdm_fichierData));
  const Generic tmpVar_10 (tmpVar_9.GetField(2));
  if ((succ_6 = (tmpVar_10.IsTuple() && (2 == (static_cast<const Tuple &>(tmpVar_10)).Length())))) {
    vdm_t = (static_cast<const Tuple &>(tmpVar_10)).GetInt(1);
    vdm_input = (static_cast<const Tuple &>(tmpVar_10)).GetSequence(2);
  }
  if (!succ_6) {
    CGUTIL::RunTime(L"Pattern match did not succeed in value definition");
  }
  vdm_datas = vdm_input;
  vdm_DureeSimulation = vdm_t;
}

#endif // DEF_Environnement_Environnement


