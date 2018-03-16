#ifndef _ClassA_hh_
#define _ClassA_hh_
#include "TNamed.h"
#include "TH1.h"
#include <vector>
using namespace std;
class classA: public TNamed
{
public:
  classA();
  int n;
  TH1 * _th1; ///< [n]
  void Do();
  ~classA();
  ClassDef(classA, 1)
};
#endif
