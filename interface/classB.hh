#ifndef _ClassB_hh_
#define _ClassB_hh_
#include "TNamed.h"
#include "TH1.h"
#include <vector>
using namespace std;
class classB: public TNamed
{
public:
  classB();
  int n;
  double * p; ///< [n]
  void Do();
  ~classB();
  ClassDef(classB, 1)
};
#endif
