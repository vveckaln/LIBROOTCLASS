// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME srcdIclassADict

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
#include "/afs/cern.ch/work/v/vveckaln/private/LIBPROJROOTCLASS/interface/classA.hh"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_classA(void *p = 0);
   static void *newArray_classA(Long_t size, void *p);
   static void delete_classA(void *p);
   static void deleteArray_classA(void *p);
   static void destruct_classA(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::classA*)
   {
      ::classA *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::classA >(0);
      static ::ROOT::TGenericClassInfo 
         instance("classA", ::classA::Class_Version(), "interface/classA.hh", 7,
                  typeid(::classA), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::classA::Dictionary, isa_proxy, 4,
                  sizeof(::classA) );
      instance.SetNew(&new_classA);
      instance.SetNewArray(&newArray_classA);
      instance.SetDelete(&delete_classA);
      instance.SetDeleteArray(&deleteArray_classA);
      instance.SetDestructor(&destruct_classA);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::classA*)
   {
      return GenerateInitInstanceLocal((::classA*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::classA*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr classA::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *classA::Class_Name()
{
   return "classA";
}

//______________________________________________________________________________
const char *classA::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::classA*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int classA::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::classA*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *classA::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::classA*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *classA::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::classA*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void classA::Streamer(TBuffer &R__b)
{
   // Stream an object of class classA.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(classA::Class(),this);
   } else {
      R__b.WriteClassBuffer(classA::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_classA(void *p) {
      return  p ? new(p) ::classA : new ::classA;
   }
   static void *newArray_classA(Long_t nElements, void *p) {
      return p ? new(p) ::classA[nElements] : new ::classA[nElements];
   }
   // Wrapper around operator delete
   static void delete_classA(void *p) {
      delete ((::classA*)p);
   }
   static void deleteArray_classA(void *p) {
      delete [] ((::classA*)p);
   }
   static void destruct_classA(void *p) {
      typedef ::classA current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::classA

namespace {
  void TriggerDictionaryInitialization_classADict_Impl() {
    static const char* headers[] = {
"interface/classA.hh",
0
    };
    static const char* includePaths[] = {
"/cvmfs/cms.cern.ch/slc6_amd64_gcc530/lcg/root/6.06.00-ikhhed6/include",
"/afs/cern.ch/work/v/vveckaln/private/LIBPROJROOTCLASS/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "classADict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$interface/classA.hh")))  classA;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "classADict dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "/afs/cern.ch/work/v/vveckaln/private/LIBPROJROOTCLASS/interface/classA.hh"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"classA", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("classADict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_classADict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_classADict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_classADict() {
  TriggerDictionaryInitialization_classADict_Impl();
}
