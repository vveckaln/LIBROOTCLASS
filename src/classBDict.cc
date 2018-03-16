// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME srcdIclassBDict

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
#include "/afs/cern.ch/work/v/vveckaln/private/LIBPROJROOTCLASS/interface/classB.hh"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_classB(void *p = 0);
   static void *newArray_classB(Long_t size, void *p);
   static void delete_classB(void *p);
   static void deleteArray_classB(void *p);
   static void destruct_classB(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::classB*)
   {
      ::classB *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::classB >(0);
      static ::ROOT::TGenericClassInfo 
         instance("classB", ::classB::Class_Version(), "interface/classB.hh", 7,
                  typeid(::classB), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::classB::Dictionary, isa_proxy, 4,
                  sizeof(::classB) );
      instance.SetNew(&new_classB);
      instance.SetNewArray(&newArray_classB);
      instance.SetDelete(&delete_classB);
      instance.SetDeleteArray(&deleteArray_classB);
      instance.SetDestructor(&destruct_classB);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::classB*)
   {
      return GenerateInitInstanceLocal((::classB*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::classB*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr classB::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *classB::Class_Name()
{
   return "classB";
}

//______________________________________________________________________________
const char *classB::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::classB*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int classB::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::classB*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *classB::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::classB*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *classB::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::classB*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void classB::Streamer(TBuffer &R__b)
{
   // Stream an object of class classB.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(classB::Class(),this);
   } else {
      R__b.WriteClassBuffer(classB::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_classB(void *p) {
      return  p ? new(p) ::classB : new ::classB;
   }
   static void *newArray_classB(Long_t nElements, void *p) {
      return p ? new(p) ::classB[nElements] : new ::classB[nElements];
   }
   // Wrapper around operator delete
   static void delete_classB(void *p) {
      delete ((::classB*)p);
   }
   static void deleteArray_classB(void *p) {
      delete [] ((::classB*)p);
   }
   static void destruct_classB(void *p) {
      typedef ::classB current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::classB

namespace {
  void TriggerDictionaryInitialization_classBDict_Impl() {
    static const char* headers[] = {
"interface/classB.hh",
0
    };
    static const char* includePaths[] = {
"/cvmfs/cms.cern.ch/slc6_amd64_gcc530/lcg/root/6.06.00-ikhhed6/include",
"/afs/cern.ch/work/v/vveckaln/private/LIBPROJROOTCLASS/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "classBDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$interface/classB.hh")))  classB;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "classBDict dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "/afs/cern.ch/work/v/vveckaln/private/LIBPROJROOTCLASS/interface/classB.hh"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"classB", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("classBDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_classBDict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_classBDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_classBDict() {
  TriggerDictionaryInitialization_classBDict_Impl();
}
