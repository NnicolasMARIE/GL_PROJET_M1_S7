//
// THIS FILE IS AUTOMATICALLY GENERATED!!
//
// Generated at 2021-12-01 by the VDM++ to C++ Code Generator
// (v9.0.7 - Sat 09-Jun-2018 10:11:21 +0900)
//
// This file was genereted from "C:\\Users\\nmari\\GL_PROJET_M1_S7\\Two\\TimeStamp.vdmpp".


#include "TimeStamp.h"

#ifdef DEF_TimeStamp_USERIMPL

#include "TimeStamp_userimpl.cpp"


#endif // DEF_TimeStamp_USERIMPL



Int vdm_TimeStamp::vdm_pas;



class init_TimeStamp {
public:
  init_TimeStamp ()   {
    vdm_TimeStamp::vdm_pas = Int(1);
  }

};

init_TimeStamp Init_TimeStamp;

vdm_TimeStamp::vdm_TimeStamp () {
  this->vdm_init_TimeStamp();
}

void vdm_TimeStamp::vdm_init_TimeStamp () {
  this->RegisterAsBase(this->vdm_GetId());
  vdm_dateActuelle = Int(0);
  vdm_tabReveil = Map();
}

#ifndef DEF_TimeStamp_GetTime

Int vdm_TimeStamp::vdm_GetTime () {
  return vdm_dateActuelle;
}

#endif // DEF_TimeStamp_GetTime

#ifndef DEF_TimeStamp_enVeille

void vdm_TimeStamp::vdm_enVeille () {}

#endif // DEF_TimeStamp_enVeille

#ifndef DEF_TimeStamp_TimeStamp

vdm_TimeStamp::vdm_TimeStamp (const Int &vdm_compteur) {
  vdm_init_TimeStamp();
  vdm_comptBarriere = vdm_compteur;
}

#endif // DEF_TimeStamp_TimeStamp

#ifndef DEF_TimeStamp_WaitAbsolu

void vdm_TimeStamp::vdm_WaitAbsolu (const Int &vdm_val) {
  Int tmpArg_v_2;
  CGUTIL::NotSupported(L"threadid expression");
  vdm_AddAtabReveil(tmpArg_v_2, vdm_val);
  vdm_leverBarriere();
  vdm_enVeille();
}

#endif // DEF_TimeStamp_WaitAbsolu

#ifndef DEF_TimeStamp_WaitRelatif

void vdm_TimeStamp::vdm_WaitRelatif (const Int &vdm_val) {
  vdm_WaitAbsolu(vdm_dateActuelle + vdm_val);
}

#endif // DEF_TimeStamp_WaitRelatif

#ifndef DEF_TimeStamp_NotifyThread

void vdm_TimeStamp::vdm_NotifyThread (const Int &vdm_tId) {
  vdm_tabReveil = vdm_tabReveil.DomRestrictedBy(mk_set(vdm_tId));
}

#endif // DEF_TimeStamp_NotifyThread

#ifndef DEF_TimeStamp_AddAtabReveil

void vdm_TimeStamp::vdm_AddAtabReveil (const Int &vdm_tId, const Generic &vdm_val) {
  vdm_tabReveil.ImpModify(vdm_tId, vdm_val);
}

#endif // DEF_TimeStamp_AddAtabReveil

#ifndef DEF_TimeStamp_leverBarriere

void vdm_TimeStamp::vdm_leverBarriere () {
  while (vdm_tabReveil.Dom().Card() == vdm_comptBarriere.GetValue()) {
    vdm_dateActuelle = vdm_dateActuelle + vdm_pas;
    {
      Set res_s_11;
      const Set e1_set_15 (vdm_tabReveil.Dom());
      Set tmpSet_30 (e1_set_15);
      Generic tmpe_29;
      for (bool bb_28 = tmpSet_30.First(tmpe_29); bb_28; bb_28 = tmpSet_30.Next(tmpe_29)) {
        const Int vdm_td (tmpe_29);
        Bool pred_16;
        if (!(static_cast<const Generic &>(vdm_tabReveil[vdm_td]) == Nil())) {
          const Generic e1_27 (static_cast<const Generic &>(vdm_tabReveil[vdm_td]));
          if (!CGUTIL::is_real(e1_27)) {
            CGUTIL::RunTime(L"A number was expected");
          }
          pred_16 = Bool((static_cast<Real>(vdm_tabReveil[vdm_td])).GetValue() <= vdm_dateActuelle.GetValue());
        }
        else {
          pred_16 = Bool(false);
        }
        if (pred_16.GetValue()) {
          res_s_11.Insert(vdm_td);
        }
      }
      const Set vdm_lesThreads (res_s_11);
      Set tmpSet_41 (vdm_lesThreads);
      Generic tmpe_40;
      for (bool bb_39 = tmpSet_41.First(tmpe_40); bb_39; bb_39 = tmpSet_41.Next(tmpe_40)) {
        const Int vdm_t (tmpe_40);
        vdm_tabReveil = vdm_tabReveil.DomRestrictedBy(mk_set(vdm_t));
      }
    }
  }
}

#endif // DEF_TimeStamp_leverBarriere

