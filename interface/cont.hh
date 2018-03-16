#ifndef _CONT_HH_
#define _CONT_HH_
#include "TNamed.h"
#include "classA.hh"
#include <vector>
using namespace std;
class cont: public TNamed
{
public:
  cont();
  vector<classA *> v;
  void Do();
  ~cont();
  ClassDef(cont, 1)
};

#endif
