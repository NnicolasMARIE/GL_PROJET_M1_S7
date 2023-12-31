//
// THIS FILE IS AUTOMATICALLY GENERATED!!
//
// Generated at 2021-12-01 by the VDM++ to JAVA Code Generator
// (v9.0.7 - Sat 09-Jun-2018 10:11:21 +0900)
//
// ***** VDMTOOLS START Name=HeaderComment KEEP=NO
// ***** VDMTOOLS END Name=HeaderComment

// This file was genereted from "C:\\Users\\nmari\\GL_PROJET_M1_S7\\Two\\TimeStamp.vdmpp".

// ***** VDMTOOLS START Name=package KEEP=NO
package intersepteurvc.model;
// ***** VDMTOOLS END Name=package

// ***** VDMTOOLS START Name=imports KEEP=NO
import java.util.Map;
import java.util.Set;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import jp.vdmtools.VDM.UTIL;
import jp.vdmtools.VDM.CGException;
// ***** VDMTOOLS END Name=imports



public class TimeStamp {

// ***** VDMTOOLS START Name=dateActuelle KEEP=NO
  public Number dateActuelle = null;
// ***** VDMTOOLS END Name=dateActuelle

// ***** VDMTOOLS START Name=tabReveil KEEP=NO
  public Map tabReveil = new HashMap();
// ***** VDMTOOLS END Name=tabReveil

// ***** VDMTOOLS START Name=comptBarriere KEEP=NO
  public Number comptBarriere = null;
// ***** VDMTOOLS END Name=comptBarriere

// ***** VDMTOOLS START Name=pas KEEP=NO
  public static final Number pas = Long.valueOf(1);
// ***** VDMTOOLS END Name=pas

// ***** VDMTOOLS START Name=vdm_init_TimeStamp KEEP=NO
  private void vdm_init_TimeStamp () {
    try {
      dateActuelle = Long.valueOf(0);
      tabReveil = new HashMap();
    }
    catch (Exception e) {
      e.printStackTrace(System.out);
      System.out.println(e.getMessage());
    }
  }
// ***** VDMTOOLS END Name=vdm_init_TimeStamp

// ***** VDMTOOLS START Name=TimeStamp KEEP=NO
  public TimeStamp () throws CGException {
    this.vdm_init_TimeStamp();
  }
// ***** VDMTOOLS END Name=TimeStamp

// ***** VDMTOOLS START Name=TimeStamp#1|Number KEEP=NO
  public TimeStamp (final Number compteur) throws CGException {
    vdm_init_TimeStamp();
    comptBarriere = UTIL.NumberToLong(UTIL.clone(compteur));
  }
// ***** VDMTOOLS END Name=TimeStamp#1|Number

// ***** VDMTOOLS START Name=WaitRelatif#1|Number KEEP=NO
  public void WaitRelatif (final Number val) throws CGException {
    WaitAbsolu(Long.valueOf(dateActuelle.longValue() + val.longValue()));
  }
// ***** VDMTOOLS END Name=WaitRelatif#1|Number

// ***** VDMTOOLS START Name=WaitAbsolu#1|Number KEEP=NO
  public void WaitAbsolu (final Number val) throws CGException {
    Number tmpArg_v_2 = null;
    UTIL.NotSupported("threadId expression");
    AddAtabReveil(tmpArg_v_2, val);
    leverBarriere();
    enVeille();
  }
// ***** VDMTOOLS END Name=WaitAbsolu#1|Number

// ***** VDMTOOLS START Name=leverBarriere KEEP=NO
  private void leverBarriere () throws CGException {
    while (new HashSet(tabReveil.keySet()).size() == comptBarriere.longValue()) {
      dateActuelle = UTIL.NumberToLong(UTIL.clone(Long.valueOf(dateActuelle.longValue() + pas.longValue())));
      {
        Set res_s_11 = new HashSet();
        final Set e1_set_15 = new HashSet(tabReveil.keySet());
        Set tmpSet_28 = new HashSet(e1_set_15);
        for (Iterator enm_27 = tmpSet_28.iterator(); enm_27.hasNext(); ) {
          final Number td = UTIL.NumberToLong(enm_27.next());
          if ((!UTIL.equals(UTIL.NumberToLong(UTIL.NumberToLong(tabReveil.get(td))), null)) ? (UTIL.NumberToLong(UTIL.NumberToLong(tabReveil.get(td))).doubleValue() <= dateActuelle.longValue()) : false) {
            res_s_11.add(td);
          }
        }
        final Set lesThreads = res_s_11;
        Set tmpSet_43 = new HashSet(lesThreads);
        for (Iterator enm_42 = tmpSet_43.iterator(); enm_42.hasNext(); ) {
          final Number t = UTIL.NumberToLong(enm_42.next());
          Set var1_34 = new HashSet();
          var1_34.add(t);
          Map tmpMap_37 = new HashMap();
          Set domM_38 = new HashSet(tabReveil.keySet());
          Set tmpSet_41 = new HashSet(domM_38);
          for (Iterator enm_40 = tmpSet_41.iterator(); enm_40.hasNext(); ) {
            final Object elm_39 = (Object)enm_40.next();
            if (!UTIL.Contains(var1_34, elm_39)) 
              tmpMap_37.put(elm_39, tabReveil.get(elm_39));
          }
          tabReveil = (Map)UTIL.clone(tmpMap_37);
        }
      }
    }
  }
// ***** VDMTOOLS END Name=leverBarriere

// ***** VDMTOOLS START Name=AddAtabReveil#2|Number|Number KEEP=NO
  private void AddAtabReveil (final Number tId, final Number val) throws CGException {
    tabReveil.put(tId, val);
  }
// ***** VDMTOOLS END Name=AddAtabReveil#2|Number|Number

// ***** VDMTOOLS START Name=NotifyThread#1|Number KEEP=NO
  public void NotifyThread (final Number tId) throws CGException {
    Set var1_3 = new HashSet();
    var1_3.add(tId);
    Map tmpMap_6 = new HashMap();
    Set domM_7 = new HashSet(tabReveil.keySet());
    Set tmpSet_10 = new HashSet(domM_7);
    for (Iterator enm_9 = tmpSet_10.iterator(); enm_9.hasNext(); ) {
      final Object elm_8 = (Object)enm_9.next();
      if (!UTIL.Contains(var1_3, elm_8)) 
        tmpMap_6.put(elm_8, tabReveil.get(elm_8));
    }
    tabReveil = (Map)UTIL.clone(tmpMap_6);
  }
// ***** VDMTOOLS END Name=NotifyThread#1|Number

// ***** VDMTOOLS START Name=GetTime KEEP=NO
  public Number GetTime () throws CGException {
    return dateActuelle;
  }
// ***** VDMTOOLS END Name=GetTime

// ***** VDMTOOLS START Name=enVeille KEEP=NO
  private void enVeille () throws CGException {}
// ***** VDMTOOLS END Name=enVeille

}

