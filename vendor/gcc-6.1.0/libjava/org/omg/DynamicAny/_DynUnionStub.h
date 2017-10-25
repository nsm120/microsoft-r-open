
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __org_omg_DynamicAny__DynUnionStub__
#define __org_omg_DynamicAny__DynUnionStub__

#pragma interface

#include <org/omg/CORBA/portable/ObjectImpl.h>
#include <gcj/array.h>

extern "Java"
{
  namespace org
  {
    namespace omg
    {
      namespace CORBA
      {
          class Any;
          class Object;
          class TCKind;
          class TypeCode;
      }
      namespace DynamicAny
      {
          class DynAny;
          class _DynUnionStub;
      }
    }
  }
}

class org::omg::DynamicAny::_DynUnionStub : public ::org::omg::CORBA::portable::ObjectImpl
{

public:
  _DynUnionStub();
  virtual JArray< ::java::lang::String * > * _ids();
  virtual ::org::omg::DynamicAny::DynAny * member();
  virtual ::org::omg::CORBA::TCKind * discriminator_kind();
  virtual ::org::omg::DynamicAny::DynAny * get_discriminator();
  virtual jboolean has_no_active_member();
  virtual ::org::omg::CORBA::TCKind * member_kind();
  virtual ::java::lang::String * member_name();
  virtual void set_discriminator(::org::omg::DynamicAny::DynAny *);
  virtual void set_to_default_member();
  virtual void set_to_no_active_member();
  virtual ::org::omg::CORBA::TypeCode * type();
  virtual jboolean next();
  virtual void destroy();
  virtual ::org::omg::DynamicAny::DynAny * copy();
  virtual void rewind();
  virtual void assign(::org::omg::DynamicAny::DynAny *);
  virtual jint component_count();
  virtual ::org::omg::DynamicAny::DynAny * current_component();
  virtual jboolean equal(::org::omg::DynamicAny::DynAny *);
  virtual void from_any(::org::omg::CORBA::Any *);
  virtual ::org::omg::CORBA::Any * get_any();
  virtual jboolean get_boolean();
  virtual jchar get_char();
  virtual jdouble get_double();
  virtual ::org::omg::DynamicAny::DynAny * get_dyn_any();
  virtual jfloat get_float();
  virtual jint get_long();
  virtual jlong get_longlong();
  virtual jbyte get_octet();
  virtual ::org::omg::CORBA::Object * get_reference();
  virtual jshort get_short();
  virtual ::java::lang::String * get_string();
  virtual ::org::omg::CORBA::TypeCode * get_typecode();
  virtual jint get_ulong();
  virtual jlong get_ulonglong();
  virtual jshort get_ushort();
  virtual ::java::io::Serializable * get_val();
  virtual jchar get_wchar();
  virtual ::java::lang::String * get_wstring();
  virtual void insert_any(::org::omg::CORBA::Any *);
  virtual void insert_boolean(jboolean);
  virtual void insert_char(jchar);
  virtual void insert_double(jdouble);
  virtual void insert_dyn_any(::org::omg::DynamicAny::DynAny *);
  virtual void insert_float(jfloat);
  virtual void insert_long(jint);
  virtual void insert_longlong(jlong);
  virtual void insert_octet(jbyte);
  virtual void insert_reference(::org::omg::CORBA::Object *);
  virtual void insert_short(jshort);
  virtual void insert_string(::java::lang::String *);
  virtual void insert_typecode(::org::omg::CORBA::TypeCode *);
  virtual void insert_ulong(jint);
  virtual void insert_ulonglong(jlong);
  virtual void insert_ushort(jshort);
  virtual void insert_val(::java::io::Serializable *);
  virtual void insert_wchar(jchar);
  virtual void insert_wstring(::java::lang::String *);
  virtual jboolean seek(jint);
  virtual ::org::omg::CORBA::Any * to_any();
private:
  static const jlong serialVersionUID = -8921031953572009897LL;
public:
  static ::java::lang::Class * _opsClass;
  static ::java::lang::Class class$;
};

#endif // __org_omg_DynamicAny__DynUnionStub__