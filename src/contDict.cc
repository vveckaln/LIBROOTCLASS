// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME srcdIcontDict

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "RConfig.h"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// Since CINT ignores the std namespace, we need to do so in this file.
namespace std {} using namespace std;

// Header files passed as explicit arguments
#include "/afs/cern.ch/work/v/vveckaln/private/LIBPROJROOTCLASS/interface/cont.hh"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_cont(void *p = 0);
   static void *newArray_cont(Long_t size, void *p);
   static void delete_cont(void *p);
   static void deleteArray_cont(void *p);
   static void destruct_cont(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::cont*)
   {
      ::cont *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::cont >(0);
      static ::ROOT::TGenericClassInfo 
         instance("cont", ::cont::Class_Version(), "interface/cont.hh", 7,
                  typeid(::cont), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::cont::Dictionary, isa_proxy, 4,
                  sizeof(::cont) );
      instance.SetNew(&new_cont);
      instance.SetNewArray(&newArray_cont);
      instance.SetDelete(&delete_cont);
      instance.SetDeleteArray(&deleteArray_cont);
      instance.SetDestructor(&destruct_cont);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::cont*)
   {
      return GenerateInitInstanceLocal((::cont*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::cont*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr cont::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *cont::Class_Name()
{
   return "cont";
}

//______________________________________________________________________________
const char *cont::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::cont*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int cont::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::cont*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *cont::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::cont*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *cont::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::cont*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void cont::Streamer(TBuffer &R__b)
{
   // Stream an object of class cont.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(cont::Class(),this);
   } else {
      R__b.WriteClassBuffer(cont::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_cont(void *p) {
      return  p ? new(p) ::cont : new ::cont;
   }
   static void *newArray_cont(Long_t nElements, void *p) {
      return p ? new(p) ::cont[nElements] : new ::cont[nElements];
   }
   // Wrapper around operator delete
   static void delete_cont(void *p) {
      delete ((::cont*)p);
   }
   static void deleteArray_cont(void *p) {
      delete [] ((::cont*)p);
   }
   static void destruct_cont(void *p) {
      typedef ::cont current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::cont

namespace ROOT {
   static TClass *vectorlEclassAmUgR_Dictionary();
   static void vectorlEclassAmUgR_TClassManip(TClass*);
   static void *new_vectorlEclassAmUgR(void *p = 0);
   static void *newArray_vectorlEclassAmUgR(Long_t size, void *p);
   static void delete_vectorlEclassAmUgR(void *p);
   static void deleteArray_vectorlEclassAmUgR(void *p);
   static void destruct_vectorlEclassAmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<classA*>*)
   {
      vector<classA*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<classA*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<classA*>", -2, "vector", 214,
                  typeid(vector<classA*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEclassAmUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<classA*>) );
      instance.SetNew(&new_vectorlEclassAmUgR);
      instance.SetNewArray(&newArray_vectorlEclassAmUgR);
      instance.SetDelete(&delete_vectorlEclassAmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEclassAmUgR);
      instance.SetDestructor(&destruct_vectorlEclassAmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<classA*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<classA*>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEclassAmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<classA*>*)0x0)->GetClass();
      vectorlEclassAmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEclassAmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEclassAmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<classA*> : new vector<classA*>;
   }
   static void *newArray_vectorlEclassAmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<classA*>[nElements] : new vector<classA*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEclassAmUgR(void *p) {
      delete ((vector<classA*>*)p);
   }
   static void deleteArray_vectorlEclassAmUgR(void *p) {
      delete [] ((vector<classA*>*)p);
   }
   static void destruct_vectorlEclassAmUgR(void *p) {
      typedef vector<classA*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<classA*>

namespace {
  void TriggerDictionaryInitialization_contDict_Impl() {
    static const char* headers[] = {
"interface/cont.hh",
0
    };
    static const char* includePaths[] = {
"/cvmfs/cms.cern.ch/slc6_amd64_gcc530/lcg/root/6.06.00-ikhhed6/include",
"/afs/cern.ch/work/v/vveckaln/private/LIBPROJROOTCLASS/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "contDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$interface/cont.hh")))  cont;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "contDict dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "/afs/cern.ch/work/v/vveckaln/private/LIBPROJROOTCLASS/interface/cont.hh"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"cont", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("contDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_contDict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_contDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_contDict() {
  TriggerDictionaryInitialization_contDict_Impl();
}
