//
// THIS FILE IS AUTOMATICALLY GENERATED!!
//
// Generated at 2021-12-01 by the VDM++ to JAVA Code Generator
// (v9.0.7 - Sat 09-Jun-2018 10:11:21 +0900)
//
// ***** VDMTOOLS START Name=HeaderComment KEEP=NO
// ***** VDMTOOLS END Name=HeaderComment

// This file was genereted from "C:\\Users\\nmari\\GL_PROJET_M1_S7\\Two\\lib\\IO.vdmpp".

// ***** VDMTOOLS START Name=package KEEP=NO
package intersepteurvc.model;
// ***** VDMTOOLS END Name=package

// ***** VDMTOOLS START Name=imports KEEP=NO
import java.util.List;
import jp.vdmtools.VDM.UTIL;
import jp.vdmtools.VDM.Tuple;
import jp.vdmtools.VDM.CGException;
// ***** VDMTOOLS END Name=imports



public class IO {

// ***** VDMTOOLS START Name=child KEEP=NO
  static protected external_IO child = new external_IO();
// ***** VDMTOOLS END Name=child

// ***** VDMTOOLS START Name=vdm_init_IO KEEP=NO
  private void vdm_init_IO () {}
// ***** VDMTOOLS END Name=vdm_init_IO

// ***** VDMTOOLS START Name=IO KEEP=NO
  public IO () throws CGException {
    this.vdm_init_IO();
  }
// ***** VDMTOOLS END Name=IO

// ***** VDMTOOLS START Name=writeval#1|Object KEEP=NO
  static public Boolean writeval (final Object val) throws CGException {
    Boolean childResult_2 = child.impl_writeval(val);
    return childResult_2;
  }
// ***** VDMTOOLS END Name=writeval#1|Object

// ***** VDMTOOLS START Name=fwriteval#3|String|Object|Object KEEP=NO
  static public Boolean fwriteval (final String filename, final Object val, final Object fdir) throws CGException {
    Boolean childResult_4 = child.impl_fwriteval(filename, val, fdir);
    return childResult_4;
  }
// ***** VDMTOOLS END Name=fwriteval#3|String|Object|Object

// ***** VDMTOOLS START Name=freadval#1|String KEEP=NO
  static public Tuple freadval (final String filename) throws CGException {
    Tuple childResult_2 = child.impl_freadval(filename);
    return childResult_2;
  }
// ***** VDMTOOLS END Name=freadval#1|String

// ***** VDMTOOLS START Name=echo#1|String KEEP=NO
  public Boolean echo (final String text) throws CGException {
    return fecho(new String(""), text, null);
  }
// ***** VDMTOOLS END Name=echo#1|String

// ***** VDMTOOLS START Name=fecho#3|String|String|Object KEEP=NO
  public Boolean fecho (final String filename, final String text, final Object fdir) throws CGException {
    return child.impl_fecho(filename, text, fdir);
  }
// ***** VDMTOOLS END Name=fecho#3|String|String|Object

// ***** VDMTOOLS START Name=ferror KEEP=NO
  public String ferror () throws CGException {
    return child.impl_ferror();
  }
// ***** VDMTOOLS END Name=ferror

// ***** VDMTOOLS START Name=print#1|Object KEEP=NO
  static public void print (final Object arg) throws CGException {
    child.impl_print(arg);
  }
// ***** VDMTOOLS END Name=print#1|Object

// ***** VDMTOOLS START Name=println#1|Object KEEP=NO
  static public void println (final Object arg) throws CGException {
    child.impl_println(arg);
  }
// ***** VDMTOOLS END Name=println#1|Object

// ***** VDMTOOLS START Name=printf#2|String|List KEEP=NO
  static public void printf (final String format, final List args) throws CGException {
    child.impl_printf(format, args);
  }
// ***** VDMTOOLS END Name=printf#2|String|List

}

