//
// THIS FILE IS AUTOMATICALLY GENERATED!!
//
// Generated at 2021-12-01 by the VDM++ to C++ Code Generator
// (v9.0.7 - Sat 09-Jun-2018 10:11:21 +0900)
//
// This file was genereted from "C:\\Users\\nmari\\GL_PROJET_M1_S7\\Two\\lib\\IO.vdmpp".

#ifndef _IO_h
#define _IO_h

#include <math.h>
#include "metaiv.h"
#include "cg.h"
#include "cg_aux.h"
#include "CGBase.h"
#include "IO_anonym.h"



class type_ref_IO : public virtual ObjectRef {
public:
  type_ref_IO () : ObjectRef() {}

  type_ref_IO (const Common &c) : ObjectRef(c) {}

  type_ref_IO (vdmBase * p) : ObjectRef(p) {}

  const wchar_t * GetTypeName () const   {
    return L"type_ref_IO";
  }

};



class vdm_IO : public virtual CGBase {
public:
  vdm_IO * Get_vdm_IO ()   {
    return this;
  }

  ObjectRef Self ()   {
    return ObjectRef(Get_vdm_IO());
  }

  int vdm_GetId ()   {
    return VDM_IO;
  }

  vdm_IO ();
  virtual ~vdm_IO () {}

  void vdm_init_IO ();
public:
  static type_bU2P vdm_freadval (const type_cL &);
  static Bool vdm_post_freadval (const type_cL &, const type_bU2P &);
  static Bool vdm_writeval (const Generic &);
  static Bool vdm_fwriteval (const type_cL &, const Generic &, const TYPE_IO_filedirective &);
  virtual Bool vdm_echo (const type_cL &);
  virtual Bool vdm_fecho (const type_cL &, const type_cL &, const Generic &);
  Bool vdm_pre_fecho (const type_cL &, const type_cL &, const Generic &);
  static void vdm_print (const Generic &);
  virtual type_cL vdm_ferror ();
  static void vdm_printf (const type_cL &, const type_GenericL &);
  static void vdm_println (const Generic &);
};


#endif // _IO_h