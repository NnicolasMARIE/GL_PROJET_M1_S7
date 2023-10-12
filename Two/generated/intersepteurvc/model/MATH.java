//
// THIS FILE IS AUTOMATICALLY GENERATED!!
//
// Generated at 2021-12-01 by the VDM++ to JAVA Code Generator
// (v9.0.7 - Sat 09-Jun-2018 10:11:21 +0900)
//
// ***** VDMTOOLS START Name=HeaderComment KEEP=NO
// ***** VDMTOOLS END Name=HeaderComment

// This file was genereted from "C:\\Users\\nmari\\GL_PROJET_M1_S7\\Two\\lib\\MATH.vdmpp".

// ***** VDMTOOLS START Name=package KEEP=NO
package intersepteurvc.model;
// ***** VDMTOOLS END Name=package

// ***** VDMTOOLS START Name=imports KEEP=NO
import jp.vdmtools.VDM.UTIL;
import jp.vdmtools.VDM.CGException;
// ***** VDMTOOLS END Name=imports



public class MATH {

// ***** VDMTOOLS START Name=child KEEP=NO
  static protected external_MATH child = new external_MATH();
// ***** VDMTOOLS END Name=child

// ***** VDMTOOLS START Name=pi KEEP=NO
  public static final Number pi = Double.valueOf(3.141592653589793);
// ***** VDMTOOLS END Name=pi

// ***** VDMTOOLS START Name=vdm_init_MATH KEEP=NO
  private void vdm_init_MATH () {}
// ***** VDMTOOLS END Name=vdm_init_MATH

// ***** VDMTOOLS START Name=MATH KEEP=NO
  public MATH () throws CGException {
    this.vdm_init_MATH();
  }
// ***** VDMTOOLS END Name=MATH

// ***** VDMTOOLS START Name=sin#1|Number KEEP=NO
  static public Number sin (final Number v) throws CGException {
    Number childResult_2 = child.impl_sin(v);
    return childResult_2;
  }
// ***** VDMTOOLS END Name=sin#1|Number

// ***** VDMTOOLS START Name=cos#1|Number KEEP=NO
  static public Number cos (final Number v) throws CGException {
    Number childResult_2 = child.impl_cos(v);
    return childResult_2;
  }
// ***** VDMTOOLS END Name=cos#1|Number

// ***** VDMTOOLS START Name=tan#1|Number KEEP=NO
  static public Number tan (final Number a) throws CGException {
    Number childResult_2 = child.impl_tan(a);
    return childResult_2;
  }
// ***** VDMTOOLS END Name=tan#1|Number

// ***** VDMTOOLS START Name=cot#1|Number KEEP=NO
  static public Number cot (final Number a) throws CGException {
    Number childResult_2 = child.impl_cot(a);
    return childResult_2;
  }
// ***** VDMTOOLS END Name=cot#1|Number

// ***** VDMTOOLS START Name=asin#1|Number KEEP=NO
  static public Number asin (final Number a) throws CGException {
    Number childResult_2 = child.impl_asin(a);
    return childResult_2;
  }
// ***** VDMTOOLS END Name=asin#1|Number

// ***** VDMTOOLS START Name=acos#1|Number KEEP=NO
  static public Number acos (final Number a) throws CGException {
    Number childResult_2 = child.impl_acos(a);
    return childResult_2;
  }
// ***** VDMTOOLS END Name=acos#1|Number

// ***** VDMTOOLS START Name=atan#1|Number KEEP=NO
  static public Number atan (final Number v) throws CGException {
    Number childResult_2 = child.impl_atan(v);
    return childResult_2;
  }
// ***** VDMTOOLS END Name=atan#1|Number

// ***** VDMTOOLS START Name=acot#1|Number KEEP=NO
  static public Number acot (final Number a) throws CGException {
    return atan(Double.valueOf(Long.valueOf(1).doubleValue() / a.doubleValue()));
  }
// ***** VDMTOOLS END Name=acot#1|Number

// ***** VDMTOOLS START Name=sqrt#1|Number KEEP=NO
  static public Number sqrt (final Number a) throws CGException {
    Number childResult_2 = child.impl_sqrt(a);
    return childResult_2;
  }
// ***** VDMTOOLS END Name=sqrt#1|Number

// ***** VDMTOOLS START Name=pi_f KEEP=NO
  static public Number pi_f () throws CGException {
    Number childResult_1 = child.impl_pi_f();
    return childResult_1;
  }
// ***** VDMTOOLS END Name=pi_f

// ***** VDMTOOLS START Name=srand#1|Number KEEP=NO
  static public void srand (final Number a) throws CGException {
    MATH.srand2(a);
  }
// ***** VDMTOOLS END Name=srand#1|Number

// ***** VDMTOOLS START Name=rand#1|Number KEEP=NO
  static public Number rand (final Number a) throws CGException {
    return child.impl_rand(a);
  }
// ***** VDMTOOLS END Name=rand#1|Number

// ***** VDMTOOLS START Name=srand2#1|Number KEEP=NO
  static public Number srand2 (final Number a) throws CGException {
    return child.impl_srand2(a);
  }
// ***** VDMTOOLS END Name=srand2#1|Number

// ***** VDMTOOLS START Name=exp#1|Number KEEP=NO
  static public Number exp (final Number a) throws CGException {
    Number childResult_2 = child.impl_exp(a);
    return childResult_2;
  }
// ***** VDMTOOLS END Name=exp#1|Number

// ***** VDMTOOLS START Name=ln#1|Number KEEP=NO
  static public Number ln (final Number a) throws CGException {
    Number childResult_2 = child.impl_ln(a);
    return childResult_2;
  }
// ***** VDMTOOLS END Name=ln#1|Number

// ***** VDMTOOLS START Name=log#1|Number KEEP=NO
  static public Number log (final Number a) throws CGException {
    Number childResult_2 = child.impl_log(a);
    return childResult_2;
  }
// ***** VDMTOOLS END Name=log#1|Number

// ***** VDMTOOLS START Name=fac#1|Number KEEP=NO
  static public Number fac (final Number a) throws CGException {
    Number childResult_2 = child.impl_fac(a);
    return childResult_2;
  }
// ***** VDMTOOLS END Name=fac#1|Number

}
