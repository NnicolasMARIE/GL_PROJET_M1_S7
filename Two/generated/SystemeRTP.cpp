//
// THIS FILE IS AUTOMATICALLY GENERATED!!
//
// Generated at 2021-12-01 by the VDM++ to C++ Code Generator
// (v9.0.7 - Sat 09-Jun-2018 10:11:21 +0900)
//
// This file was genereted from "C:\\Users\\nmari\\GL_PROJET_M1_S7\\Two\\SystemeRTP.vdmpp".


#include "SystemeRTP.h"
#include "Contexte.h"
#include "Detecteur.h"
#include "Controleur.h"
#include "CapteurDistance.h"
#include "CapteurLatitude.h"
#include "CapteurLongitude.h"
#include "ControleurDispenseur.h"

#ifdef DEF_SystemeRTP_USERIMPL

#include "SystemeRTP_userimpl.cpp"


#endif // DEF_SystemeRTP_USERIMPL



ObjectRef vdm_SystemeRTP::vdm_Pilote;

ObjectRef vdm_SystemeRTP::vdm_Detecteur1;

ObjectRef vdm_SystemeRTP::vdm_leContexte;

ObjectRef vdm_SystemeRTP::vdm_CapteurDistance1;

ObjectRef vdm_SystemeRTP::vdm_CapteurLatitude1;

ObjectRef vdm_SystemeRTP::vdm_CapteurLongitude1;

ObjectRef vdm_SystemeRTP::vdm_ControleurDispenseur1;



class init_SystemeRTP {
public:
  init_SystemeRTP ()   {
    vdm_SystemeRTP::vdm_leContexte = type_ref_Contexte(new vdm_Contexte());
    vdm_SystemeRTP::vdm_Pilote = type_ref_Controleur(new vdm_Controleur(Int(3), Bool(true)));
    vdm_SystemeRTP::vdm_CapteurLatitude1 = type_ref_CapteurLatitude(new vdm_CapteurLatitude(Int(1), Quote(L"CAPTEUR_LATITUDE"), Map(), vdm_leContexte, Int(5), Bool(true)));
    vdm_SystemeRTP::vdm_CapteurLongitude1 = type_ref_CapteurLongitude(new vdm_CapteurLongitude(Int(2), Quote(L"CAPTEUR_LONGITUDE"), Map(), vdm_leContexte, Int(5), Bool(true)));
    vdm_SystemeRTP::vdm_CapteurDistance1 = type_ref_CapteurDistance(new vdm_CapteurDistance(Int(3), Quote(L"CAPTEUR_DISTANCE"), Map(), vdm_leContexte, Int(5), Bool(true)));
    vdm_SystemeRTP::vdm_ControleurDispenseur1 = type_ref_ControleurDispenseur(new vdm_ControleurDispenseur(Int(4), Quote(L"CONTROLEUR_DISPENSEUR"), Int(2), Bool(true)));
    vdm_SystemeRTP::vdm_Detecteur1 = type_ref_Detecteur(new vdm_Detecteur(Int(5), Quote(L"DETECTEUR"), Int(5), Bool(true)));
  }

};

init_SystemeRTP Init_SystemeRTP;

vdm_SystemeRTP::vdm_SystemeRTP () {
  this->vdm_init_SystemeRTP();
}

void vdm_SystemeRTP::vdm_init_SystemeRTP () {
  this->RegisterAsBase(this->vdm_GetId());
}

