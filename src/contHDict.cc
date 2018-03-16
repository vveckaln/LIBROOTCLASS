// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME srcdIcontHDict

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
#include "/afs/cern.ch/work/v/vveckaln/private/LIBPROJROOTCLASS/interface/contH.hh"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_contH(void *p = 0);
   static void *newArray_contH(Long_t size, void *p);
   static void delete_contH(void *p);
   static void deleteArray_contH(void *p);
   static void destruct_contH(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::contH*)
   {
      ::contH *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::contH >(0);
      static ::ROOT::TGenericClassInfo 
         instance("contH", ::contH::Class_Version(), "interface/contH.hh", 7,
                  typeid(::contH), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::contH::Dictionary, isa_proxy, 4,
                  sizeof(::contH) );
      instance.SetNew(&new_contH);
      instance.SetNewArray(&newArray_contH);
      instance.SetDelete(&delete_contH);
      instance.SetDeleteArray(&deleteArray_contH);
      instance.SetDestructor(&destruct_contH);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::contH*)
   {
      return GenerateInitInstanceLocal((::contH*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::contH*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr contH::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *contH::Class_Name()
{
   return "contH";
}

//______________________________________________________________________________
const char *contH::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::contH*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int contH::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::contH*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *contH::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::contH*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *contH::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::contH*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void contH::Streamer(TBuffer &R__b)
{
   // Stream an object of class contH.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(contH::Class(),this);
   } else {
      R__b.WriteClassBuffer(contH::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_contH(void *p) {
      return  p ? new(p) ::contH : new ::contH;
   }
   static void *newArray_contH(Long_t nElements, void *p) {
      return p ? new(p) ::contH[nElements] : new ::contH[nElements];
   }
   // Wrapper around operator delete
   static void delete_contH(void *p) {
      delete ((::contH*)p);
   }
   static void deleteArray_contH(void *p) {
      delete [] ((::contH*)p);
   }
   static void destruct_contH(void *p) {
      typedef ::contH current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::contH

namespace ROOT {
   static TClass *vectorlETH1mUgR_Dictionary();
   static void vectorlETH1mUgR_TClassManip(TClass*);
   static void *new_vectorlETH1mUgR(void *p = 0);
   static void *newArray_vectorlETH1mUgR(Long_t size, void *p);
   static void delete_vectorlETH1mUgR(void *p);
   static void deleteArray_vectorlETH1mUgR(void *p);
   static void destruct_vectorlETH1mUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TH1*>*)
   {
      vector<TH1*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TH1*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TH1*>", -2, "vector", 214,
                  typeid(vector<TH1*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETH1mUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TH1*>) );
      instance.SetNew(&new_vectorlETH1mUgR);
      instance.SetNewArray(&newArray_vectorlETH1mUgR);
      instance.SetDelete(&delete_vectorlETH1mUgR);
      instance.SetDeleteArray(&deleteArray_vectorlETH1mUgR);
      instance.SetDestructor(&destruct_vectorlETH1mUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TH1*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<TH1*>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETH1mUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TH1*>*)0x0)->GetClass();
      vectorlETH1mUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETH1mUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETH1mUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TH1*> : new vector<TH1*>;
   }
   static void *newArray_vectorlETH1mUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TH1*>[nElements] : new vector<TH1*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETH1mUgR(void *p) {
      delete ((vector<TH1*>*)p);
   }
   static void deleteArray_vectorlETH1mUgR(void *p) {
      delete [] ((vector<TH1*>*)p);
   }
   static void destruct_vectorlETH1mUgR(void *p) {
      typedef vector<TH1*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TH1*>

namespace {
  void TriggerDictionaryInitialization_contHDict_Impl() {
    static const char* headers[] = {
"interface/contH.hh",
0
    };
    static const char* includePaths[] = {
"/cvmfs/cms.cern.ch/slc6_amd64_gcc530/lcg/root/6.06.00-ikhhed6/include",
"/afs/cern.ch/work/v/vveckaln/private/LIBPROJROOTCLASS/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "contHDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$interface/contH.hh")))  contH;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "contHDict dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "/afs/cern.ch/work/v/vveckaln/private/LIBPROJROOTCLASS/interface/contH.hh"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"contH", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("contHDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_contHDict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_contHDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_contHDict() {
  TriggerDictionaryInitialization_contHDict_Impl();
}
