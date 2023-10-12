//
// THIS FILE IS AUTOMATICALLY GENERATED!!
//
// Generated at 2021-12-01 by the VDM++ to C++ Code Generator
// (v9.0.7 - Sat 09-Jun-2018 10:11:21 +0900)
//
#ifndef _CGBase_h
#define _CGBase_h

#include "cg.h"


class vdm_IO;
class vdm_MATH;
class vdm_Capteur;
class vdm_Horloge;
class vdm_Contexte;
class vdm_Animation;
class vdm_Detecteur;
class vdm_TimeStamp;
class vdm_Controleur;
class vdm_SystemeRTP;
class vdm_Environnement;
class vdm_CapteurDistance;
class vdm_CapteurLatitude;
class vdm_CapteurLongitude;
class vdm_ControleurDispenseur;


class CGBase : public vdmBase {
private:
  virtual bool has_cg_base () const   {
    return true;
  }

public:
  virtual vdm_IO * Get_vdm_IO ()   {
    return 0;
  }

  virtual vdm_MATH * Get_vdm_MATH ()   {
    return 0;
  }

  virtual vdm_Capteur * Get_vdm_Capteur ()   {
    return 0;
  }

  virtual vdm_Horloge * Get_vdm_Horloge ()   {
    return 0;
  }

  virtual vdm_Contexte * Get_vdm_Contexte ()   {
    return 0;
  }

  virtual vdm_Animation * Get_vdm_Animation ()   {
    return 0;
  }

  virtual vdm_Detecteur * Get_vdm_Detecteur ()   {
    return 0;
  }

  virtual vdm_TimeStamp * Get_vdm_TimeStamp ()   {
    return 0;
  }

  virtual vdm_Controleur * Get_vdm_Controleur ()   {
    return 0;
  }

  virtual vdm_SystemeRTP * Get_vdm_SystemeRTP ()   {
    return 0;
  }

  virtual vdm_Environnement * Get_vdm_Environnement ()   {
    return 0;
  }

  virtual vdm_CapteurDistance * Get_vdm_CapteurDistance ()   {
    return 0;
  }

  virtual vdm_CapteurLatitude * Get_vdm_CapteurLatitude ()   {
    return 0;
  }

  virtual vdm_CapteurLongitude * Get_vdm_CapteurLongitude ()   {
    return 0;
  }

  virtual vdm_ControleurDispenseur * Get_vdm_ControleurDispenseur ()   {
    return 0;
  }

};

vdm_IO * ObjGet_vdm_IO (const ObjectRef &obj);

vdm_MATH * ObjGet_vdm_MATH (const ObjectRef &obj);

vdm_Capteur * ObjGet_vdm_Capteur (const ObjectRef &obj);

vdm_Horloge * ObjGet_vdm_Horloge (const ObjectRef &obj);

vdm_Contexte * ObjGet_vdm_Contexte (const ObjectRef &obj);

vdm_Animation * ObjGet_vdm_Animation (const ObjectRef &obj);

vdm_Detecteur * ObjGet_vdm_Detecteur (const ObjectRef &obj);

vdm_TimeStamp * ObjGet_vdm_TimeStamp (const ObjectRef &obj);

vdm_Controleur * ObjGet_vdm_Controleur (const ObjectRef &obj);

vdm_SystemeRTP * ObjGet_vdm_SystemeRTP (const ObjectRef &obj);

vdm_Environnement * ObjGet_vdm_Environnement (const ObjectRef &obj);

vdm_CapteurDistance * ObjGet_vdm_CapteurDistance (const ObjectRef &obj);

vdm_CapteurLatitude * ObjGet_vdm_CapteurLatitude (const ObjectRef &obj);

vdm_CapteurLongitude * ObjGet_vdm_CapteurLongitude (const ObjectRef &obj);

vdm_ControleurDispenseur * ObjGet_vdm_ControleurDispenseur (const ObjectRef &obj);

enum {
  VDM_IO,
  VDM_MATH,
  VDM_Capteur,
  VDM_Horloge,
  VDM_Contexte,
  VDM_Animation,
  VDM_Detecteur,
  VDM_TimeStamp,
  VDM_Controleur,
  VDM_SystemeRTP,
  VDM_Environnement,
  VDM_CapteurDistance,
  VDM_CapteurLatitude,
  VDM_CapteurLongitude,
  VDM_ControleurDispenseur
};

#endif // _CGBase_h
