//
// THIS FILE IS AUTOMATICALLY GENERATED!!
//
// Generated at 2021-12-01 by the VDM++ to C++ Code Generator
// (v9.0.7 - Sat 09-Jun-2018 10:11:21 +0900)
//
#ifndef _CapteurLongitude_anonym_h
#define _CapteurLongitude_anonym_h


#include "CapteurLongitude_userdef.h"
#include "metaiv.h"

extern const Quote quote_NUL;

extern const Quote quote_DETECTEUR;

extern const Quote quote_DISPENSEUR;

extern const Quote quote_CAPTEUR_DISTANCE;

extern const Quote quote_CAPTEUR_LATITUDE;

extern const Quote quote_CAPTEUR_LONGITUDE;

extern const Quote quote_CONTROLEUR_DISPENSEUR;

class type_ref_CapteurLongitude;
class type_iiM;
#ifndef TAG_quote_NUL
#define TAG_quote_NUL (TAG_CapteurLongitude + 1)
#endif // TAG_quote_NUL

#ifndef TAG_quote_DETECTEUR
#define TAG_quote_DETECTEUR (TAG_CapteurLongitude + 2)
#endif // TAG_quote_DETECTEUR

#ifndef TAG_quote_DISPENSEUR
#define TAG_quote_DISPENSEUR (TAG_CapteurLongitude + 3)
#endif // TAG_quote_DISPENSEUR

#ifndef TAG_quote_CAPTEUR_DISTANCE
#define TAG_quote_CAPTEUR_DISTANCE (TAG_CapteurLongitude + 4)
#endif // TAG_quote_CAPTEUR_DISTANCE

#ifndef TAG_quote_CAPTEUR_LATITUDE
#define TAG_quote_CAPTEUR_LATITUDE (TAG_CapteurLongitude + 5)
#endif // TAG_quote_CAPTEUR_LATITUDE

#ifndef TAG_quote_CAPTEUR_LONGITUDE
#define TAG_quote_CAPTEUR_LONGITUDE (TAG_CapteurLongitude + 6)
#endif // TAG_quote_CAPTEUR_LONGITUDE

#ifndef TAG_quote_CONTROLEUR_DISPENSEUR
#define TAG_quote_CONTROLEUR_DISPENSEUR (TAG_CapteurLongitude + 7)
#endif // TAG_quote_CONTROLEUR_DISPENSEUR


#include "Contexte_anonym.h"

#ifndef TAG_type_ref_CapteurLongitude
#define TAG_type_ref_CapteurLongitude (TAG_CapteurLongitude + 8)
#endif // TAG_type_ref_CapteurLongitude

#ifndef DECL_type_iiM
#define DECL_type_iiM 1


class type_iiM : public MAP< Int,Int > {
public:
  type_iiM () : MAP< Int,Int >() {}

  type_iiM (const MAP< Int,Int > &c) : MAP< Int,Int >(c) {}

  type_iiM (const Common &c) : MAP< Int,Int >(c) {}

  const wchar_t * GetTypeName () const   {
    return L"type_iiM";
  }

};

#endif // DECL_type_iiM



#endif // _CapteurLongitude_anonym_h
